#pragma once
#include "EdGraphUtilities.h"
#include "MyCustomAsset.h"
#include "SGraphPinCustomAsset.h"
#include "SGraphPin.h"
#include "EdGraph/EdGraphPin.h"

struct COMPOUNDUIEDITOR_API FMyCustomAssetPinFactory : public FGraphPanelPinFactory//使用FGraphPanelFactory类去自定义Object在蓝图里的引脚表现
{
public:
	virtual TSharedPtr<class SGraphPin> CreatePin(class UEdGraphPin* Pin) const override//使用重载虚函数CraetePin()
	{
		if (Pin->PinType.PinSubCategoryObject == UMyCustomAsset::StaticClass())
		{
			return SNew(SGraphPinCustomAsset, Pin);
		}
		else
		{
			return nullptr;
		}
	};
};