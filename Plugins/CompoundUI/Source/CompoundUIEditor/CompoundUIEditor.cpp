#pragma once

#include "CompoundUIEditor.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#include "CookTrainCommands.h"
#include "Editor\LevelEditor\Public\LevelEditor.h"
#include "Runtime\Slate\Public\SlateBasics.h"

#include "Developer/AssetTools/Public/IAssetTools.h"
#include "Developer/AssetTools/Public/AssetToolsModule.h"
#include "CompoundUIEditor\MyCustomAssetActions.h"

IMPLEMENT_GAME_MODULE(FCompoundUIEditorModule, CompoundUIEditor)

void FCompoundUIEditorModule::StartupModule()
{	//使用register函数注册命令
	FCookTrainCommands::Register();
	//commandlist转化成智能指针,为commandlist绑互动之后的反馈
	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList());
	CommandList->MapAction
	(
		FCookTrainCommands::Get().XinchuangkouButton, 
		FExecuteAction::CreateRaw(this, &FCompoundUIEditorModule::XinchuangkouButton_Clicked), FCanExecuteAction()
	);

	IAssetTools& AssetTools =
		FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	auto Actions = MakeShareable(new FMyCustomAssetActions);
	AssetTools.RegisterAssetTypeActions(Actions);
	CreatedAssetTypeActions.Add(Actions);



	
	//
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	ToolbarExtender = MakeShareable(new FExtender());
	Extension = ToolbarExtender->AddToolBarExtension(
		"Compile", 
		EExtensionHook::Before, 
		CommandList, 
		FToolBarExtensionDelegate::CreateRaw(this, &FCompoundUIEditorModule::AddToolbarExtension)
		);
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
		Extension = ToolbarExtender->AddMenuExtension(
		"LevelEditor",
		EExtensionHook::Before,
		CommandList,
		FMenuExtensionDelegate::CreateRaw(this, &FCompoundUIEditorModule::AddMenuExtension)
		);
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(ToolbarExtender);



}

void FCompoundUIEditorModule::ShutdownModule()
{
	ToolbarExtender->RemoveExtension(Extension.ToSharedRef());
	Extension.Reset();
	ToolbarExtender.Reset();

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("Asset Tools").Get();
	for (auto Action : CreatedAssetTypeActions)
	{
		AssetTools.UnregisterAssetTypeActions(Action.ToSharedRef());
	}
}
