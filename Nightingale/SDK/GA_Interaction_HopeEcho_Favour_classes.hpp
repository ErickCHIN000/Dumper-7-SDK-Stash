#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x678 - 0x668)
// BlueprintGeneratedClass GA_Interaction_HopeEcho_Favour.GA_Interaction_HopeEcho_Favour_C
class UGA_Interaction_HopeEcho_Favour_C : public UGA_Interaction_Base_C
{
public:
	class APawn*                                 Character;                                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_HopeEcho_Favour_C*       Hope_Echo_Favour;                                  // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_HopeEcho_Favour_C* GetDefaultObj();

	void PopulateVariables(bool* bSuccess, class UObject* Local_Interactable, class ABP_Encounter_HopeEcho_Favour_C* K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Favour, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& Local_Tags, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_K2_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_Pawn_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
};

}


