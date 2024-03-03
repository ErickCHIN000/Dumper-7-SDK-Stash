#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_djeda_take50g_snake.de_djeda_take50g_snake_C
class ADe_djeda_take50g_snake_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_djeda_take50g_snake_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_djeda_take50g_snake(int32 EntryPoint, class ANpc_toses_C* CallFunc_GetActorOfClass_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class ANpc_djeda_C* CallFunc_GetActorOfClass_ReturnValue_1, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_add_quest_is_valid, bool CallFunc_add_quest_is_spawned, class Abp_quest_actor_C* CallFunc_add_quest_quest_actor, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget);
};

}


