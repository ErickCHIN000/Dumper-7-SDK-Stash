#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x3E1 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C
class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        Hb_SelectedCounter;                                // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemGrid_C*                       ItemGrid;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Linebreak;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_GroupName;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SelectionCounter;                              // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemConstraint                       Constraint;                                        // 0x370(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	TArray<struct FInventoryEntry>               AllItemsForQuest;                                  // 0x3B0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnEntrySelected;                                   // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryEntry>               SelectedEntries;                                   // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsMultiSelectEnabled;                              // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* GetDefaultObj();

	void GetItemCount(int32* ItemCount, int32 CurrentItemCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UnbindFromEvents(const TArray<class UWidget*>& AllWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void UpdateCounter(int32 CurrentItemCount, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetItemCount_ItemCount, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ClearEntryWidgetSelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess);
	void UpdateEntryWidgetCosmetics(struct FInventoryEntry& Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_FInventoryEntry_ReturnValue);
	void UpdateSelectedEntries(struct FInventoryEntry& Entry, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsConstraintSatisfied_IsSatisfied, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnEntryWidgetSelected(const struct FInventoryEntry& InventoryEntry);
	void CreateEmptyWidgets(int32 NumItemsDisplayed, const struct FInventoryEntry& ItemsBeingDisplayed, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CreateItemWidgets(TArray<struct FInventoryEntry>& InventoryEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue);
	void UpdateGroupName(const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize(const TArray<struct FInventoryEntry>& RelevantItems, const TArray<struct FInventoryEntry>& ConstraintItems, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant);
	void GetSelectedItems(TArray<struct FInventoryEntry>* SelectedItem);
	void IsConstraintSatisfied(bool* IsSatisfied, int32 CurrentItemCount, TArray<struct FItemConstraint>& K2Node_MakeArray_Array, bool CallFunc_AreAllConstraintsLooselyMet_bAllMet, TArray<int32>& CallFunc_AreAllConstraintsLooselyMet_OutUnmetSlots);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ContractReturn_ItemSelect_ConstraintGroup(int32 EntryPoint);
	void OnEntrySelected__DelegateSignature();
};

}


