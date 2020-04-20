// Fill out your copyright notice in the Description page of Project Settings.


/*
Responding to property changed
events from the editor


When a designer changes the properties of an Actor placed in the level, it is
often important to show any visual results of that change immediately
rather than just when the level is simulated or played. When changes are
made using the Details panels, there's a special event that the editor emits
called PostEditChangeProperty, which gives the class instance a chance to
respond to the property being edited. This recipe shows you how to handle
PostEditChangeProperty for immediate in-editor feedback.
*/
#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PostEditChangePropertyActor.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOK_API APostEditChangePropertyActor : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	APostEditChangePropertyActor();

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	UPROPERTY(EditAnywhere)
		bool ShowStaticMesh = true;//ShowStaticMesh是其一个属性


	
};
