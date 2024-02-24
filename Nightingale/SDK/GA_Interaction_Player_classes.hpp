#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x678 - 0x668)
// BlueprintGeneratedClass GA_Interaction_Player.GA_Interaction_Player_C
class UGA_Interaction_Player_C : public UGA_Interaction_Base_C
{
public:
	class AActor*                                InteractablePlayerPawn;                            // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 InteractingPawn;                                   // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_Player_C* GetDefaultObj();

	double GetReviveHealth(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void PopulateVariables(bool* bSuccess, class APawn* CallFunc_GetPawn_Pawn, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, class ANWXPlayerState* PlayerState, const struct FGameplayTagContainer& ParentTags, bool InteractableIsDowned, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& Temp_struct_Variable_1, const struct FHitResult& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetReviveHealth_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, const struct FGameplayTag& CallFunc_DeathDownedTag_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_ActorHasTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void IsValidInDeathStates(bool* IsValid);
};

}


