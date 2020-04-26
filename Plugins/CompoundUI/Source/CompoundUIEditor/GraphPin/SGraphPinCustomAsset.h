#pragma once
#include "Editor\GraphEditor\Public\SGraphPin.h"
#include "EdGraph/EdGraphPin.h"

//UCLASS()
class COMPOUNDUIEDITOR_API SGraphPinCustomAsset : public SGraphPin
{
	SLATE_BEGIN_ARGS(SGraphPinCustomAsset) {}
	SLATE_END_ARGS()
		//is called when the widget is created.
	void Construct(const FArguments& InArgs, UEdGraphPin* InPin) ;
protected:

	virtual FSlateColor GetPinColor() const override 
	{ 
		return FSlateColor(FColor::Blue); 
	};

	virtual TSharedRef<SWidget> GetDefaultValueWidget() override;
	void ColorPicked(FLinearColor SelectedColor);
};