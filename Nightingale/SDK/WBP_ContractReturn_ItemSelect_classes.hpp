#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x5A0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C
class UWBP_ContractReturn_ItemSelect_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_Cancel;                                         // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Confirm;                                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Sb_ItemGroups;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_72E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerTask                           Task;                                              // 0x4E0(0xA0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnItemsConfirmed;                                  // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryEntryIdAndQuantity>  IdAndQuantities;                                   // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ContractReturn_ItemSelect_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnConstraintGroupItemSelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsConstraintSatisfied_IsSatisfied, bool CallFunc_Not_PreBool_ReturnValue);
	void UnbindFromEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess);
	void Confirm_Item(const TArray<struct FInventoryEntry>& SelectedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GetSelectedItems_SelectedItem, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Initialize(const TArray<struct FItemConstraint>& AllItemConstraints, TScriptInterface<class IQuestTrackerInterface> QuestTracker, const struct FInventoryEntry& CurrentInventoryEntry, const TArray<struct FInventoryEntry>& PotentialItems, class APlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FItemConstraint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FItemConstraint>& CallFunc_GetTaskItemConstraints_OutItemConstraints, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryEntry>& CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems, bool CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue);
	void GetSelectedItemIdAndQuantities(TArray<struct FInventoryEntryIdAndQuantity>* IdAndQuantities);
	void Construct();
	void BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Confirm_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_ContractReturn_ItemSelect(int32 EntryPoint);
	void OnItemsConfirmed__DelegateSignature(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget);
};

}


