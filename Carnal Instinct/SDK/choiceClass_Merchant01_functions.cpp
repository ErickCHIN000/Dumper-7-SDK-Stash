#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_Merchant01.choiceClass_Merchant01_C
// (Actor)

class UClass* AChoiceClass_Merchant01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_Merchant01_C");

	return Clss;
}


// choiceClass_Merchant01_C choiceClass_Merchant01.Default__choiceClass_Merchant01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_Merchant01_C* AChoiceClass_Merchant01_C::GetDefaultObj()
{
	static class AChoiceClass_Merchant01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_Merchant01_C*>(AChoiceClass_Merchant01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_Merchant01.choiceClass_Merchant01_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_get_storage_choice_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_storage_choice_branch_index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_storage_choice_storage_index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_choice_storage       CallFunc_get_storage_choice_choice_storage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)

void AChoiceClass_Merchant01_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, bool CallFunc_get_storage_choice_is_valid, int32 CallFunc_get_storage_choice_branch_index, int32 CallFunc_get_storage_choice_storage_index, const struct FS_dlg_choice_storage& CallFunc_get_storage_choice_choice_storage, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_Merchant01_C", "choice_info_condition");

	Params::AChoiceClass_Merchant01_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.CallFunc_get_storage_choice_is_valid = CallFunc_get_storage_choice_is_valid;
	Parms.CallFunc_get_storage_choice_branch_index = CallFunc_get_storage_choice_branch_index;
	Parms.CallFunc_get_storage_choice_storage_index = CallFunc_get_storage_choice_storage_index;
	Parms.CallFunc_get_storage_choice_choice_storage = CallFunc_get_storage_choice_choice_storage;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


