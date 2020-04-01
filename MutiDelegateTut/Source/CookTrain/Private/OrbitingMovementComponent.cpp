// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitingMovementComponent.h"
#include "UnrealMathUtility.h"
#include "Components/SceneComponent.h"

// Sets default values for this component's properties
UOrbitingMovementComponent::UOrbitingMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	RotationRate=30;
	OrbitDistance=500;
	CurrJiaodu=0;
	bRotateToFaceOutside=true;
}


// Called when the game starts
void UOrbitingMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOrbitingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	float CurrJiaoduRadins=FMath::DegreesToRadians<float>(CurrJiaodu);//角度转弧度

	SetRelativeLocation(
		FVector(OrbitDistance * FMath::Cos(CurrJiaoduRadins),
				OrbitDistance * FMath::Sin(CurrJiaoduRadins),
				RelativeLocation.Z)
	);//设置该组件位置

	if (bRotateToFaceOutside==true)
	{
		FVector LookDir=RelativeLocation.GetSafeNormal();
		FRotator LookRot=LookDir.Rotation();

		SetRelativeRotation(LookRot);
	}

	CurrJiaodu=FMath::Fmod( (CurrJiaodu + (RotationRate*DeltaTime)), 360);//处理旋转角度超过360°

}

