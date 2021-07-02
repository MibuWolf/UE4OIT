// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OIT426OIT : ModuleRules
{
	public OIT426OIT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
