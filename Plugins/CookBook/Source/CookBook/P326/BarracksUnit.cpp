// Fill out your copyright notice in the Description page of Project Settings.


#include "BarracksUnit.h"
#include "Particles/ParticleSystemComponent.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"

// Sets default values
ABarracksUnit::ABarracksUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnPoint =
		CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
	auto ParticleSystem =
			ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem'"));
	if (ParticleSystem.Object != nullptr)
	{
		SpawnPoint->SetTemplate(ParticleSystem.Object);
	}
	SpawnPoint->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
	SpawnCollisionHandlingMethod =ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

}

// Called when the game starts or when spawned
void ABarracksUnit::BeginPlay()
{
	Super::BeginPlay();
	SpawnPoint->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform,NAME_None);
}

// Called every frame
void ABarracksUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetActorLocation() + FVector(10, 0, 0));
}

