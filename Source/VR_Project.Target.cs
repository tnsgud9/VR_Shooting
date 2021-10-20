

using UnrealBuildTool;
using System.Collections.Generic;

public class VR_ProjectTarget : TargetRules
{
	public VR_ProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "VR_Project" } );
	}
}
