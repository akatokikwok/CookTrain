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


	TSharedPtr<const FExtensionBase> Extension;//ExtensionBase类智能指针变量 Extension
	TSharedPtr<FExtender> ToolbarExtender;// Extender类

	void CeShiButton_Clicked()
	{
		TSharedRef<SWindow> CookbookWindow=SNew(SWindow)
			.Title(FText::FromString(TEXT("This is a custom Window's Title ")))
			.ClientSize(FVector2D(800,600))
			.SupportsMaximize(false)
			.SupportsMinimize(false)
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
					.HAlign(HAlign_Center)
					.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
						.Text(FText::FromString(TEXT("Hello From Slate")))
				]   
				
			];


		/*
		调用MainframeModule进行添加子窗口
		*/
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

	void AddMenuExtension(FMenuBuilder& builder)
	{
		FSlateIcon IconBrush=FSlateIcon
			(
			FEditorStyle::GetStyleSetName(),
			"LevelEditor.ViewOptions",
			"LevelEditor.ViewOptions.Small"
			);

			builder.AddMenuEntry(FCookbookCommands::Get().CeShiButton);

	};

};