#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// BlueprintGeneratedClass BP_Item_interactable_VoidJar_NEW.BP_Item_interactable_VoidJar_NEW_C
class ABP_Item_interactable_VoidJar_NEW_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_interactable_VoidJar_NEW_C* GetDefaultObj();

	void Game_Load();
	void Show_Jar();
	void Interaction();
	void ExecuteUbergraph_BP_Item_interactable_VoidJar_NEW(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, bool CallFunc_dlg_get_quest_component_is_valid_1, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference_1, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1);
};

}


