#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_liquid_update5.de_liquid_update5_C
// (Actor)

class UClass* ADe_liquid_update5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_liquid_update5_C");

	return Clss;
}


// de_liquid_update5_C de_liquid_update5.Default__de_liquid_update5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_liquid_update5_C* ADe_liquid_update5_C::GetDefaultObj()
{
	static class ADe_liquid_update5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_liquid_update5_C*>(ADe_liquid_update5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_liquid_update5.de_liquid_update5_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_liquid_update5_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_liquid_update5_C", "call_event");

	Params::ADe_liquid_update5_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_liquid_update5.de_liquid_update5_C.ExecuteUbergraph_de_liquid_update5
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_renshet_C*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_add_sub_objective_Successful                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_sub_objective_Successful_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_sub_objective_Successful                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_sub_objective_Successful_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_liquid_update5_C::ExecuteUbergraph_de_liquid_update5(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ANpc_renshet_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_add_sub_objective_Successful, bool CallFunc_add_sub_objective_Successful_1, bool CallFunc_get_sub_objective_Successful, bool CallFunc_add_sub_objective_Successful_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_liquid_update5_C", "ExecuteUbergraph_de_liquid_update5");

	Params::ADe_liquid_update5_C_ExecuteUbergraph_de_liquid_update5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_add_sub_objective_Successful = CallFunc_add_sub_objective_Successful;
	Parms.CallFunc_add_sub_objective_Successful_1 = CallFunc_add_sub_objective_Successful_1;
	Parms.CallFunc_get_sub_objective_Successful = CallFunc_get_sub_objective_Successful;
	Parms.CallFunc_add_sub_objective_Successful_2 = CallFunc_add_sub_objective_Successful_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


