#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bob_c2_stat_condA.bob_c2_stat_condA_C
// (Actor)

class UClass* Abob_c2_stat_condA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bob_c2_stat_condA_C");

	return Clss;
}


// bob_c2_stat_condA_C bob_c2_stat_condA.Default__bob_c2_stat_condA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abob_c2_stat_condA_C* Abob_c2_stat_condA_C::GetDefaultObj()
{
	static class Abob_c2_stat_condA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abob_c2_stat_condA_C*>(Abob_c2_stat_condA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bob_c2_stat_condA.bob_c2_stat_condA_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Local_choice_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AExample_tps_player_C*       K2Node_DynamicCast_AsExample_Tps_Player                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abob_c2_stat_condA_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, class AExample_tps_player_C* K2Node_DynamicCast_AsExample_Tps_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bob_c2_stat_condA_C", "choice_info_condition");

	Params::Abob_c2_stat_condA_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Local_choice_info = Local_choice_info;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.K2Node_DynamicCast_AsExample_Tps_Player = K2Node_DynamicCast_AsExample_Tps_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bob_c2_stat_condA.bob_c2_stat_condA_C.choice_data_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Local_choice_data_info                                           (Edit, BlueprintVisible, HasGetValueTypeHash)

void Abob_c2_stat_condA_C::Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bob_c2_stat_condA_C", "choice_data_condition");

	Params::Abob_c2_stat_condA_C_Choice_data_condition_Params Parms{};

	Parms.Choice_data = Choice_data;
	Parms.Local_choice_data_info = Local_choice_data_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bob_c2_stat_condA.bob_c2_stat_condA_C.reply_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_reply         Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Local_reply_info                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)

void Abob_c2_stat_condA_C::Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bob_c2_stat_condA_C", "reply_info_condition");

	Params::Abob_c2_stat_condA_C_Reply_info_condition_Params Parms{};

	Parms.Reply_info = Reply_info;
	Parms.Local_reply_info = Local_reply_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bob_c2_stat_condA.bob_c2_stat_condA_C.branch_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_data          branch_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Local_branch_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void Abob_c2_stat_condA_C::branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bob_c2_stat_condA_C", "branch_info_condition");

	Params::Abob_c2_stat_condA_C_branch_info_condition_Params Parms{};

	Parms.branch_info = branch_info;
	Parms.Local_branch_info = Local_branch_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function bob_c2_stat_condA.bob_c2_stat_condA_C.ExecuteUbergraph_bob_c2_stat_condA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abob_c2_stat_condA_C::ExecuteUbergraph_bob_c2_stat_condA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bob_c2_stat_condA_C", "ExecuteUbergraph_bob_c2_stat_condA");

	Params::Abob_c2_stat_condA_C_ExecuteUbergraph_bob_c2_stat_condA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


