#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_liquid_update2.de_liquid_update2_C
// (Actor)

class UClass* ADe_liquid_update2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_liquid_update2_C");

	return Clss;
}


// de_liquid_update2_C de_liquid_update2.Default__de_liquid_update2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_liquid_update2_C* ADe_liquid_update2_C::GetDefaultObj()
{
	static class ADe_liquid_update2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_liquid_update2_C*>(ADe_liquid_update2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_liquid_update2.de_liquid_update2_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_liquid_update2_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_liquid_update2_C", "call_event");

	Params::ADe_liquid_update2_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_liquid_update2.de_liquid_update2_C.ExecuteUbergraph_de_liquid_update2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_nuru_C*                 CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_euthymius_C*            CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_sub_objective_Successful                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_liquid_update2_C::ExecuteUbergraph_de_liquid_update2(int32 EntryPoint, class ANpc_nuru_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ANpc_euthymius_C* CallFunc_GetActorOfClass_ReturnValue_1, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_add_sub_objective_Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_liquid_update2_C", "ExecuteUbergraph_de_liquid_update2");

	Params::ADe_liquid_update2_C_ExecuteUbergraph_de_liquid_update2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_add_sub_objective_Successful = CallFunc_add_sub_objective_Successful;

	UObject::ProcessEvent(Func, &Parms);

}

}


