// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBell.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "Openable.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

ADoorBell::ADoorBell()
{
	HasBeenPushed=false;
	auto Meshasset=ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	UStaticMeshComponent* sm=GetStaticMeshComponent();

	if (sm!=nullptr)
	{
		if (Meshasset.Object!=nullptr)
		{
			sm->SetStaticMesh(Meshasset.Object);
			sm->SetGenerateOverlapEvents(true);

		}
		sm->SetMobility(EComponentMobility::Movable);
		sm->SetWorldScale3D(FVector(0.5,0.5,0.5));
	}
	SetActorEnableCollision(true);
	
	DoorToOpen=nullptr;

}

bool ADoorBell::Can_Interact_Implementation()
{
	return !HasBeenPushed;
}

void ADoorBell::PerformInteract_Implementation()
{
	HasBeenPushed=true;
	if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
	{
		//DoorToOpen->Execute_Open();
		IOpenable::Execute_Open(DoorToOpen);
	}
}
