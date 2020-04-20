using UnrealBuildTool;


public class CookTrainEditor:ModuleRules
{
    public CookTrainEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core",
            "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore",
            "RenderCore", "MainFrame", "AssetTools", "AppFramework",
            "PropertyEditor"});

        PublicDependencyModuleNames.Add("CookTrain");

        PrivateDependencyModuleNames.AddRange(new string[] {
                "UnrealEd", "Slate", "SlateCore", "EditorStyle",
                "GraphEditor", "BlueprintGraph" });


    }

}