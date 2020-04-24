#pragma once

#include "Runtime\Slate\Public\Framework\Commands\Commands.h"
#include "Editor\EditorStyle\Public\EditorStyleSet.h"

class FCookTrainCommands : public TCommands<FCookTrainCommands>
{
public:
	FCookTrainCommands():
		TCommands<FCookTrainCommands>
	(
		FName(TEXT("UE4_CookTrain")),
		FText::FromString("UE4 CookTrain_Commands"),
		NAME_None,
		FEditorStyle::GetStyleSetName()
	)
	{};

public:
	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> XinchuangkouButton;
	TSharedPtr<FUICommandInfo> XinchuangkoucMenuButton;
};