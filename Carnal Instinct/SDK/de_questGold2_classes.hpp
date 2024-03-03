#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_questGold2.de_questGold2_C
class ADe_questGold2_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_questGold2_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_questGold2(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor);
};

}


