// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitingMovementComponent.h"

// Sets default values for this component's properties
UOrbitingMovementComponent::UOrbitingMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	RotationSpeed = 50;
	OrbitDistacne = 100;
	CurrentValue = 0;
	RotateToFaceOutwards = true;
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
	float CurrentValueInRadins = FMath::DegreesToRadians<float>(CurrentValue);//弧度和角度转换

	SetRelativeLocation(FVector( (OrbitDistacne*FMath::Cos(CurrentValueInRadins))*(1)  ,
			 (OrbitDistacne*FMath::Sin(CurrentValueInRadins))*(1)  ,
			RelativeLocation.Z)
	);

	if (RotateToFaceOutwards)//开启外向点控制
	{
		FVector LookDir = ((RelativeLocation)*(1)).GetSafeNormal();
		FRotator LookAtRot = (LookDir.Rotation())*(1);
		SetRelativeRotation(LookAtRot);
	}


	CurrentValue = FMath::Fmod(	CurrentValue + (RotationSpeed * DeltaTime),360	);
}

