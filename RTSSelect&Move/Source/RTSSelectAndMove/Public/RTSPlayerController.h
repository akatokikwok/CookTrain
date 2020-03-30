// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "RTSHud.h"

#include "RTSSelectAndMoveCharacter.h"



#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RTSSELECTANDMOVE_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ARTSPlayerController();

	ARTSHud* HUDPtr;

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
protected:
	void SelectionPressed();
	void SelectionReleased();
	void MoveReleased();

	TArray<ARTSSelectAndMoveCharacter*> SelectedActors;
	
};
