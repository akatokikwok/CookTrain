// Fill out your copyright notice in the Description page of Project Settings.


#include "King.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"

AKing::AKing()
{
	PrimaryActorTick.bCanEverTick=true;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>
		(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
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
}

void AKing::Die()
{
	OnKingDeath.Broadcast(this);
}
