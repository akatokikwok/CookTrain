// Fill out your copyright notice in the Description page of Project Settings.
/*
BlueprintReadWrite as a UPROPERTY specifier indicates to the Unreal Header Tool
that the property should have both Get and Set operations exposed for use in
Blueprints.
BlueprintReadOnly is, as the name implies, a specifier that only allows
Blueprint to retrieve the value of the property; never set it.
BlueprintReadOnly can be useful when a property is set by native code, but
should be accessible within Blueprint.
It should be noted that BlueprintReadWrite and BlueprintReadOnly don't specify
anything about the property being accessible in the Details panels or the
My Blueprint section of the editor: these specifiers only control the
generation of the getter/setter nodes for use in Blueprint graphs.

*/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlueprintPropertyActor.generated.h"

UCLASS()
class COOKBOOK_API ABlueprintPropertyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlueprintPropertyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = Cookbook)
		bool ReadWriteProperty;
	UPROPERTY(BlueprintReadOnly, Category = Cookbook)
		bool ReadOnlyProperty;

};
