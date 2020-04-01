// Fill out your copyright notice in the Description page of Project Settings.


#include "MulticastDelegateListener.h"
#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CookTrainGameModeBase.h"


// Sets default values
AMulticastDelegateListener::AMulticastDelegateListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent = PointLight;

	PointLight->SetVisibility(false);
}

void AMulticastDelegateListener::ToggleLight()
{
	PointLight->ToggleVisibility();
}

void AMulticastDelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		AGameModeBase* GameMode =
			UGameplayStatics::GetGameMode(TheWorld);
		ACookTrainGameModeBase * MyGameMode =
			Cast<ACookTrainGameModeBase>
			(GameMode);
		if (MyGameMode != nullptr)
		{
			MyGameMode -> cusMulticastDelegate.Remove(MyDelegateHandle);
		}
	}
}

// Called when the game starts or when spawned
void AMulticastDelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	PointLight->SetVisibility(false);

	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		AGameModeBase* GameMode =
			UGameplayStatics::GetGameMode(TheWorld);
		ACookTrainGameModeBase * MyGameMode =Cast<ACookTrainGameModeBase>(GameMode);
		if (MyGameMode != nullptr)
		{
			MyDelegateHandle = MyGameMode -> cusMulticastDelegate.AddUObject(this,&AMulticastDelegateListener::ToggleLight);
		}
	}
}

// Called every frame
void AMulticastDelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

