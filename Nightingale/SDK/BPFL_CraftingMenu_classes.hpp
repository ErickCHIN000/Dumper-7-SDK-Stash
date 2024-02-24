#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_CraftingMenu.BPFL_CraftingMenu_C
class UBPFL_CraftingMenu_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_CraftingMenu_C* GetDefaultObj();

	void GetItemsMatchingConstraint(struct FCraftingConstraintSlot& Constraint, class UObject* __WorldContext, bool* IsConstraintSatisfied, TArray<struct FInventoryEntry>* ItemEntries, const TArray<struct FInventoryEntry>& LAllItems, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void GetFilteredEntriesForContainer(TScriptInterface<class IItemContainer> Container, TArray<struct FInventoryEntry>& EntriesToIgnore, class UObject* __WorldContext, TArray<struct FInventoryEntry>* OutEntries, const struct FInventoryEntry& CurrentFilterEntry, int32 CurrentFilterIndex, const struct FInventoryEntry& CurrentIgnoredEntry, const TArray<struct FInventoryEntry>& EntriesToFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void CraftingMenu_AllSlotsSatisfied(TArray<struct FCraftingConstraintSlot>& CraftingSlots, class UObject* __WorldContext, bool* bAllMet, TArray<int32>* OutUnmetSlots, class ANWXPlayerController* PlayerController, class UInventoryComponentBase* Inventory, const TArray<struct FItemConstraint>& Constraints, const TArray<struct FInventoryEntry>& CacheItems, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreAllConstraintsMet_bAllMet, TArray<int32>& CallFunc_AreAllConstraintsMet_OutUnmetSlots, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CraftingMenu_FilterInventoryBySlotAndConstraints(const struct FCraftingConstraintSlot& SlotConstraints, TArray<struct FInventoryEntry>& ItemsToIgnore, class UObject* __WorldContext, TArray<struct FInventoryEntry>* EntriesMatchingConstraints, TArray<struct FInventoryEntry>* EntriesMatchingSlotType, class ANWXPlayerController* PlayerController, class UInventoryComponentBase* InventoryComponent, const struct FGameplayTagContainer& SlotFilter, const TArray<struct FInventoryEntry>& InventoryToFilter, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetFilteredEntriesForContainer_OutEntries, TArray<struct FInventoryEntry>& CallFunc_GetFilteredEntriesForContainer_OutEntries_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant);
};

}


