

using UnrealBuildTool;
using System.Collections.Generic;

public class VR_ProjectEditorTarget : TargetRules
{
	public VR_ProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "VR_Project" } );
	}
}
