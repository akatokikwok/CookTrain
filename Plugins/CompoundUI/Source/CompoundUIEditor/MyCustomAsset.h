// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyCustomAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType,EditInlineNew)//更换UClass的说明符
class COMPOUNDUIEDITOR_API UMyCustomAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,Category="Custom Asset")
	FString Name;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Custom Asset")
	FString ColorName;
	
};
