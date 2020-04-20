#include "CookTrainEditor.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "LevelEditor.h"
#include "SlateBasics.h"
#include "MultiBoxExtender.h"
#include "CookbookCommands.h"

IMPLEMENT_GAME_MODULE(FCookTrainEditorModule,CookTrainEditor)


void FCookTrainEditorModule::StartupModule()
{
	FCookbookCommands::Register();//使用FCookbookCommands类里的Register()方法

	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList());

	CommandList->MapAction(
		FCookbookCommands::Get().CeShiButton, 
		FExecuteAction::CreateRaw(this, &FCookTrainEditorModule::CeShiButton_Clicked), 
		FCanExecuteAction()
		);
	
	ToolbarExtender = MakeShareable(new FExtender());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	Extension = ToolbarExtender->AddToolBarExtension(
		"Compile",
		EExtensionHook::Before,
		CommandList, 
		FToolBarExtensionDelegate::CreateRaw(this, &FCookTrainEditorModule::AddToolbarExtension)
		);
	
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

}

void FCookTrainEditorModule::ShutdownModule()
{

	ToolbarExtender->RemoveExtension(Extension.ToSharedRef());
	Extension.Reset();
	ToolbarExtender.Reset();
}
