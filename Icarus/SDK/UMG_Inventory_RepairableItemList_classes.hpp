#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x310 - 0x2F1)
// WidgetBlueprintGeneratedClass UMG_Inventory_RepairableItemList.UMG_Inventory_RepairableItemList_C
class UUMG_Inventory_RepairableItemList_C : public UUMG_Inventory_C
{
public:
	uint8                                        Pad_4CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridPanel*                     Grid;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRepairableItem>               RepairableItemArray;                               // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_Inventory_RepairableItemList_C* GetDefaultObj();

	void InitialiseWithItemList(TArray<struct FRepairableItem>& RepairableItemArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FRepairableItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_RepairItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
};

}


