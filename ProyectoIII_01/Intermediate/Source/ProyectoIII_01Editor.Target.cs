using UnrealBuildTool;

public class ProyectoIII_01EditorTarget : TargetRules
{
	public ProyectoIII_01EditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("ProyectoIII_01");
	}
}
