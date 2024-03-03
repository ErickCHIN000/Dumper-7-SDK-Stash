#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_hidden_horseCock.choiceClass_hidden_horseCock_C
// (Actor)

class UClass* AChoiceClass_hidden_horseCock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_hidden_horseCock_C");

	return Clss;
}


// choiceClass_hidden_horseCock_C choiceClass_hidden_horseCock.Default__choiceClass_hidden_horseCock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_hidden_horseCock_C* AChoiceClass_hidden_horseCock_C::GetDefaultObj()
{
	static class AChoiceClass_hidden_horseCock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_hidden_horseCock_C*>(AChoiceClass_hidden_horseCock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_hidden_horseCock.choiceClass_hidden_horseCock_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Choice_Line                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Reply_info                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChoiceClass_hidden_horseCock_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, class FName Choice_Line, const struct FS_dlg_branch_reply& Reply_info, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_hidden_horseCock_C", "choice_info_condition");

	Params::AChoiceClass_hidden_horseCock_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Choice_Line = Choice_Line;
	Parms.Reply_info = Reply_info;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}


