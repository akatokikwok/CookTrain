// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"
#include "CookTrainGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyTriggerVolume::AMyTriggerVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone=CreateDefaultSubobject<UBoxComponent>("TriggerZone");
	TriggerZone->SetBoxExtent(FVector(200,200,100));//设置盒体尺寸

}

void AMyTriggerVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto Message=FString::Printf(TEXT("%s entered me"),*(OtherActor->GetName()) );
	GEngine->AddOnScreenDebugMessage(-1,1,FColor::Red,Message);

	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		AGameModeBase* GameMode =UGameplayStatics::GetGameMode(TheWorld);

		ACookTrainGameModeBase * MyGameMode =Cast<ACookTrainGameModeBase>(GameMode);
		if (MyGameMode != nullptr)
		{
			MyGameMode->cusStandardDelegate.ExecuteIfBound();//使用ExcuteIfBound方法进行调用

			auto cusColor=FLinearColor(1,0,0,1);
			MyGameMode->cusParamDelegate.ExecuteIfBound(cusColor);

			MyGameMode->cusMulticastDelegate.Broadcast();
		}
	}

	OnPlayerEntered.Broadcast();


}

void AMyTriggerVolume::NotifyActorEndOverlap(AActor* OtherActor)
{
	auto Message = FString::Printf(TEXT("%s left me"), *(OtherActor->GetName()));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);
}

// Called when the game starts or when spawned
void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();


	
}

// Called every frame
void AMyTriggerVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

