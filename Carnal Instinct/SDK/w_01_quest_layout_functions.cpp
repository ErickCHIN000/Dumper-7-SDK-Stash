#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_quest_layout.w_01_quest_layout_C
// (None)

class UClass* UW_01_quest_layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_quest_layout_C");

	return Clss;
}


// w_01_quest_layout_C w_01_quest_layout.Default__w_01_quest_layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_quest_layout_C* UW_01_quest_layout_C::GetDefaultObj()
{
	static class UW_01_quest_layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_quest_layout_C*>(UW_01_quest_layout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_quest_layout.w_01_quest_layout_C.notify_quest_updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Notify_result                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_started                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_layout_C::Notify_quest_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, bool Is_started, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_1, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_2, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "notify_quest_updated");

	Params::UW_01_quest_layout_C_Notify_quest_updated_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Notify_result = Notify_result;
	Parms.Is_started = Is_started;
	Parms.CallFunc_get_notify_component_ReturnValue = CallFunc_get_notify_component_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_get_notify_component_ReturnValue_1 = CallFunc_get_notify_component_ReturnValue_1;
	Parms.CallFunc_get_notify_component_ReturnValue_2 = CallFunc_get_notify_component_ReturnValue_2;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_spawn_notification_notify_widget = CallFunc_spawn_notification_notify_widget;
	Parms.CallFunc_spawn_notification_notify_widget_1 = CallFunc_spawn_notification_notify_widget_1;
	Parms.CallFunc_spawn_notification_notify_widget_2 = CallFunc_spawn_notification_notify_widget_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_layout.w_01_quest_layout_C.notify_sub_objective_updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Notify_result                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_layout_C::Notify_sub_objective_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_1, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue_2, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "notify_sub_objective_updated");

	Params::UW_01_quest_layout_C_Notify_sub_objective_updated_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Notify_result = Notify_result;
	Parms.CallFunc_get_notify_component_ReturnValue = CallFunc_get_notify_component_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_get_notify_component_ReturnValue_1 = CallFunc_get_notify_component_ReturnValue_1;
	Parms.CallFunc_get_notify_component_ReturnValue_2 = CallFunc_get_notify_component_ReturnValue_2;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_spawn_notification_notify_widget = CallFunc_spawn_notification_notify_widget;
	Parms.CallFunc_spawn_notification_notify_widget_1 = CallFunc_spawn_notification_notify_widget_1;
	Parms.CallFunc_spawn_notification_notify_widget_2 = CallFunc_spawn_notification_notify_widget_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_layout.w_01_quest_layout_C.notify_objective_updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_quest_result       Notify_result                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_started                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_notification_component_C*CallFunc_get_notify_component_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_layout_C::Notify_objective_updated(class Abp_quest_actor_C* Quest_actor, enum class Enum_quest_result Notify_result, bool Is_started, class Ubp_notification_component_C* CallFunc_get_notify_component_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "notify_objective_updated");

	Params::UW_01_quest_layout_C_Notify_objective_updated_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Notify_result = Notify_result;
	Parms.Is_started = Is_started;
	Parms.CallFunc_get_notify_component_ReturnValue = CallFunc_get_notify_component_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_spawn_notification_notify_widget = CallFunc_spawn_notification_notify_widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_layout.w_01_quest_layout_C.get_notify_component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Ubp_notification_component_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_notification_component_is_valid                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_notification_component_C*CallFunc_dlg_get_notification_component_notification_reference   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class Ubp_notification_component_C* UW_01_quest_layout_C::Get_notify_component(bool CallFunc_dlg_get_notification_component_is_valid, class Ubp_notification_component_C* CallFunc_dlg_get_notification_component_notification_reference, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "get_notify_component");

	Params::UW_01_quest_layout_C_Get_notify_component_Params Parms{};

	Parms.CallFunc_dlg_get_notification_component_is_valid = CallFunc_dlg_get_notification_component_is_valid;
	Parms.CallFunc_dlg_get_notification_component_notification_reference = CallFunc_dlg_get_notification_component_notification_reference;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_01_quest_layout.w_01_quest_layout_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_quest_layout_C::Init_widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "init_widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_quest_layout.w_01_quest_layout_C.init_player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubp_quest_component_C*       Quest_component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_layout_C::Init_player(class Ubp_quest_component_C* Quest_component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "init_player");

	Params::UW_01_quest_layout_C_Init_player_Params Parms{};

	Parms.Quest_component = Quest_component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_layout.w_01_quest_layout_C.init_entry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_objective                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_sub_objective                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_updated                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_quest_result       Quest_result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               First_Objective_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_quest_layout_C::Init_entry(class Abp_quest_actor_C* Quest_actor, bool Is_objective, bool Is_sub_objective, bool Is_updated, enum class Enum_quest_result Quest_result, bool First_Objective_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "init_entry");

	Params::UW_01_quest_layout_C_Init_entry_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Is_objective = Is_objective;
	Parms.Is_sub_objective = Is_sub_objective;
	Parms.Is_updated = Is_updated;
	Parms.Quest_result = Quest_result;
	Parms.First_Objective_ = First_Objective_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_layout.w_01_quest_layout_C.ExecuteUbergraph_w_01_quest_layout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_objective                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_is_sub_objective                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_is_updated                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_quest_result       K2Node_CustomEvent_quest_result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_First_Objective_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       K2Node_CustomEvent_quest_component                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_01_quest_layout_C::ExecuteUbergraph_w_01_quest_layout(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, bool K2Node_CustomEvent_is_objective, bool K2Node_CustomEvent_is_sub_objective, bool K2Node_CustomEvent_is_updated, enum class Enum_quest_result K2Node_CustomEvent_quest_result, bool K2Node_CustomEvent_First_Objective_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class Ubp_quest_component_C* K2Node_CustomEvent_quest_component, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_layout_C", "ExecuteUbergraph_w_01_quest_layout");

	Params::UW_01_quest_layout_C_ExecuteUbergraph_w_01_quest_layout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.K2Node_CustomEvent_is_objective = K2Node_CustomEvent_is_objective;
	Parms.K2Node_CustomEvent_is_sub_objective = K2Node_CustomEvent_is_sub_objective;
	Parms.K2Node_CustomEvent_is_updated = K2Node_CustomEvent_is_updated;
	Parms.K2Node_CustomEvent_quest_result = K2Node_CustomEvent_quest_result;
	Parms.K2Node_CustomEvent_First_Objective_ = K2Node_CustomEvent_First_Objective_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_quest_component = K2Node_CustomEvent_quest_component;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


