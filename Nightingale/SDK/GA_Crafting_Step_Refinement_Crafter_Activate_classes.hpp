#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x481 - 0x474)
// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Crafter_Activate.GA_Crafting_Step_Refinement_Crafter_Activate_C
class UGA_Crafting_Step_Refinement_Crafter_Activate_C : public UGA_Crafting_Step_Base_C
{
public:
	uint8                                        Pad_6701[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsPlayer;                                          // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Refinement_Crafter_Activate_C* GetDefaultObj();

	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_ActorHasTag_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Crafting_Step_Refinement_Crafter_Activate(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
};

}


