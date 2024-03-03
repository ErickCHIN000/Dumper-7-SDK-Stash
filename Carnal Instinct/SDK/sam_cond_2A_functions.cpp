#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass sam_cond_2A.sam_cond_2A_C
// (Actor)

class UClass* ASam_cond_2A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("sam_cond_2A_C");

	return Clss;
}


// sam_cond_2A_C sam_cond_2A.Default__sam_cond_2A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASam_cond_2A_C* ASam_cond_2A_C::GetDefaultObj()
{
	static class ASam_cond_2A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASam_cond_2A_C*>(ASam_cond_2A_C::StaticClass()->DefaultObject);

	return Default;
}


// Function sam_cond_2A.sam_cond_2A_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Local_choice_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASam_cond_2A_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sam_cond_2A_C", "choice_info_condition");

	Params::ASam_cond_2A_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Local_choice_info = Local_choice_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sam_cond_2A.sam_cond_2A_C.choice_data_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Local_choice_data_info                                           (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASam_cond_2A_C::Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sam_cond_2A_C", "choice_data_condition");

	Params::ASam_cond_2A_C_Choice_data_condition_Params Parms{};

	Parms.Choice_data = Choice_data;
	Parms.Local_choice_data_info = Local_choice_data_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sam_cond_2A.sam_cond_2A_C.reply_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_reply         Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Local_reply_info                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_get_storage_choice_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_storage_choice_branch_index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_storage_choice_storage_index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_choice_storage       CallFunc_get_storage_choice_choice_storage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_lead_info            K2Node_MakeStruct_s_dlg_lead_info                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_MakeStruct_s_dlg_event_info                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_dlg_event_info>   K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_dlg_shared               K2Node_MakeStruct_s_dlg_shared                                   (HasGetValueTypeHash)

void ASam_cond_2A_C::Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info, bool CallFunc_get_storage_choice_is_valid, int32 CallFunc_get_storage_choice_branch_index, int32 CallFunc_get_storage_choice_storage_index, const struct FS_dlg_choice_storage& CallFunc_get_storage_choice_choice_storage, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info, const struct FS_dlg_event_info& K2Node_MakeStruct_s_dlg_event_info, TArray<struct FS_dlg_event_info>& K2Node_MakeArray_Array, const struct FS_dlg_shared& K2Node_MakeStruct_s_dlg_shared)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sam_cond_2A_C", "reply_info_condition");

	Params::ASam_cond_2A_C_Reply_info_condition_Params Parms{};

	Parms.Reply_info = Reply_info;
	Parms.Local_reply_info = Local_reply_info;
	Parms.CallFunc_get_storage_choice_is_valid = CallFunc_get_storage_choice_is_valid;
	Parms.CallFunc_get_storage_choice_branch_index = CallFunc_get_storage_choice_branch_index;
	Parms.CallFunc_get_storage_choice_storage_index = CallFunc_get_storage_choice_storage_index;
	Parms.CallFunc_get_storage_choice_choice_storage = CallFunc_get_storage_choice_choice_storage;
	Parms.K2Node_MakeStruct_s_dlg_lead_info = K2Node_MakeStruct_s_dlg_lead_info;
	Parms.K2Node_MakeStruct_s_dlg_event_info = K2Node_MakeStruct_s_dlg_event_info;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_s_dlg_shared = K2Node_MakeStruct_s_dlg_shared;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sam_cond_2A.sam_cond_2A_C.branch_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_data          branch_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Local_branch_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void ASam_cond_2A_C::branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sam_cond_2A_C", "branch_info_condition");

	Params::ASam_cond_2A_C_branch_info_condition_Params Parms{};

	Parms.branch_info = branch_info;
	Parms.Local_branch_info = Local_branch_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function sam_cond_2A.sam_cond_2A_C.ExecuteUbergraph_sam_cond_2A
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASam_cond_2A_C::ExecuteUbergraph_sam_cond_2A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sam_cond_2A_C", "ExecuteUbergraph_sam_cond_2A");

	Params::ASam_cond_2A_C_ExecuteUbergraph_sam_cond_2A_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


