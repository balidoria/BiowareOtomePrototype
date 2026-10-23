// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class MotionWarping : ModuleRules
{
	public MotionWarping(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
PrivateIncludePaths.Add(
    Path.Combine(ModuleDirectory, "Private")
);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",		
				"Engine",
				"NetCore"
			}
			);
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore",
			}
			);
		
		if (Target.bBuildEditor)
		{
			PublicDependencyModuleNames.AddRange(new string []
				{
					"UnrealEd",
					"AnimGraph",
				});
		}
	}
}
