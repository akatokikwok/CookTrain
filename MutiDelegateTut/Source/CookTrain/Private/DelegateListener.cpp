// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateListener.h"
#include "NoExportTypes.h"
#include "Components/PointLightComponent.h"
#include "CookTrainGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

// Sets default values
ADelegateListener::ADelegateListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent=PointLight;

	PointLight->SetVisibility(false);//Ĭ�ϰѵƹر�
	PointLight->SetIntensity(50000);
	PointLight->SetLightColor(FLinearColor::Blue);//���õ���ʵ����ɫ
}

void ADelegateListener::EnableLight()
{
	PointLight->SetVisibility(true);//���õ���
}

void ADelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UWorld* TheWorld=GetWorld();
	if (TheWorld!=nullptr)
	{
	AGameModeBase* GameMode=UGameplayStatics::GetGameMode(TheWorld);
	ACookTrainGameModeBase* myGameMode=Cast<ACookTrainGameModeBase>(GameMode);
		if (myGameMode!=nullptr)
		{
			myGameMode->cusStandardDelegate.Unbind();//Unbind�������ע��
		}
	}
}

// Called when the game starts or when spawned
void ADelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* TheWorld=GetWorld();
	if (TheWorld!=nullptr)
	{
		AGameModeBase* GameMode=UGameplayStatics::GetGameMode(TheWorld);
		ACookTrainGameModeBase* MyGameMode=Cast<ACookTrainGameModeBase>(GameMode);
		if (MyGameMode != nullptr)
		{
			MyGameMode->cusStandardDelegate.BindUObject(this,&ADelegateListener::EnableLight);//ʹ��BindUObject����Ϊ�����һ��ί��
		}
	}
}

// Called every frame
void ADelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

