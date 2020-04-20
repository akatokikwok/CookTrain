// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoor.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Core\Public\Math\TransformVectorized.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"

ASlidingDoor::ASlidingDoor()
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
		SM->SetWorldScale3D(FVector(0.3, 2, 3));
	}
	SetActorEnableCollision(true);

	IsOpen = false;

	PrimaryActorTick.bStartWithTickEnabled = true;

}

void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
}

void ASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsOpen)
	{
		auto cusLambda = [this]() 
		{
			SetActorLocation(
				FMath::Lerp(GetActorLocation(),TargetLocation,0.05)					
			);
		};
		FTimerDelegate cusTimerDelegate;
		cusTimerDelegate.BindLambda(cusLambda);

		
		//GetWorld()->GetTimerManager().SetTimer(,)		//auto fun1 = SetActorLocation(FMath::Lerp(GetActorLocation(), TargetLocation, 0.05));

		FTimerHandle Timerhandle;	
		
		GetWorld()->GetTimerManager().SetTimer(Timerhandle,cusTimerDelegate,15,true,1);
	}
}

void ASlidingDoor::Open()
{
	TargetLocation=ActorToWorld().TransformPositionNoScale(FVector(0,0,2000));
	IsOpen=true;
}
