#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_khaba_hidden.choiceClass_khaba_hidden_C
// (Actor)

class UClass* AChoiceClass_khaba_hidden_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_khaba_hidden_C");

	return Clss;
}


// choiceClass_khaba_hidden_C choiceClass_khaba_hidden.Default__choiceClass_khaba_hidden_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_khaba_hidden_C* AChoiceClass_khaba_hidden_C::GetDefaultObj()
{
	static class AChoiceClass_khaba_hidden_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_khaba_hidden_C*>(AChoiceClass_khaba_hidden_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_khaba_hidden.choiceClass_khaba_hidden_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Reply_info                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_quest_component_is_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_quest_component_C*       CallFunc_dlg_get_quest_component_quest_reference                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_convert_dlg_condition_return_condition              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)

void AChoiceClass_khaba_hidden_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_reply& Reply_info, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_dlg_get_quest_component_is_valid, class Ubp_quest_component_C* CallFunc_dlg_get_quest_component_quest_reference, bool CallFunc_dlg_convert_dlg_condition_return_condition, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_khaba_hidden_C", "choice_info_condition");

	Params::AChoiceClass_khaba_hidden_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Reply_info = Reply_info;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_dlg_get_quest_component_is_valid = CallFunc_dlg_get_quest_component_is_valid;
	Parms.CallFunc_dlg_get_quest_component_quest_reference = CallFunc_dlg_get_quest_component_quest_reference;
	Parms.CallFunc_dlg_convert_dlg_condition_return_condition = CallFunc_dlg_convert_dlg_condition_return_condition;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


