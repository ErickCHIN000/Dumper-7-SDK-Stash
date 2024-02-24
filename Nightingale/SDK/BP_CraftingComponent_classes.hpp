#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x148 - 0xA8)
// BlueprintGeneratedClass BP_CraftingComponent.BP_CraftingComponent_C
class UBP_CraftingComponent_C : public UCraftingComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            ItemCrafted;                                       // 0xB0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftStarted;                                      // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftingStepStarted;                               // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_CraftingStationComponent_C*        CurrentCraftingStation;                            // 0xE0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftingStepEnded;                                 // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CraftingStepEffectApplied;                         // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FCraftingRecipeReference>      ActiveCraftingSessionRecipes;                      // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuid>                         ActiveSessionCraftIds;                             // 0x118(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                 ActiveCraftingSessionId;                           // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftedItemReceived;                               // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_CraftingComponent_C* GetDefaultObj();

	void EnterCraftingStation(class UBP_CraftingStationComponent_C* CraftingStation, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_NewGuid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnCraftingStationDestroyed(class UBP_CraftingStationComponent_C* CraftingStation, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void CallCraftedItemReceived(struct FCraftingRecipeReference& RecipeReference, struct FInventoryEntry& ReceivedItem, int32& ReceivedRecipeQuantity);
	void RemoveCraftingStationEffect(class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Request_CancelCraft(class UBP_CraftingStationComponent_C* CraftingStationComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void GetActiveCraftingSessionId(struct FGuid* SessionId);
	void LeaveActiveCraftingStation(class APlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnCraftStartedInCraftingSession(bool StartedSuccessfully, const struct FCraftingRecipeReference& RecipeId, int32 Quantity, const class FString& CrafterID, const struct FGuid& CraftInProgressId, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void GetActiveCraftingStation(class UBP_CraftingStationComponent_C** ActiveCraftingStation);
	void EndCraftItem(class UBP_CraftingStationComponent_C* CraftingStation, bool CraftingSuccess, const class FString& CrafterUniqueID, const struct FS_Crafting_CraftInProgress& CurrentCraftData, bool TemporaryAbilityGranted, const struct FGameplayAbilitySpecHandle& TemporaryAbilityHandle, class UAbilitySystemComponent* CraftingAbilitySystem, class APawn* CraftingPawn, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags, bool CallFunc_CanActivateAbilityByEvent_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue);
	void RemovePartsFromInventory(class UInventoryComponentBase* Inventory, TArray<struct FInventoryEntry>& InputParts, bool* Success, TScriptInterface<class IItemContainer> RealmCardDeck, const struct FInventoryEntry& CurrentInputPart, int32 CurrentQuantity, TScriptInterface<class IItemContainer> EssencePouch, bool OverallSuccess, TScriptInterface<class IItemContainer> LBackpackContainer, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, bool CallFunc_RemoveItem_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveItem_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Server_CancelCraft(class UBP_CraftingStationComponent_C* CraftingStationComponent);
	void Server_ExitCraftingStation(class UBP_CraftingStationComponent_C* CraftingStation);
	void ForceEndCraftItem(class UBP_CraftingStationComponent_C* CraftingStation, bool CraftingSuccess);
	void Client_CraftedItemReceived(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity);
	void ExecuteUbergraph_BP_CraftingComponent(int32 EntryPoint, const struct FCraftingRecipeReference& K2Node_CustomEvent_RecipeReference, const struct FInventoryEntry& K2Node_CustomEvent_ReceivedItem, int32 K2Node_CustomEvent_ReceivedRecipeQuantity, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStation_1, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStation, bool K2Node_CustomEvent_CraftingSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStationComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void CraftedItemReceived__DelegateSignature(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity);
	void CraftingStepEffectApplied__DelegateSignature(const class FString& CrafterID, class APawn* CrafterPawn, const struct FDataTableRowHandle& StepHandle);
	void CraftingStepEnded__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle);
	void CraftingStepStarted__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle);
	void CraftStarted__DelegateSignature(bool StartedSuccessfully, const struct FCraftingRecipeReference& RecipeId, int32 Quantity, const class FString& CrafterID, const struct FGuid& CraftInProgressId);
	void ItemCrafted__DelegateSignature(bool Success, const struct FCraftingRecipeReference& RecipeId, int32 CraftedQuantity, class ABP_PlayerController_C* Controller, TArray<struct FInventoryEntry>& CraftedItems);
};

}


