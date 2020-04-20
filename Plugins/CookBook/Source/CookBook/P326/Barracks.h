// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "../../../../../../../Program_Files/UnrealEngine-4.22/Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "../../../../../../../Program_Files/UnrealEngine-4.22/Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Barracks.generated.h"

UCLASS()
class COOKBOOK_API ABarracks : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarracks();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		UStaticMeshComponent* BuildingMesh;
	UPROPERTY()
		UParticleSystemComponent* SpawnPoint;
	UPROPERTY()
		UClass* UnitToSpawn;
	UPROPERTY()
		float SpawnInterval;
	UFUNCTION()
		void SpawnUnit();
	UPROPERTY()
		FTimerHandle SpawnTimerHandle;

	UFUNCTION()
		void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
