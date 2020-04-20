using UnrealBuildTool;
using System.Collections.Generic;

public class CookTrainEditorTarget:TargetRules
{
    public CookTrainEditorTarget(TargetInfo Target) : base(Target)
    {
        Type= TargetType.Editor;

        ExtraModuleNames.AddRange(new string[] { "CookTrainEditor" });

    }

}