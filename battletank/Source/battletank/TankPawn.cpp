// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TankPlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cannon.h"
#include "Components/ArrowComponent.h"



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

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->SetupAttachment(TurretMesh);
}



void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
		
	MovementTank(DeltaTime);
		
	RotationTank(DeltaTime);
				
	RotationTurret();	
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

void ATankPawn::Fire()
{
	if (Cannon)
	{
		Cannon->Fire();
	}
}

void ATankPawn::SetupCannon(TSubclassOf<ACannon>NewCannonClass)
{
	if (!NewCannonClass)
	{
		return;
	}
	if (Cannon)
	{
		Cannon->Destroy();
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = this;
	SpawnParams.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(NewCannonClass, SpawnParams);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}

void ATankPawn::BeginPlay()
{
	Super::BeginPlay();
	TankController = Cast<ATankPlayerController>(GetController());
	SetupCannon(CannonClass);
}

void ATankPawn::MovementTank(float DeltaTime)
{
	FVector CurrentPosition = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();
	
	FVector ForwardMovement = ForwardVector * MoveSpeed * TargetForwardAxisValue * DeltaTime;
	FVector RightMovement = RightVector * MoveSpeed * TargetRightAxisValue * DeltaTime;
	FVector MovePosition = CurrentPosition + ForwardMovement + RightMovement;
	SetActorLocation(MovePosition, true);
}

void ATankPawn::RotationTank(float DeltaTime)
{
	FRotator CurrentRotation = GetActorRotation();
	float YawRotation = RotationSpeed * TargetRotateRightAxisValue * DeltaTime;
	float LerpTankRotation = FMath::Lerp(TargetRotateRightAxisValue, LerpTankRotation, TurretRotationInterpolationKey);

	//UE_LOG(LogTemp, Warning, TEXT("Non Lerp: %f, Lerp: %f"), TargetRotateRightAxisValue, LerpTankRotation);

	YawRotation += CurrentRotation.Yaw;
	FRotator NewRotation = FRotator(0.0f, YawRotation, 0.0f);
	SetActorRotation(NewRotation);
}

void ATankPawn::RotationTurret()
{
	if (TankController)
	{
		FVector MousePosition = TankController->GetMousePosition();
		FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), MousePosition);
		FRotator TurretRotation = TurretMesh->GetComponentRotation();
		TargetRotation.Pitch = TurretRotation.Pitch;
		TargetRotation.Roll = TurretRotation.Roll;

		FRotator NewTurretRotation = FMath::Lerp(TurretRotation, TargetRotation, TurretRotationInterpolationKey);

		//UE_LOG(LogTemp, Warning, TEXT("TargetRotation: %s, LerpRotation: %s"), *TargetRotation.ToString(), *NewTurretRotation.ToString());

		TurretMesh->SetWorldRotation(NewTurretRotation);
	}
}
