// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RPG_ : ModuleRules
{
	public RPG_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
