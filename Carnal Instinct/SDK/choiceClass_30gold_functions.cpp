#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_30gold.choiceClass_30gold_C
// (Actor)

class UClass* AChoiceClass_30gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_30gold_C");

	return Clss;
}


// choiceClass_30gold_C choiceClass_30gold.Default__choiceClass_30gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_30gold_C* AChoiceClass_30gold_C::GetDefaultObj()
{
	static class AChoiceClass_30gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_30gold_C*>(AChoiceClass_30gold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_30gold.choiceClass_30gold_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Reply_info                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)

void AChoiceClass_30gold_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_reply& Reply_info, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_30gold_C", "choice_info_condition");

	Params::AChoiceClass_30gold_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Reply_info = Reply_info;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


