#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_djeda.choiceClass_djeda_C
// (Actor)

class UClass* AChoiceClass_djeda_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_djeda_C");

	return Clss;
}


// choiceClass_djeda_C choiceClass_djeda.Default__choiceClass_djeda_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_djeda_C* AChoiceClass_djeda_C::GetDefaultObj()
{
	static class AChoiceClass_djeda_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_djeda_C*>(AChoiceClass_djeda_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_djeda.choiceClass_djeda_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Reply_info                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_dlg_convert_dlg_condition_return_condition              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (UObjectWrapper, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)

void AChoiceClass_djeda_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_reply& Reply_info, bool CallFunc_dlg_convert_dlg_condition_return_condition, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_djeda_C", "choice_info_condition");

	Params::AChoiceClass_djeda_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Reply_info = Reply_info;
	Parms.CallFunc_dlg_convert_dlg_condition_return_condition = CallFunc_dlg_convert_dlg_condition_return_condition;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}

