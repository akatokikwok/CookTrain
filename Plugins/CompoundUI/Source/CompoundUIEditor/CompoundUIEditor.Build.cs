﻿#pragma once
using UnrealBuildTool;
public class CompoundUIEditor : ModuleRules
{
    public CompoundUIEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",//"UnrealEd","LevelEditor","Projects",
				// ... add other public dependencies that you statically link with here ...
                "GraphEditor",
                "Engine",
                "UnrealEd",
                "AppFramework"



            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {   "AppFramework",
                "PropertyEditor","PinnedCommandList",
                "InputCore", "RHI", "RenderCore",
                "CoreUObject","LevelEditor","Projects",
                "MainFrame",
                
                "AssetTools",




                 "Slate", "SlateCore", "EditorStyle",
                "GraphEditor", "BlueprintGraph","AssetTools"
				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }



}