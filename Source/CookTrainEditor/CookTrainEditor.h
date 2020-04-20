#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"


#include "CookbookCommands.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Editor\MainFrame\Public\Interfaces\IMainFrameModule.h"

class FCookTrainEditorModule : public IModuleInterface
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedPtr<FExtender> ToolbarExtender;
	TSharedPtr<const FExtensionBase> Extension;

	void CeShiButton_Clicked()
	{
		TSharedRef<SWindow> CookbookWindow=SNew(SWindow)
			.Title(FText::FromString(TEXT("Cookbook Window")))
			.ClientSize(FVector2D(800,400))
			.SupportsMaximize(false)
			.SupportsMinimize(false);

		IMainFrameModule& MainFrameModule=FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));

		if (MainFrameModule.GetParentWindow().IsValid())
		{
			FSlateApplication::Get().AddWindowAsNativeChild(CookbookWindow,
				MainFrameModule.GetParentWindow().ToSharedRef());
		}
		else
		{
			FSlateApplication::Get().AddWindow(CookbookWindow);
		}
	};

	void AddToolbarExtension(FToolBarBuilder& builder)
	{
		FSlateIcon IconBrush =FSlateIcon(
				FEditorStyle::GetStyleSetName(),
				"LevelEditor.ViewOptions",
				"LevelEditor.ViewOptions.Small"
				); 

		builder.AddToolBarButton(
			FCookbookCommands::Get().CeShiButton, 
			NAME_None, 
			FText::FromString("CeShi Button"),
			FText::FromString("点击我进行下一步 /n click to go step"),
			IconBrush, NAME_None
			);

	};

};