// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingMesh.h"
#include "Engine/Engine.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"

ATalkingMesh::ATalkingMesh()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	UStaticMeshComponent * SM = GetStaticMeshComponent();
	if (SM != nullptr)
	{
		if (MeshAsset.Object != nullptr)
		{
			SM->SetStaticMesh(MeshAsset.Object);
			SM->SetGenerateOverlapEvents(true);
		}
		SM->SetMobility(EComponentMobility::Movable);
	}
	SetActorEnableCollision(true);	
}

void ATalkingMesh::StartTalking_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red,
		TEXT("Func:StartTalking;Hello there. What is your name?"));
}
