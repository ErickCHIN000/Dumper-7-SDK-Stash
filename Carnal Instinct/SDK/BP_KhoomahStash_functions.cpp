#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_KhoomahStash.BP_KhoomahStash_C
// (Actor)

class UClass* ABP_KhoomahStash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_KhoomahStash_C");

	return Clss;
}


// BP_KhoomahStash_C BP_KhoomahStash.Default__BP_KhoomahStash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_KhoomahStash_C* ABP_KhoomahStash_C::GetDefaultObj()
{
	static class ABP_KhoomahStash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_KhoomahStash_C*>(ABP_KhoomahStash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_KhoomahStash.BP_KhoomahStash_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_KhoomahStash_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KhoomahStash_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_KhoomahStash.BP_KhoomahStash_C.ExecuteUbergraph_BP_KhoomahStash
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_sub_objective_Successful                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_sub_objective_Successful                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KhoomahStash_C::ExecuteUbergraph_BP_KhoomahStash(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_sub_objective_Successful, bool CallFunc_add_sub_objective_Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_KhoomahStash_C", "ExecuteUbergraph_BP_KhoomahStash");

	Params::ABP_KhoomahStash_C_ExecuteUbergraph_BP_KhoomahStash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_get_sub_objective_Successful = CallFunc_get_sub_objective_Successful;
	Parms.CallFunc_add_sub_objective_Successful = CallFunc_add_sub_objective_Successful;

	UObject::ProcessEvent(Func, &Parms);

}

}


