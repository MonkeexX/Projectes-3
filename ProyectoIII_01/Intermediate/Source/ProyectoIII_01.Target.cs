using UnrealBuildTool;

public class ProyectoIII_01Target : TargetRules
{
	public ProyectoIII_01Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("ProyectoIII_01");
	}
}
