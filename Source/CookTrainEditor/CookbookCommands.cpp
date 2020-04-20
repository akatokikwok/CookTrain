#include "CookbookCommands.h"
#include "CookTrainEditor.h"
#include "Commands.h"



void FCookbookCommands::RegisterCommands()
{
#define LOCTEXT_NAMESPACE ""

	UI_COMMAND(CeShiButton, "Cookbook", "Demo Cookbook Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(CeShiMenuButton, "Cookbook", "Demo Cookbook Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());

#undef LOCTEXT_NAMESPACE

}
