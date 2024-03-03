#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass objective_update_bells_horns_complete.objective_update_bells_horns_complete_C
// (Actor)

class UClass* AObjective_update_bells_horns_complete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("objective_update_bells_horns_complete_C");

	return Clss;
}


// objective_update_bells_horns_complete_C objective_update_bells_horns_complete.Default__objective_update_bells_horns_complete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObjective_update_bells_horns_complete_C* AObjective_update_bells_horns_complete_C::GetDefaultObj()
{
	static class AObjective_update_bells_horns_complete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObjective_update_bells_horns_complete_C*>(AObjective_update_bells_horns_complete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function objective_update_bells_horns_complete.objective_update_bells_horns_complete_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AObjective_update_bells_horns_complete_C::Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("objective_update_bells_horns_complete_C", "call_event");

	Params::AObjective_update_bells_horns_complete_C_Call_event_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function objective_update_bells_horns_complete.objective_update_bells_horns_complete_C.ExecuteUbergraph_objective_update_bells_horns_complete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_Event_quest_actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)

void AObjective_update_bells_horns_complete_C::ExecuteUbergraph_objective_update_bells_horns_complete(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class Abp_quest_actor_C* K2Node_Event_quest_actor, const struct FS_quest_event& K2Node_Event_event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("objective_update_bells_horns_complete_C", "ExecuteUbergraph_objective_update_bells_horns_complete");

	Params::AObjective_update_bells_horns_complete_C_ExecuteUbergraph_objective_update_bells_horns_complete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.K2Node_Event_quest_actor = K2Node_Event_quest_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;

	UObject::ProcessEvent(Func, &Parms);

}

}


