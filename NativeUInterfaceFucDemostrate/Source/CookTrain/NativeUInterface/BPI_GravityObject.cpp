// Fill out your copyright notice in the Description page of Project Settings.


#include "BPI_GravityObject.h"

// Add default functionality here for any IBPI_GravityObject functions that are not pure virtual.

void IBPI_GravityObject::EnableGravity()
{
	AActor* ThisAsActor = Cast<AActor>(this);
	if (ThisAsActor != nullptr)
	{
		TArray<UPrimitiveComponent*> PrimitiveComponents;
		ThisAsActor->GetComponents(PrimitiveComponents);
		for (UPrimitiveComponent* Component : PrimitiveComponents)
		{
			Component->SetEnableGravity(true);
		}
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red,
			TEXT("Enabling Gravity"));
	}

}

void IBPI_GravityObject::DisableGravity()
{
	AActor* ThisAsActor = Cast<AActor>(this);
	if (ThisAsActor != nullptr)
	{
		TArray<UPrimitiveComponent*> PrimitiveComponents;
		ThisAsActor->GetComponents(PrimitiveComponents);
		for (UPrimitiveComponent* Component : PrimitiveComponents)
		{
			Component->SetEnableGravity(false);
		}
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red,
			TEXT("Disabling Gravity"));
	}
}
