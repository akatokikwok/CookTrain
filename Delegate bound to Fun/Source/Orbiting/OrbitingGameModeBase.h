// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OrbitingGameModeBase.generated.h"

/**
 * 
 */
DECLARE_DELEGATE(FStandardDelegateSignature)//宣扬一条委托为了写原生函数
UCLASS()
class ORBITING_API AOrbitingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	FStandardDelegateSignature MyStandardDelegate;

};
