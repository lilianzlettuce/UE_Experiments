// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Experiments : ModuleRules
{
	public UE_Experiments(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
