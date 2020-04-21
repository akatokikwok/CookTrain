#pragma once

#include "Commands.h"
#include "EditorStyleSet.h"
#include "Text.h"

/*
声明FCookbookCommands自定义类
类内含有
本身构造函数
RegisterCommands()重载方法
两个属性

*/



//声明继承自TCommadns的自定义命令类FCookbookCommands，以F开头
class FCookbookCommands : public TCommands<FCookbookCommands>
{
public:
	/*FCookbookCommands()构造函数
	四个参数，第一参数是命令列FName,
	第二参数是Tootip,使用FText::FromString输出
	第三参数是父级组命令，一般为Name_None,
	第四参数是使用任何command icons的EditorStyle
	*/
	FCookbookCommands():TCommands<FCookbookCommands>
	(
		FName(TEXT("UE4_COOKXueXi")),
		FText::FromString("Cookbook Commands"),
		NAME_None,
		FEditorStyle::GetStyleSetName()		
	){};
	
public:

	virtual void RegisterCommands() override;//重载TCommands::RegisterCommands方法

	TSharedPtr<FUICommandInfo> CeShiButton;
	TSharedPtr<FUICommandInfo> CeShiMenuButton;



};