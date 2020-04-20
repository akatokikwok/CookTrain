// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"


ADoor::ADoor()
{
	auto Meshasset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	UStaticMeshComponent* sm = GetStaticMeshComponent();

	if (sm != nullptr)
	{
		if (Meshasset.Object != nullptr)
		{
			sm->SetStaticMesh(Meshasset.Object);
			sm->SetGenerateOverlapEvents(true);

		}
		sm->SetMobility(EComponentMobility::Movable);
		sm->SetWorldScale3D(FVector(0.3, 2, 2));
	}
	SetActorEnableCollision(true);

}

bool ADoor::Can_Interact_Implementation()
{
	return true;
}

void ADoor::PerformInteract_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,1,FColor::Red,"Da Bu Kai");
}

void ADoor::Open_Implementation()
{
	AddActorLocalOffset(FVector(0,0,500));
}
