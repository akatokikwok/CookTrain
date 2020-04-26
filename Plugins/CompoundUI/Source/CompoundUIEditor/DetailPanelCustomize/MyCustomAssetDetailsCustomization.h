#pragma once

#include "CompoundUIEditor\MyCustomAsset.h"
#include "Editor\PropertyEditor\Public\DetailLayoutBuilder.h"
#include "Editor\PropertyEditor\Public\IDetailCustomization.h"
#include "Editor\PropertyEditor\Public\IPropertyTypeCustomization.h"

class FMyCustomAssetDetailCustomization :public IDetailCustomization
{
public:
	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailBuilder ) override;

	void ColorPicked(FLinearColor SelectedColor);

	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShareable(new FMyCustomAssetDetailCustomization);
	};

	TWeakObjectPtr<class UMyCustomAsset> MyAsset;
};

class FMyCustomAssetPropertyDetails :public IPropertyTypeCustomization
{
public:
	void ColorPicked(FLinearColor SelectedColor);

	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FMyCustomAssetPropertyDetails);
	};

	UMyCustomAsset* MyAsset;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, 
		IDetailChildrenBuilder& ChildBuilder, 
		IPropertyTypeCustomizationUtils& CustomizationUtils) override;

	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, 
		FDetailWidgetRow& HeaderRow, 
		IPropertyTypeCustomizationUtils& CustomizationUtils) override;


};