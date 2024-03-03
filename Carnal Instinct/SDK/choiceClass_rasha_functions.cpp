#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_rasha.choiceClass_rasha_C
// (Actor)

class UClass* AChoiceClass_rasha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_rasha_C");

	return Clss;
}


// choiceClass_rasha_C choiceClass_rasha.Default__choiceClass_rasha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_rasha_C* AChoiceClass_rasha_C::GetDefaultObj()
{
	static class AChoiceClass_rasha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_rasha_C*>(AChoiceClass_rasha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_rasha.choiceClass_rasha_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Choice_Line                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChoiceClass_rasha_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, class FName Choice_Line, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_rasha_C", "choice_info_condition");

	Params::AChoiceClass_rasha_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Choice_Line = Choice_Line;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


