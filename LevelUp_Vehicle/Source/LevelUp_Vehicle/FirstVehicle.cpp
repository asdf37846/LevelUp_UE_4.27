// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstVehicle.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "WheeledVehicleMovementComponent4W.h"

static const FName NAME_SteerInput("Steer");
static const FName NAME_ThrottleInput("Throttle");

AFirstVehicle::AFirstVehicle()
{
	UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());

	// 타이어 부하
	Vehicle4W->MinNormalizedTireLoad = 0.0f;
	Vehicle4W->MinNormalizedTireLoadFiltered = 0.2f;
	Vehicle4W->MaxNormalizedTireLoad = 100.0f;
	Vehicle4W->MaxNormalizedTireLoadFiltered = 100.0f;
	
	// 토크 설정
	Vehicle4W->MaxEngineRPM = 5000.0f;
	Vehicle4W->EngineSetup.TorqueCurve.GetRichCurve()->Reset();
	Vehicle4W->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(0.0f, 700.0f);
	Vehicle4W->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(2000.0f, 900.0f);
	Vehicle4W->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(3500.0f, 950.0f);
	Vehicle4W->EngineSetup.TorqueCurve.GetRichCurve()->AddKey(5000.0f, 870.0f);

	// 스티어링
	Vehicle4W->SteeringCurve.GetRichCurve()->Reset();
	Vehicle4W->SteeringCurve.GetRichCurve()->AddKey(0.0f, 1.0f);
	Vehicle4W->SteeringCurve.GetRichCurve()->AddKey(50.0f, 0.6f);
	Vehicle4W->SteeringCurve.GetRichCurve()->AddKey(120.0f, 0.4f);

	// 스프링 암
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 250.0f;
	SpringArm->bUsePawnControlRotation = true;
	 
	// 카메라 설정
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ChaseCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->FieldOfView = 90.f;
}

void AFirstVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AirControl(DeltaTime);
}

void AFirstVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(NAME_ThrottleInput, this, &AFirstVehicle::Throttle);
	PlayerInputComponent->BindAxis(NAME_SteerInput, this, &AFirstVehicle::Steering);
	PlayerInputComponent->BindAxis("LookUp", this, &AFirstVehicle::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AFirstVehicle::Turn);
}

void AFirstVehicle::Throttle(float Val)
{
	GetVehicleMovementComponent()->SetThrottleInput(Val);
}

void AFirstVehicle::Steering(float Val)
{
	GetVehicleMovementComponent()->SetSteeringInput(Val);
}

void AFirstVehicle::LookUp(float Val)
{
	if (Val != 0.f)
	{
		AddControllerPitchInput(Val);
	}
}

void AFirstVehicle::Turn(float Val)
{
	if (Val != 0.f)
	{
		AddControllerYawInput(Val);
	}
}

void AFirstVehicle::AirControl(float DeltaTime)
{

}