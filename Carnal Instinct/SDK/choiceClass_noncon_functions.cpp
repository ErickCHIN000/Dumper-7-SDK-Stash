#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_noncon.choiceClass_noncon_C
// (Actor)

class UClass* AChoiceClass_noncon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_noncon_C");

	return Clss;
}


// choiceClass_noncon_C choiceClass_noncon.Default__choiceClass_noncon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_noncon_C* AChoiceClass_noncon_C::GetDefaultObj()
{
	static class AChoiceClass_noncon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_noncon_C*>(AChoiceClass_noncon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_noncon.choiceClass_noncon_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)
// enum class E_TemplateUI            Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChoiceClass_noncon_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, bool Temp_bool_Variable, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value, enum class E_TemplateUI Temp_byte_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_noncon_C", "choice_info_condition");

	Params::AChoiceClass_noncon_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;
	Parms.Temp_byte_Variable = Temp_byte_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


