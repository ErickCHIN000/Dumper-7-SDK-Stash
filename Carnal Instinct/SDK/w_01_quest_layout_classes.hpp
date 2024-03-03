#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass w_01_quest_layout.w_01_quest_layout_C
class UW_01_quest_layout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UW_02_quest_panel_C*                   W_02_quest_panel;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_01_quest_mini_C*                    W_09_quest_mini;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_quest_component_C*                 Quest_component;                                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_01_quest_layout_C* GetDefaultObj();

	void Notify_quest_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, bool Is_started, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_1, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_2, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2);
	void Notify_sub_objective_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_1, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_2, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2);
	void Notify_objective_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, bool Is_started, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget);
	class Ubp_notification_component_C* Get_notify_component(bool CallFunc_dlg_get_notification_component_is_valid, class Ubp_notification_component_C* CallFunc_dlg_get_notification_component_notification_reference, bool CallFunc_IsValid_ReturnValue);
	void Init_widget();
	void Init_player(class Ubp_quest_component_C* Quest_component);
	void Init_entry(class Abp_quest_actor_C* Quest_actor, bool Is_objective, bool Is_sub_objective, bool Is_updated, enum class Enum_quest_result Quest_result, bool First_Objective_);
	void ExecuteUbergraph_w_01_quest_layout(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, bool K2Node_CustomEvent_is_objective, bool K2Node_CustomEvent_is_sub_objective, bool K2Node_CustomEvent_is_updated, enum class Enum_quest_result K2Node_CustomEvent_quest_result, bool K2Node_CustomEvent_First_Objective_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class Ubp_quest_component_C* K2Node_CustomEvent_quest_component, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


