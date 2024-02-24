#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x298 - 0x230)
// WidgetBlueprintGeneratedClass InventoryQuickAccessBar.InventoryQuickAccessBar_C
class UInventoryQuickAccessBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_QuickSlots;                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_0;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_1;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_2;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_3;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_4;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickAccessSlot_C*                    QuickAccessSlot_5;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UQuickAccessSlot_C*>            QuickSlots;                                        // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnQuickAccessSlotsChanged;                         // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_Equipment_InventoryTab_C*          UI_Equipment_InventoryTab;                         // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInventoryQuickAccessBar_C* GetDefaultObj();

	void BuildQuickSlots(int32 Local_Index, int32 Local_ArrayElem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, TArray<int32>& K2Node_MakeArray_Array, const struct FInventoryItem& CallFunc_GetQuickAccessItem_QuickAccessItem, bool CallFunc_GetQuickAccessItem_bValidItem, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSlots(TArray<class UQuickAccessSlot_C*>* Array, TArray<class UQuickAccessSlot_C*>& K2Node_MakeArray_Array);
	void SetInventoryWidgetRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQuickAccessSlot_C*>& CallFunc_GetSlots_Array, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetNextNavGridItem(int32 CurrentIndex, enum class ENavDirection Direction, int32* NewIndex, bool* bIsValidNextItem, bool* bHitLimit, int32 CalcedIndex, int32 DirectionInt, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void AssignItemToSlot(int32 ItemInventorySlot, int32 QuickAccessSlot);
	void RebuildQuickAccessSlotWidgets();
	void EnableQuickAssignMode();
	void DisabledQuickAssignMode();
	void RemoveItemToSlot(int32 QuickSlotIndex);
	void ExecuteUbergraph_InventoryQuickAccessBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 K2Node_CustomEvent_ItemInventorySlot, int32 K2Node_CustomEvent_QuickAccessSlot, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_2, int32 K2Node_CustomEvent_QuickSlotIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_3);
	void OnQuickAccessSlotsChanged__DelegateSignature(bool QuickIndicatorAnim);
};

}


