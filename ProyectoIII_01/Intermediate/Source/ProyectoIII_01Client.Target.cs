using UnrealBuildTool;

public class ProyectoIII_01ClientTarget : TargetRules
{
	public ProyectoIII_01ClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("ProyectoIII_01");
	}
}
