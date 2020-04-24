#pragma once


#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "Editor\UnrealEd\Public\UnrealEd.h"

#include "CookTrainCommands.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "Developer/AssetTools/Public/IAssetTypeActions.h"


class FCompoundUIEditorModule : public IModuleInterface
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

public:
	
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;

	TSharedPtr<FExtender> ToolbarExtender;
	TSharedPtr<const FExtensionBase> Extension;

public:
	void XinchuangkouButton_Clicked()
	{
		TSharedRef<SWindow> CookedNewWindow = SNew(SWindow)
			.Title(FText::FromString(TEXT("Cooked New Window")))
			.ClientSize(FVector2D(800, 400))
			.SupportsMaximize(false)
			.SupportsMinimize(false)			[				SNew(SVerticalBox)				+SVerticalBox::Slot().HAlign(HAlign_Center).VAlign(VAlign_Center)				[					SNew(STextBlock).Text(FText::FromString(TEXT("this is a slate test textblock")))				]						];		IMainFrameModule&  MainFrameModule =FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));		if (MainFrameModule.GetParentWindow().IsValid())
		{
			FSlateApplication::Get().AddWindowAsNativeChild(CookedNewWindow,MainFrameModule.GetParentWindow().ToSharedRef());
		}		else		{			FSlateApplication::Get().AddWindow(CookedNewWindow);		}
	};

	void AddToolbarExtension(FToolBarBuilder& builder)
	{
		FSlateIcon Icon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");

		builder.AddToolBarButton
		(
			FCookTrainCommands::Get().XinchuangkouButton,
			NAME_None,
			FText::FromString("My XinchuangkouButton"),
			FText::FromString("Click this Button to display a new Blank Windows"),
			Icon,
			NAME_None		
		);		
	};

	void AddMenuExtension(FMenuBuilder &builder)
	{
		FSlateIcon IconBrush =
			FSlateIcon(FEditorStyle::GetStyleSetName(),
				"LevelEditor.ViewOptions",
				"LevelEditor.ViewOptions.Small");
		builder.AddMenuEntry(FCookTrainCommands::Get().XinchuangkouButton);
	};
};