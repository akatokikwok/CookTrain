// Fill out your copyright notice in the Description page of Project Settings.


#include "Peasant.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "Engine/Engine.h"
APeasant::APeasant()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>
		(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
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

void APeasant::Flee(AKing* DeadKing)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red,
		TEXT("IS outlasgting!   正在逃离"));	FVector FleeVector=GetActorLocation()-DeadKing->GetActorLocation();	FleeVector.Normalize();
	FleeVector*=1500;

	SetActorLocation(/*GetActorLocation()+FleeVector*/ 	FMath::Lerp(GetActorLocation(), GetActorLocation()+FleeVector, 0.5) );
}
