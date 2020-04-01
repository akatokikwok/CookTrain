// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserWidget.h"
#include "CookTrainGameModeBase.generated.h"

/**
 * 
 */

DECLARE_DELEGATE(FStandardDelegateSignature)

DECLARE_DELEGATE_OneParam(FParamDelegateSignature, FLinearColor)

DECLARE_MULTICAST_DELEGATE(FMulticastDelegateSignature)

UCLASS()
class COOKTRAIN_API ACookTrainGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	FStandardDelegateSignature cusStandardDelegate;

	FParamDelegateSignature cusParamDelegate;

	FMulticastDelegateSignature cusMulticastDelegate;

public:
	UFUNCTION(BlueprintCallable,Category=UIFuncs)
		void ButtonClicked()
	{
		UE_LOG(LogTemp,Warning,TEXT("UI Button Clicked"))
	}


	void BeginPlay() ;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="UI bufen")
	TSubclassOf<class UUserWidget> Widget;

};
