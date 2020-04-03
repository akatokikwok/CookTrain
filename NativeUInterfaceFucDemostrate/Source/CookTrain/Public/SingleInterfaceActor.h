// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"

#include "SingleInterfaceActor.generated.h"

UCLASS()
class COOKTRAIN_API ASingleInterfaceActor : public AActor, public IMyInterface//使用IInterface而不是UInterface是为了防止sinleinterfaceactor多继承两份对象
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingleInterfaceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString GetTestName() override;

};
