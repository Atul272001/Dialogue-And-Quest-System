// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DialogueQuestSystem : ModuleRules
{
	public DialogueQuestSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DialogueQuestSystem",
			"DialogueQuestSystem/Variant_Platforming",
			"DialogueQuestSystem/Variant_Platforming/Animation",
			"DialogueQuestSystem/Variant_Combat",
			"DialogueQuestSystem/Variant_Combat/AI",
			"DialogueQuestSystem/Variant_Combat/Animation",
			"DialogueQuestSystem/Variant_Combat/Gameplay",
			"DialogueQuestSystem/Variant_Combat/Interfaces",
			"DialogueQuestSystem/Variant_Combat/UI",
			"DialogueQuestSystem/Variant_SideScrolling",
			"DialogueQuestSystem/Variant_SideScrolling/AI",
			"DialogueQuestSystem/Variant_SideScrolling/Gameplay",
			"DialogueQuestSystem/Variant_SideScrolling/Interfaces",
			"DialogueQuestSystem/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
