#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass sexCondCheck.sexCondCheck_C
// (Actor)

class UClass* ASexCondCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("sexCondCheck_C");

	return Clss;
}


// sexCondCheck_C sexCondCheck.Default__sexCondCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASexCondCheck_C* ASexCondCheck_C::GetDefaultObj()
{
	static class ASexCondCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexCondCheck_C*>(ASexCondCheck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function sexCondCheck.sexCondCheck_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Local_choice_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASexCondCheck_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sexCondCheck_C", "choice_info_condition");

	Params::ASexCondCheck_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Local_choice_info = Local_choice_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sexCondCheck.sexCondCheck_C.choice_data_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Local_choice_data_info                                           (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASexCondCheck_C::Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sexCondCheck_C", "choice_data_condition");

	Params::ASexCondCheck_C_Choice_data_condition_Params Parms{};

	Parms.Choice_data = Choice_data;
	Parms.Local_choice_data_info = Local_choice_data_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sexCondCheck.sexCondCheck_C.reply_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_reply         Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Local_reply_info                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_lead_info            K2Node_MakeStruct_s_dlg_lead_info                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASexCondCheck_C::Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sexCondCheck_C", "reply_info_condition");

	Params::ASexCondCheck_C_Reply_info_condition_Params Parms{};

	Parms.Reply_info = Reply_info;
	Parms.Local_reply_info = Local_reply_info;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.K2Node_MakeStruct_s_dlg_lead_info = K2Node_MakeStruct_s_dlg_lead_info;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sexCondCheck.sexCondCheck_C.branch_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_data          branch_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Local_branch_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASexCondCheck_C::branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sexCondCheck_C", "branch_info_condition");

	Params::ASexCondCheck_C_branch_info_condition_Params Parms{};

	Parms.branch_info = branch_info;
	Parms.Local_branch_info = Local_branch_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sexCondCheck.sexCondCheck_C.ExecuteUbergraph_sexCondCheck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASexCondCheck_C::ExecuteUbergraph_sexCondCheck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sexCondCheck_C", "ExecuteUbergraph_sexCondCheck");

	Params::ASexCondCheck_C_ExecuteUbergraph_sexCondCheck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


