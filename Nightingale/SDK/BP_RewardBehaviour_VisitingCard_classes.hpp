#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_VisitingCard.BP_RewardBehaviour_VisitingCard_C
class UBP_RewardBehaviour_VisitingCard_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          NPCAddressTag;                                     // 0x38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_VisitingCard_C* GetDefaultObj();

	void InventoryCheck(class APlayerState* PlayerState, const struct FInventoryEntry& VisitingCard, bool* RewardVisitingCard, bool VisitingCardFound, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetPlayerRealmCards_RealmCardsArray, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void RewardVisitingCard(class APlayerState* PlayerState, class APlayerState* LPlayerState, const struct FItemDataReference& LItemReference, class UBP_InventoryComponent_C* LPlayerInventory, const struct FInventoryEntry& LRealmCard, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_InventoryCheck_RewardVisitingCard, const struct FInventoryEntry& CallFunc_CreateNPCAddressRealmCardForThisDeploy_OutInventoryEntry, enum class EGetResult CallFunc_CreateNPCAddressRealmCardForThisDeploy_Branches, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IItemContainer> CallFunc_AddItemToCorrectContainer_OutContainerAddedTo, int32 CallFunc_AddItemToCorrectContainer_OutAmountAdded, TArray<struct FGuid>& CallFunc_AddItemToCorrectContainer_OutModifiedInstances, bool CallFunc_AddItemToCorrectContainer_ReturnValue);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_VisitingCard(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


