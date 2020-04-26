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
#include "Editor\UnrealEd\Public\EdGraphUtilities.h"

#include "Editor\PropertyEditor\Public\PropertyEditorModule.h"
#include "CompoundUIEditor\DetailPanelCustomize\MyCustomAssetDetailsCustomization.h"
#include "CompoundUIEditor\GraphPin\MyCustomAssetPinFactory.h"

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


	//
	DisplayTestCommand = IConsoleManager::Get().RegisterConsoleCommand
	(
		TEXT("DisplayTestCommandWindow"),
		TEXT("test"),
		FConsoleCommandDelegate::CreateRaw(	this, &FCompoundUIEditorModule::DisplayWindow, FString(TEXT("Test Command Window")) ),
		ECVF_Default
	);

	DisplayUserSpecifiedWindow = IConsoleManager::Get().RegisterConsoleCommand//使用Get()静态函数，获得IConsoleManager的模块实例，类似于单例模式
	(
		TEXT("DisplayWindow"),//用户可以键入的真实命令行
		TEXT("test"),
		FConsoleCommandWithArgsDelegate::CreateLambda
		(
			[&](const TArray< FString >& Args)
			{
				FString WindowTitle;
				for (FString Arg : Args)
				{
					WindowTitle += Arg;
					WindowTitle.AppendChar(' ');
				}
				this->DisplayWindow(WindowTitle);
			}
		),
		ECVF_Default
		);



		PinFactory=MakeShareable(new FMyCustomAssetPinFactory());
		FEdGraphUtilities::RegisterVisualPinFactory(PinFactory);


		//
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(
			UMyCustomAsset::StaticClass()->GetFName(), 
			FOnGetDetailCustomizationInstance::CreateStatic(&FMyCustomAssetDetailCustomization::MakeInstance)
			);
		PropertyModule.RegisterCustomPropertyTypeLayout(
			UMyCustomAsset::StaticClass()->GetFName(), 
			FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FMyCustomAssetPropertyDetails::MakeInstance)
			);

		

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
	}	//	if (DisplayTestCommand)
	{
		IConsoleManager::Get().UnregisterConsoleObject(DisplayTestCommand);
		DisplayTestCommand = nullptr;
	}
	if (DisplayUserSpecifiedWindow)
	{
		IConsoleManager::Get().UnregisterConsoleObject(DisplayUserSpecifiedWindow);
		DisplayUserSpecifiedWindow = nullptr;
	}	////	FEdGraphUtilities::UnregisterVisualPinFactory(PinFactory); 
	PinFactory.Reset();

	//
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.UnregisterCustomClassLayout(UMyCustomAsset::StaticClass()->GetFName());
	
	
}
