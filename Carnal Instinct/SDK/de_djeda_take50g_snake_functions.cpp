#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_djeda_take50g_snake.de_djeda_take50g_snake_C
// (Actor)

class UClass* ADe_djeda_take50g_snake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_djeda_take50g_snake_C");

	return Clss;
}


// de_djeda_take50g_snake_C de_djeda_take50g_snake.Default__de_djeda_take50g_snake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_djeda_take50g_snake_C* ADe_djeda_take50g_snake_C::GetDefaultObj()
{
	static class ADe_djeda_take50g_snake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_djeda_take50g_snake_C*>(ADe_djeda_take50g_snake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_djeda_take50g_snake.de_djeda_take50g_snake_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_djeda_take50g_snake_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_djeda_take50g_snake_C", "call_event");

	Params::ADe_djeda_take50g_snake_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_djeda_take50g_snake.de_djeda_take50g_snake_C.ExecuteUbergraph_de_djeda_take50g_snake
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_toses_C*                CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Interactable_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_djeda_C*                CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TargetIndicatorComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_add_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_quest_is_spawned                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           CallFunc_add_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADe_djeda_take50g_snake_C::ExecuteUbergraph_de_djeda_take50g_snake(int32 EntryPoint, class ANpc_toses_C* CallFunc_GetActorOfClass_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class ANpc_djeda_C* CallFunc_GetActorOfClass_ReturnValue_1, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_add_quest_is_valid, bool CallFunc_add_quest_is_spawned, class Abp_quest_actor_C* CallFunc_add_quest_quest_actor, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_djeda_take50g_snake_C", "ExecuteUbergraph_de_djeda_take50g_snake");

	Params::ADe_djeda_take50g_snake_C_ExecuteUbergraph_de_djeda_take50g_snake_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_add_quest_is_valid = CallFunc_add_quest_is_valid;
	Parms.CallFunc_add_quest_is_spawned = CallFunc_add_quest_is_spawned;
	Parms.CallFunc_add_quest_quest_actor = CallFunc_add_quest_quest_actor;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


