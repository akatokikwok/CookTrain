// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileType.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)//使其成为蓝图变量
class COOKBOOK_API UTileType : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
		int32 MovementCost;
	UPROPERTY()
		bool CanBeBuiltOn;
	UPROPERTY()
		FString TileName;
	
};
