#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_handin_havart.de_handin_havart_C
class ADe_handin_havart_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_handin_havart_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_handin_havart(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, const struct FS_ItemData& CallFunc_Get_Equipment_Item_by_ID_item, bool CallFunc_Get_Equipment_Item_by_ID_Found, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_msl_get_actor_by_id_is_valid_1, class AActor* CallFunc_msl_get_actor_by_id_actor_reference_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget);
};

}


