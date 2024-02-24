#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x281 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ItemContainerDisplay.UMG_ItemContainerDisplay_C
class UUMG_ItemContainerDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_109;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IcarusGrid_C*                     UMG_IcarusGrid;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AddedItem;                                         // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ItemContainerDisplay_C* GetDefaultObj();

	void Update(struct FItemData& Item, enum class ESlateVisibility Temp_byte_Variable, const struct FInventoryContainerData& CallFunc_GetInventoryContainerData_InventoryContainerData, enum class EDataValid CallFunc_GetInventoryContainerData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMG_Container_Item_Display_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_Container_Item_Display_C* CallFunc_Create_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class UInventory* CallFunc_GetInventoryContainer_Inventory, enum class EDataValid CallFunc_GetInventoryContainer_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFarmingSeedsRowHandle& CallFunc_GetSeedRow_SeedRow, bool CallFunc_GetSeedRow_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_UMG_ItemContainerDisplay(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded);
};

}


