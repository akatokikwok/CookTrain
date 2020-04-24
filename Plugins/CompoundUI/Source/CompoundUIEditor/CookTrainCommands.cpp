#include "CookTrainCommands.h"
#include "CompoundUIEditor.h"
#include "Runtime\Slate\Public\Framework\Commands\Commands.h"

void FCookTrainCommands::RegisterCommands()
{
	#define LOCTEXT_NAMESPACE ""

	UI_COMMAND(XinchuangkouButton,"CookTrain","CookTrain Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(XinchuangkoucMenuButton, "CookTrain", "CookTrain Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());

	#undef  LOCTEXT_NAMESPACE

}
