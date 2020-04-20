// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Interactable.h"
#include "Openable.h"
#include "Door.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_API ADoor : public AStaticMeshActor,public IInteractable,public IOpenable
{
	GENERATED_BODY()
public:
	ADoor();
	UFUNCTION()
	virtual bool Can_Interact_Implementation() override;
	UFUNCTION()
	virtual void PerformInteract_Implementation() override;
	UFUNCTION()
	virtual void Open_Implementation() override;
	
};
