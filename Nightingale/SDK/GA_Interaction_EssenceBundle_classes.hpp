#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x680 - 0x668)
// BlueprintGeneratedClass GA_Interaction_EssenceBundle.GA_Interaction_EssenceBundle_C
class UGA_Interaction_EssenceBundle_C : public UGA_Interaction_Base_C
{
public:
	class APawn*                                 Character;                                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_EssenceBundle_C*         Essence_Bundle;                                    // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_EssenceBundle_C* GetDefaultObj();

	void SendEssenceTelemetry(TArray<struct FInventoryEntry>& RewardEntries, class ANWXPlayerState* PlayerState, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess);
	void PopulateVariables(bool* bSuccess, class UObject* Local_Interactable, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Encounter_EssenceBundle_C* K2Node_DynamicCast_AsBP_Encounter_Essence_Bundle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& Local_Tags, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class APawn* CallFunc_GetPawn_Pawn_1, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags);
};

}


