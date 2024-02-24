#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x688 - 0x668)
// BlueprintGeneratedClass GA_Interaction_Giant.GA_Interaction_Giant_C
class UGA_Interaction_Giant_C : public UGA_Interaction_Base_C
{
public:
	class ABP_ResourceNode_IIM_C*                ResourceNodeIIM;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_SunGiant_C*      SunGiant;                                          // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          Player_State;                                      // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_Giant_C* GetDefaultObj();

	void PopulateVariables(bool* bSuccess, class UObject* CallFunc_GetInteractable_Interactable, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTag& MontageActionTag, bool IsSuccessful, const struct FGameplayTag& Temp_struct_Variable, class APawn* CallFunc_GetPawn_Pawn, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_Pawn_1, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_GetItemDataTraits_Traits, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
};

}


