// Fill out your copyright notice in the Description page of Project Settings.


#include "CookTrainGameModeBase.h"
#include "Blueprint/UserWidget.h"

void ACookTrainGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	if (Widget)
	{
		UUserWidget* Menu=CreateWidget<UUserWidget>(GetWorld(), Widget,"NewWidgetBlueprint");

		if (Menu)
		{
			Menu->AddToViewport();
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor=true;
		}
	}
}
