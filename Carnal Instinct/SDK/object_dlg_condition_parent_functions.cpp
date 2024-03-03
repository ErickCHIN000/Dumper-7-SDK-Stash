#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_dlg_condition_parent.object_dlg_condition_parent_C
// (Actor)

class UClass* AObject_dlg_condition_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_dlg_condition_parent_C");

	return Clss;
}


// object_dlg_condition_parent_C object_dlg_condition_parent.Default__object_dlg_condition_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObject_dlg_condition_parent_C* AObject_dlg_condition_parent_C::GetDefaultObj()
{
	static class AObject_dlg_condition_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObject_dlg_condition_parent_C*>(AObject_dlg_condition_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.CheckContentSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CLine                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_choice_status  Status                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Content_Warning_Triggered                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_TemplateUI>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TemplateUI            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AObject_dlg_condition_parent_C::CheckContentSettings(class FName* CLine, enum class Enum_dlg_choice_status* Status, bool* Content_Warning_Triggered, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TArray<enum class E_TemplateUI>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class E_TemplateUI CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "CheckContentSettings");

	Params::AObject_dlg_condition_parent_C_CheckContentSettings_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CLine != nullptr)
		*CLine = Parms.CLine;

	if (Status != nullptr)
		*Status = Parms.Status;

	if (Content_Warning_Triggered != nullptr)
		*Content_Warning_Triggered = Parms.Content_Warning_Triggered;

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_dlg_choice_status  CStatus                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CLine                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_CheckContentSettings_CLine                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_choice_status  CallFunc_CheckContentSettings_Status                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContentSettings_Content_Warning_Triggered          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, enum class Enum_dlg_choice_status CStatus, class FName CLine, class FName CallFunc_CheckContentSettings_CLine, enum class Enum_dlg_choice_status CallFunc_CheckContentSettings_Status, bool CallFunc_CheckContentSettings_Content_Warning_Triggered, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "choice_info_condition");

	Params::AObject_dlg_condition_parent_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.CStatus = CStatus;
	Parms.CLine = CLine;
	Parms.CallFunc_CheckContentSettings_CLine = CallFunc_CheckContentSettings_CLine;
	Parms.CallFunc_CheckContentSettings_Status = CallFunc_CheckContentSettings_Status;
	Parms.CallFunc_CheckContentSettings_Content_Warning_Triggered = CallFunc_CheckContentSettings_Content_Warning_Triggered;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.choice_data_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice        Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "choice_data_condition");

	Params::AObject_dlg_condition_parent_C_Choice_data_condition_Params Parms{};

	Parms.Choice_data = Choice_data;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.reply_info_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_reply         Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_reply         Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "reply_info_condition");

	Params::AObject_dlg_condition_parent_C_Reply_info_condition_Params Parms{};

	Parms.Reply_info = Reply_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.branch_info_condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_data          branch_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_data          Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "branch_info_condition");

	Params::AObject_dlg_condition_parent_C_branch_info_condition_Params Parms{};

	Parms.branch_info = branch_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.init_condition_object
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Dlg_instigator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Reply_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Choice_id                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Choice_data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_condition            Condition_info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AObject_dlg_condition_parent_C*Dlg_condition                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::Init_condition_object(class Abp_dlg_actor_C* Dlg_actor, class FName Dlg_instigator, class FName Reply_id, class FName Choice_id, class FName Choice_data, const struct FS_dlg_condition& Condition_info, class AObject_dlg_condition_parent_C** Dlg_condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "init_condition_object");

	Params::AObject_dlg_condition_parent_C_Init_condition_object_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_instigator = Dlg_instigator;
	Parms.Reply_id = Reply_id;
	Parms.Choice_id = Choice_id;
	Parms.Choice_data = Choice_data;
	Parms.Condition_info = Condition_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Dlg_condition != nullptr)
		*Dlg_condition = Parms.Dlg_condition;

}


// Function object_dlg_condition_parent.object_dlg_condition_parent_C.ExecuteUbergraph_object_dlg_condition_parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObject_dlg_condition_parent_C::ExecuteUbergraph_object_dlg_condition_parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_condition_parent_C", "ExecuteUbergraph_object_dlg_condition_parent");

	Params::AObject_dlg_condition_parent_C_ExecuteUbergraph_object_dlg_condition_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


