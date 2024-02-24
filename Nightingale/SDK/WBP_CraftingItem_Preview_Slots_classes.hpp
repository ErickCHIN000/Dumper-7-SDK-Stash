#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x368 - 0x340)
// WidgetBlueprintGeneratedClass WBP_CraftingItem_Preview_Slots.WBP_CraftingItem_Preview_Slots_C
class UWBP_CraftingItem_Preview_Slots_C : public UNWXUserWidget
{
public:
	class UScrollBox*                            Sb_Slots;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_SlotList;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CraftingItem_SlotPanel_C*         WBP_Crafting_SlotPanel_0;                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CraftingItem_SlotPanel_C*         WBP_Crafting_SlotPanel_1;                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CraftingItem_SlotPanel_C*         WBP_Crafting_SlotPanel_2;                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingItem_Preview_Slots_C* GetDefaultObj();

	void UpdateSlotDetails(TArray<struct FInventoryEntry>& Ingredients, class UNWXMenuDataEntry* EntryToUpgrade, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CraftingItem_SlotPanel_C* K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel, bool K2Node_DynamicCast_bSuccess);
};

}


