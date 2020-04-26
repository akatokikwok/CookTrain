#include "MyCustomAssetDetailsCustomization.h"
#include "CompoundUIEditor/CompoundUIEditor.h"
#include "Editor\PropertyEditor\Public\IDetailsView.h"
#include "Editor\PropertyEditor\Public\DetailLayoutBuilder.h"
#include "Editor\PropertyEditor\Public\DetailCategoryBuilder.h"
#include "Runtime\AppFramework\Public\Widgets\Colors\SColorPicker.h"
#include "Runtime\SlateCore\Public\Widgets\SBoxPanel.h"
#include "Editor\PropertyEditor\Public\DetailWidgetRow.h"
void FMyCustomAssetDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	const TArray< TWeakObjectPtr<UObject> >& SelectedObjects = DetailBuilder.GetDetailsView()->GetSelectedObjects();
	for (int32 ObjectIndex = 0; !MyAsset.IsValid() && ObjectIndex < SelectedObjects.Num(); ++ObjectIndex)
	{
		const TWeakObjectPtr<UObject>& CurrentObject = SelectedObjects[ObjectIndex];
		if (CurrentObject.IsValid())
		{
			MyAsset = Cast<UMyCustomAsset>(CurrentObject.Get());
		}
	}
	DetailBuilder.EditCategory("CustomCategory", FText::GetEmpty(), ECategoryPriority::Important)
		.AddCustomRow(FText::GetEmpty())
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.VAlign(VAlign_Center)
		[
			SNew(SColorPicker)
			.OnColorCommitted(this, &FMyCustomAssetDetailCustomization::ColorPicked)
		]
		];
}

void FMyCustomAssetDetailCustomization::ColorPicked(FLinearColor SelectedColor)
{
	if (MyAsset.IsValid())
	{
		MyAsset.Get()->ColorName = SelectedColor.ToFColor(false).ToHex();
	}
}



void FMyCustomAssetPropertyDetails::ColorPicked(FLinearColor SelectedColor)
{
	if (MyAsset)
	{
		MyAsset->ColorName = SelectedColor.ToFColor(false).ToHex();
	}
}

void FMyCustomAssetPropertyDetails::CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{

}

void FMyCustomAssetPropertyDetails::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	UObject* PropertyValue = nullptr;
	auto GetValueResult = PropertyHandle->GetValue(PropertyValue);
	HeaderRow.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget()
		];
	HeaderRow.ValueContent()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.VAlign(VAlign_Center)
		[
			SNew(SColorPicker)
			.OnColorCommitted(this, &FMyCustomAssetPropertyDetails::ColorPicked)
		]
		];
}
