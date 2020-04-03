// Fill out your copyright notice in the Description page of Project Settings.


#include "AntiGravityVolume.h"
#include "../../../../../Work/UnrealEngine-4.22/Engine/Source/Runtime/Engine/Classes/Components/BoxComponent.h"
#include "BPI_GravityObject.h"

// Sets default values
AAntiGravityVolume::AAntiGravityVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent =
		CreateDefaultSubobject<UBoxComponent>("CollisionComponent");
	CollisionComponent->SetBoxExtent(FVector(200, 200, 400));
	RootComponent = CollisionComponent;

}

// Called when the game starts or when spawned
void AAntiGravityVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAntiGravityVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAntiGravityVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
	IBPI_GravityObject* GravityObject = Cast<IBPI_GravityObject>(OtherActor);//若存在接口类实例GravityObject
	if (GravityObject != nullptr)
	{
		GravityObject->DisableGravity();
	}
}
void AAntiGravityVolume::NotifyActorEndOverlap(AActor* OtherActor)
{
	IBPI_GravityObject* GravityObject = Cast<IBPI_GravityObject>(OtherActor);
	if (GravityObject != nullptr)
	{
		GravityObject->EnableGravity();
	}
}