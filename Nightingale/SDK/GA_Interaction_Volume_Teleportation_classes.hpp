#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x668 - 0x668)
// BlueprintGeneratedClass GA_Interaction_Volume_Teleportation.GA_Interaction_Volume_Teleportation_C
class UGA_Interaction_Volume_Teleportation_C : public UGA_Interaction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UGA_Interaction_Volume_Teleportation_C* GetDefaultObj();

	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, class ATeleportationVolume* K2Node_DynamicCast_AsTeleportation_Volume, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags);
};

}


