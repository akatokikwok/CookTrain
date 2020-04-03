// Fill out your copyright notice in the Description page of Project Settings.


#include "CookTrainGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Public/SingleInterfaceActor.h"
#include "Public/MyInterface.h"
#include "EngineUtils.h"
//#include "Blueprint/UserWidget.h"
ACookTrainGameModeBase::ACookTrainGameModeBase()
{
}

//#include "Kismet/GameplayStatics.h"


void ACookTrainGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	/*Widget����*/
	if (Widget)
	{
		UUserWidget* Menu=CreateWidget<UUserWidget>(GetWorld(), Widget,"NewWidgetBlueprint");

		if (Menu)
		{
			Menu->AddToViewport();
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor=true;
		}
	}

	FTransform SpawnLocation;
	ASingleInterfaceActor* SpawnedActor=GetWorld()->SpawnActor<ASingleInterfaceActor>(ASingleInterfaceActor::StaticClass(), SpawnLocation);
	
	
	/*��� ASingleInterfaceActor��ʵ���˽ӿ�,��GM����������Ӧ�ķ���*/	
	UClass* ActorClass = SpawnedActor->GetClass();
	if (ActorClass->ImplementsInterface(UMyInterface::StaticClass() ))
	{
		GEngine->AddOnScreenDebugMessage(-1,3,FColor::Red,TEXT("If the ASingleInterfaceActor* implements the interface, this message will be displayed"));
	}



	/*ʹ�õ�������������������ʵ���˽ӿڵ�actor*/
	for (TActorIterator<AActor> It(GetWorld(), AActor::StaticClass());
		It;
		++It)
	{
		AActor* Actor= *It;
		IMyInterface* MyInterfaceInstance=Cast<IMyInterface>(Actor);

		if (MyInterfaceInstance!=nullptr)
		{	
			MyInterfaceInstances.Add(MyInterfaceInstance);
		}
	}

	FString cusMessage=FString::Printf(TEXT("%d actors implement the interface"), MyInterfaceInstances.Num() );
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, cusMessage );
	

	



}
