// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomAssetFactory.h"
#include "MyCustomAsset.h"
#include "CompoundUI\Public\CompoundUI.h"

UMyCustomAssetFactory::UMyCustomAssetFactory():Super()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyCustomAsset::StaticClass();
}

UObject* UMyCustomAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	auto NewObjectAsset = NewObject<UMyCustomAsset>(InParent,
		InClass, InName, Flags);
	return NewObjectAsset;
}
