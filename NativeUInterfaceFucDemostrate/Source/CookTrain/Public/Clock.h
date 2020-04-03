// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Clock.generated.h"

UCLASS()
class COOKTRAIN_API AClock : public AActor
{
	GENERATED_BODY()

	FDelegateHandle MyDelegateHandle;

	UPROPERTY()
		USceneComponent* RootSceneComponent;
	UPROPERTY()
		UStaticMeshComponent* ClockFace;
	UPROPERTY()
		USceneComponent* HourHandle;
	UPROPERTY()
		UStaticMeshComponent* HourHand;
	UPROPERTY()
		USceneComponent* MinuteHandle;
	UPROPERTY()
		UStaticMeshComponent* MinuteHand;
	UFUNCTION()
		void TimeChanged(int32 Hours, int32 Minutes);
	
	
public:	
	// Sets default values for this actor's properties
	AClock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
