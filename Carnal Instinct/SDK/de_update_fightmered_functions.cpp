#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_update_fightmered.de_update_fightmered_C
// (Actor)

class UClass* ADe_update_fightmered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_update_fightmered_C");

	return Clss;
}


// de_update_fightmered_C de_update_fightmered.Default__de_update_fightmered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_update_fightmered_C* ADe_update_fightmered_C::GetDefaultObj()
{
	static class ADe_update_fightmered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_update_fightmered_C*>(ADe_update_fightmered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_update_fightmered.de_update_fightmered_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_update_fightmered_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_update_fightmered_C", "call_event");

	Params::ADe_update_fightmered_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_update_fightmered.de_update_fightmered_C.ExecuteUbergraph_de_update_fightmered
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_merednew_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADe_update_fightmered_C::ExecuteUbergraph_de_update_fightmered(int32 EntryPoint, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_update_fightmered_C", "ExecuteUbergraph_de_update_fightmered");

	Params::ADe_update_fightmered_C_ExecuteUbergraph_de_update_fightmered_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


