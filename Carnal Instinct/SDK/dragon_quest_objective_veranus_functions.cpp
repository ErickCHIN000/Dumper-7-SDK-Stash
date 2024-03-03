#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass dragon_quest_objective_veranus.dragon_quest_objective_veranus_C
// (Actor)

class UClass* ADragon_quest_objective_veranus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("dragon_quest_objective_veranus_C");

	return Clss;
}


// dragon_quest_objective_veranus_C dragon_quest_objective_veranus.Default__dragon_quest_objective_veranus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADragon_quest_objective_veranus_C* ADragon_quest_objective_veranus_C::GetDefaultObj()
{
	static class ADragon_quest_objective_veranus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADragon_quest_objective_veranus_C*>(ADragon_quest_objective_veranus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function dragon_quest_objective_veranus.dragon_quest_objective_veranus_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADragon_quest_objective_veranus_C::Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("dragon_quest_objective_veranus_C", "call_event");

	Params::ADragon_quest_objective_veranus_C_Call_event_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function dragon_quest_objective_veranus.dragon_quest_objective_veranus_C.ExecuteUbergraph_dragon_quest_objective_veranus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_Event_quest_actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_dlg_component_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_veranus_C*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Interactable_C*          CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANpc_rasha_C*                CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TargetIndicatorComponent_C*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADragon_quest_objective_veranus_C::ExecuteUbergraph_dragon_quest_objective_veranus(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class Abp_quest_actor_C* K2Node_Event_quest_actor, const struct FS_quest_event& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_IsValid_ReturnValue, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, class ANpc_veranus_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ANpc_rasha_C* CallFunc_GetActorOfClass_ReturnValue_1, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("dragon_quest_objective_veranus_C", "ExecuteUbergraph_dragon_quest_objective_veranus");

	Params::ADragon_quest_objective_veranus_C_ExecuteUbergraph_dragon_quest_objective_veranus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_Event_quest_actor = K2Node_Event_quest_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_dlg_get_dlg_component_is_valid = CallFunc_dlg_get_dlg_component_is_valid;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference = CallFunc_dlg_get_dlg_component_dlg_reference;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


