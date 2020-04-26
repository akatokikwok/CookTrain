﻿#include "MyCustomAssetActions.h"
#include "CompoundUIEditor.h"
#include "MyCustomAsset.h"

bool FMyCustomAssetActions::HasActions(const TArray<UObject*>& InObjects) const
{
	return true;
}

void FMyCustomAssetActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		FText::FromString("CustomAssetAction"),
		FText::FromString("Action from Cook Recipe"),
		FSlateIcon(FEditorStyle::GetStyleSetName(),"LevelEditor.ViewOptions"),
		FUIAction(
			FExecuteAction::CreateRaw(this,&FMyCustomAssetActions::MyCustomAssetContext_Clicked),
		FCanExecuteAction()
		)	);
}

FText FMyCustomAssetActions::GetName() const
{
	return FText::FromString(TEXT("My Custom Asset"));
}

UClass* FMyCustomAssetActions::GetSupportedClass() const
{
	return UMyCustomAsset::StaticClass();
}

FColor FMyCustomAssetActions::GetTypeColor() const
{
	return FColor::Emerald;
}

uint32 FMyCustomAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}
