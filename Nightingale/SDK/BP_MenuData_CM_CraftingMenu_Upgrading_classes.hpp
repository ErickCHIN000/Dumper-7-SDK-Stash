#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C
class UBP_MenuData_CM_CraftingMenu_Upgrading_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_CraftingMenu_Upgrading_C* GetDefaultObj();

	void OnBackpackReady(bool Success, class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded);
	void OnAutoRefreshEnabled(class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CanBeUpgradedOrInfused(struct FInventoryEntry& InventoryEntry, bool* CanBeUpgraded, const struct FGameplayTagContainer& NonUpgradeableItemTags, const struct FGameplayTagContainer& UpgradeableItemTags, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue_1, const struct FInstanceData_Quality& CallFunc_TryGetItemQuality_Quality, enum class EGetResult CallFunc_TryGetItemQuality_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void CreateAndQuickAddEntry(struct FInventoryEntry& InventoryEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess);
	void PostInitialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle);
};

}


