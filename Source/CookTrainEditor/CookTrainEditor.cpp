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

	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList());//MakeShareable方法使对象隐式转换成智能指针

	//用MapAction()建立映射
	CommandList->MapAction(
		FCookbookCommands::Get().CeShiButton, //Get函数对于FcookbookCommands是单例模式
		FExecuteAction::CreateRaw(this, &FCookTrainEditorModule::CeShiButton_Clicked), //FCookTrainEditorModule是C++类，非UEObject所以使用CreateRaw
		FCanExecuteAction()//第三参数是一个委托，用来测试是否这个映射被执行了
		);
	//ToolbarExtender被隐式转换成智能指针
	ToolbarExtender = MakeShareable(new FExtender());
	//声明LevelEditorModule模块
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");


	/*ToolbarExtender指针调AddMenuExtension方法
	为levelEditorModule执行添加Extender
	*/
	Extension = ToolbarExtender->AddMenuExtension(
		"LevelEditor", 
		EExtensionHook::Before, 
		CommandList, 
		FMenuExtensionDelegate::CreateRaw(this, &FCookTrainEditorModule::AddMenuExtension)
		);
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(ToolbarExtender);
	
	/*ToolbarExtender指针调AddMenuExtension方法
		为levelEditorModule执行添加Extender
	*/
	Extension = ToolbarExtender->AddToolBarExtension(
		"Content",
		EExtensionHook::First,
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
