// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "RTSSelectAndMove.h"
#include "RTSSelectAndMoveCharacter.h"
#include "RTSHud.generated.h"

/**
 * 
 */
UCLASS()
class RTSSELECTANDMOVE_API ARTSHud : public AHUD
{
	GENERATED_BODY()
public:
	FVector2D InitialPoint;
	FVector2D CurrentPoint;
	FVector2D GetMousePos2D();

	virtual void DrawHUD() override;

	bool bStartSelecting = false;

	TArray<ARTSSelectAndMoveCharacter*> FoundActors;
};
