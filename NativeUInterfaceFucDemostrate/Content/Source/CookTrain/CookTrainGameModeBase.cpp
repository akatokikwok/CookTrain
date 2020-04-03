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

	/*Widget互动*/
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
	
	
	/*如果 ASingleInterfaceActor类实现了接口,由GM对它作出相应的反馈*/	
	UClass* ActorClass = SpawnedActor->GetClass();
	if (ActorClass->ImplementsInterface(UMyInterface::StaticClass() ))
	{
		GEngine->AddOnScreenDebugMessage(-1,3,FColor::Red,TEXT("If the ASingleInterfaceActor* implements the interface, this message will be displayed"));
	}



	/*使用迭代器遍历出符合条件实现了接口的actor*/
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
