using UnrealBuildTool;

public class ProyectoIII_01ServerTarget : TargetRules
{
	public ProyectoIII_01ServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("ProyectoIII_01");
	}
}
