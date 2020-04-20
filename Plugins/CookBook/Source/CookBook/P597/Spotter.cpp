// Fill out your copyright notice in the Description page of Project Settings.


#include "Spotter.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Engine\Public\WorldCollision.h"
#include "GameFramework/Actor.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Engine\Public\DrawDebugHelpers.h"

ASpotter::ASpotter()
{
	// Set this actor to call Tick() every frame. You can
// turn this off to improve performance if
// you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set up visual aspect of the spotter
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));

	UStaticMeshComponent * SM = GetStaticMeshComponent();

	if (SM != nullptr)
	{
		if (MeshAsset.Object != nullptr)
		{
			SM->SetStaticMesh(MeshAsset.Object);
			SM->SetGenerateOverlapEvents(true);
		}
		SM->SetMobility(EComponentMobility::Movable);
		SM->SetRelativeRotation(FRotator(90, 0, 0));
	}
}


void ASpotter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto EndLocation = GetActorLocation() + ActorToWorld().TransformVector(FVector(0, 0, -2000));

	/* 检查pawn前面是否有物体*/
	FHitResult HitResult;
	GetWorld()->SweepSingleByChannel
	(	HitResult,
		GetActorLocation(), 
		EndLocation, 
		FQuat::Identity,
		ECC_Camera,/*ECollisionChannel::*/
		FCollisionShape::MakeSphere(25),
		FCollisionQueryParams("Spot", true, this)
	);

	APawn* SpottedPlayer = Cast<APawn>(HitResult.Actor.Get());
	// If there is call the OnPlayerSpotted function
	if (SpottedPlayer != nullptr)
	{
		OnPlayerSpotted(SpottedPlayer);
	}
	// Displays where we are checking for collision
	DrawDebugLine(GetWorld(), GetActorLocation(), EndLocation, FColor::Red);

}
