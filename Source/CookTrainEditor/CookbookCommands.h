#pragma once

#include "Commands.h"
#include "EditorStyleSet.h"

class FCookbookCommands : public TCommands<FCookbookCommands>
{
public:
	FCookbookCommands():TCommands<FCookbookCommands>
	(
		FName(TEXT("UE4_COOKXueXi")),
		FText::FromString("Cookbook Commands"),
		NAME_None,
		FEditorStyle::GetStyleSetName()
	){
	
	};
	
	
	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> CeShiButton;
	TSharedPtr<FUICommandInfo> CeShiMenuButton;



};