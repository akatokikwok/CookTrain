// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserWidget.h"
#include "OrbitingMovementComponent.h"
#include "Public/MyInterface.h"
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

	ACookTrainGameModeBase();

	TArray<IMyInterface*> MyInterfaceInstances;

public:
	UFUNCTION(BlueprintCallable,Category=UIFuncs)
	void ButtonClicked()
	{
		UE_LOG(LogTemp,Warning,TEXT("UI Button Clicked"))
		GEngine->AddOnScreenDebugMessage(-1,3,FColor::Red,TEXT("an xia le"));
	}


	void BeginPlay() ;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="UI bufen")
	TSubclassOf<class UUserWidget> Widget;
//public:
//	UPROPERTY()
//	UOrbitingMovementComponent* cusOrbitComp;
};
