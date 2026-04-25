using UnrealBuildTool;

public class Playtime_MultiplayerTarget : TargetRules
{
	public Playtime_MultiplayerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Playtime_Multiplayer");
	}
}
