// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DinoGame : ModuleRules
{
	public DinoGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		SharedPCHHeaderFile = "DinoGameSharedPCH.h";

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
