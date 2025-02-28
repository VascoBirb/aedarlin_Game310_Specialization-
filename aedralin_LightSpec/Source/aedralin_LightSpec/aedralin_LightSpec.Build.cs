// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class aedralin_LightSpec : ModuleRules
{
	public aedralin_LightSpec(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
