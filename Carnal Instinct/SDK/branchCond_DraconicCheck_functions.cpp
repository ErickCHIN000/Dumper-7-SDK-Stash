#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass branchCond_DraconicCheck.branchCond_DraconicCheck_C
// (Actor)

class UClass* AbranchCond_DraconicCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("branchCond_DraconicCheck_C");

	return Clss;
}


// branchCond_DraconicCheck_C branchCond_DraconicCheck.Default__branchCond_DraconicCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AbranchCond_DraconicCheck_C* AbranchCond_DraconicCheck_C::GetDefaultObj()
{
	static class AbranchCond_DraconicCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AbranchCond_DraconicCheck_C*>(AbranchCond_DraconicCheck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function branchCond_DraconicCheck.branchCond_DraconicCheck_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Local_choice_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void AbranchCond_DraconicCheck_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("branchCond_DraconicCheck_C", "choice_info_condition");

	Params::AbranchCond_DraconicCheck_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.Local_choice_info = Local_choice_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function branchCond_DraconicCheck.branchCond_DraconicCheck_C.choice_data_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Local_choice_data_info                                           (Edit, BlueprintVisible, HasGetValueTypeHash)

void AbranchCond_DraconicCheck_C::Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("branchCond_DraconicCheck_C", "choice_data_condition");

	Params::AbranchCond_DraconicCheck_C_Choice_data_condition_Params Parms{};

	Parms.Choice_data = Choice_data;
	Parms.Local_choice_data_info = Local_choice_data_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function branchCond_DraconicCheck.branchCond_DraconicCheck_C.reply_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_reply         Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Local_reply_info                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_dlg_lead_info            K2Node_MakeStruct_s_dlg_lead_info                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_active_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_active_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Equipment_Item_by_ID_item                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Equipment_Item_by_ID_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_lead_info            K2Node_MakeStruct_s_dlg_lead_info_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AbranchCond_DraconicCheck_C::Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_active_is_valid, int32 CallFunc_get_quest_active_found_index, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Equipment_Item_by_ID_item, bool CallFunc_Get_Equipment_Item_by_ID_Found, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("branchCond_DraconicCheck_C", "reply_info_condition");

	Params::AbranchCond_DraconicCheck_C_Reply_info_condition_Params Parms{};

	Parms.Reply_info = Reply_info;
	Parms.Local_reply_info = Local_reply_info;
	Parms.K2Node_MakeStruct_s_dlg_lead_info = K2Node_MakeStruct_s_dlg_lead_info;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_get_quest_active_is_valid = CallFunc_get_quest_active_is_valid;
	Parms.CallFunc_get_quest_active_found_index = CallFunc_get_quest_active_found_index;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Equipment_Item_by_ID_item = CallFunc_Get_Equipment_Item_by_ID_item;
	Parms.CallFunc_Get_Equipment_Item_by_ID_Found = CallFunc_Get_Equipment_Item_by_ID_Found;
	Parms.K2Node_MakeStruct_s_dlg_lead_info_1 = K2Node_MakeStruct_s_dlg_lead_info_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function branchCond_DraconicCheck.branchCond_DraconicCheck_C.branch_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_data          branch_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Local_branch_info                                                (Edit, BlueprintVisible, HasGetValueTypeHash)

void AbranchCond_DraconicCheck_C::branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("branchCond_DraconicCheck_C", "branch_info_condition");

	Params::AbranchCond_DraconicCheck_C_branch_info_condition_Params Parms{};

	Parms.branch_info = branch_info;
	Parms.Local_branch_info = Local_branch_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function branchCond_DraconicCheck.branchCond_DraconicCheck_C.ExecuteUbergraph_branchCond_DraconicCheck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AbranchCond_DraconicCheck_C::ExecuteUbergraph_branchCond_DraconicCheck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("branchCond_DraconicCheck_C", "ExecuteUbergraph_branchCond_DraconicCheck");

	Params::AbranchCond_DraconicCheck_C_ExecuteUbergraph_branchCond_DraconicCheck_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


