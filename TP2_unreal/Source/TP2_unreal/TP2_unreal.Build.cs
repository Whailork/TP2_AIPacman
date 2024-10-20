// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP2_unreal : ModuleRules
{
	public TP2_unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "Niagara", "Niagara" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"});
        // Behavior tree
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule", "NavigationSystem","Niagara" });
    }
}
