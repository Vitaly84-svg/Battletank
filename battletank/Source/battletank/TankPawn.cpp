// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"



ATankPawn::ATankPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxCollision;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(BoxCollision);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BoxCollision);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}



void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	

	Movement(DeltaTime);

	FRotator CurrentRotation = GetActorRotation();
	float YawRotation = RotationSpeed * TargetRotateRightAxisValue * DeltaTime;
	YawRotation += CurrentRotation.Yaw;
	FRotator NewRotation = FRotator(0.0f, YawRotation, 0.0f);
	SetActorRotation(NewRotation);
}

void ATankPawn::MoveForward(float AxisValue)
{
	TargetForwardAxisValue = AxisValue;
}

void ATankPawn::MoveRight(float AxisValue)
{
	TargetRightAxisValue = AxisValue;
}

void ATankPawn::RotateRight(float AxisValue)
{
	TargetRotateRightAxisValue = AxisValue;
}

void ATankPawn::Movement(float DeltaTime)
{
	FVector CurrentPosition = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();
	
	FVector ForwardMovement = ForwardVector * MoveSpeed * TargetForwardAxisValue * DeltaTime;
	FVector RightMovement = RightVector * MoveSpeed * TargetRightAxisValue * DeltaTime;
	FVector MovePosition = CurrentPosition + ForwardMovement + RightMovement;
	SetActorLocation(MovePosition, true);
}

