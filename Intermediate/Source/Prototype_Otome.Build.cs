using UnrealBuildTool;

public class Prototype_Otome : ModuleRules
{
	public Prototype_Otome(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.Add("Core");
		PrivateDependencyModuleNames.Add("Core");
	}
PublicDependencyModuleNames.AddRange(new string { “Core”, “CoreUObject”, “Engine”, “InputCore”, “EnhancedInput” , “MotionWarping” })
}
