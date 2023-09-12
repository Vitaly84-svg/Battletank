// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"



UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void SetupInputComponent() override;

	virtual void Tick(float DeltaSeconds) override;

	FVector GetMousePosition() { return MousePosition; };

protected:

	UPROPERTY()
	class ATankPawn* TankPawn;

	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void RotateRight(float AxisValue);

	FVector MousePosition;
};