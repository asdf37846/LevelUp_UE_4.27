// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "FirstVehicle.generated.h"

/**
 * 
 */
UCLASS()
class LEVELUP_VEHICLE_API AFirstVehicle : public AWheeledVehicle
{
	GENERATED_BODY()
public:
	AFirstVehicle();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// 차량 조종
	void Throttle(float Val);
	void Steering(float Val);

	// 시야
	void LookUp(float Val);
	void Turn(float Val);
	
	// 차량 공중 제어
	void AirControl(float DeltaTime);
protected:

	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
};
