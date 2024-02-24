#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_MissionSelection.bp_MissionSelection_C
// (Actor)

class UClass* Abp_MissionSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_MissionSelection_C");

	return Clss;
}


// bp_MissionSelection_C bp_MissionSelection.Default__bp_MissionSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_MissionSelection_C* Abp_MissionSelection_C::GetDefaultObj()
{
	static class Abp_MissionSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_MissionSelection_C*>(Abp_MissionSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_MissionSelection.bp_MissionSelection_C.CacheAvailableCompanionsOnMoveOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::CacheAvailableCompanionsOnMoveOut(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "CacheAvailableCompanionsOnMoveOut");

	Params::Abp_MissionSelection_C_CacheAvailableCompanionsOnMoveOut_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.CheckAllcompanionsHaveMission
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AllCompanionsAssigned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeSend_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_CanBeSend_PreventingBuff                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MissionSelection_C::CheckAllcompanionsHaveMission(bool* AllCompanionsAssigned, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeSend_Result, class FName CallFunc_CanBeSend_PreventingBuff, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "CheckAllcompanionsHaveMission");

	Params::Abp_MissionSelection_C_CheckAllcompanionsHaveMission_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanBeSend_Result = CallFunc_CanBeSend_Result;
	Parms.CallFunc_CanBeSend_PreventingBuff = CallFunc_CanBeSend_PreventingBuff;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AllCompanionsAssigned != nullptr)
		*AllCompanionsAssigned = Parms.AllCompanionsAssigned;

}


// Function bp_MissionSelection.bp_MissionSelection_C.CheckIfAllAssigned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Abp_MissionSelection_C::CheckIfAllAssigned(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "CheckIfAllAssigned");

	Params::Abp_MissionSelection_C_CheckIfAllAssigned_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5");

	Params::Abp_MissionSelection_C_InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4");

	Params::Abp_MissionSelection_C_InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3");

	Params::Abp_MissionSelection_C_InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0");

	Params::Abp_MissionSelection_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InputActivateTutorial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::InputActivateTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InputActivateTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InputOpenPDA
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::InputOpenPDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InputOpenPDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "OnInteractionPressedComponent");

	Params::Abp_MissionSelection_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateMovementState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MissionSelection_C::Finish(bool UpdateMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "Finish");

	Params::Abp_MissionSelection_C_Finish_Params Parms{};

	Parms.UpdateMovementState = UpdateMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.TerminateApp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::TerminateApp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "TerminateApp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.OnMoveOutEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::OnMoveOutEvent(enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "OnMoveOutEvent");

	Params::Abp_MissionSelection_C_OnMoveOutEvent_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3");

	Params::Abp_MissionSelection_C_InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4");

	Params::Abp_MissionSelection_C_InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.BlockiIfItsNight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::BlockiIfItsNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "BlockiIfItsNight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.BlockIfSomeoneDying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::BlockIfSomeoneDying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "BlockIfSomeoneDying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.Unblock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::Unblock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "Unblock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.ExecuteUbergraph_bp_MissionSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_21                                   (HasGetValueTypeHash)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_22                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_23                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_24                                   (HasGetValueTypeHash)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_25                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_26                                   (HasGetValueTypeHash)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_4                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_5                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_27                                   (HasGetValueTypeHash)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_6                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_28                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_7                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_29                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_8                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_30                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_9                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EEventMap, struct FStruct_MapInformation>Temp_byte_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_10               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_11               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_12               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_13               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_14               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_15               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_16               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_17               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_18               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_19               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_20               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_21               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_22               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)
// bool                               CallFunc_CanBeSend_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_CanBeSend_PreventingBuff                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_23               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_32                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_33                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_34                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_35                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_36                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_37                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_38                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_39                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_40                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_41                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_42                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_43                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_44                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_45                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_46                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_47                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_48                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_49                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_50                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_51                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_52                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_53                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_54                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_55                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_56                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_57                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_58                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_59                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_60                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_61                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_62                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_63                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_64                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_17                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_65                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_66                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_67                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_68                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_69                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_70                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_71                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_18                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_72                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_73                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_74                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_24               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_75                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_76                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_77                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_78                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_25               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_26               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_27               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_MissionSelection_Main_C*K2Node_DynamicCast_AsWid_Mission_Selection_Main_28               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_19                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_79                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_80                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_81                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_82                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_83                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_84                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_85                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_WorkshopUI_Main_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_20                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UpdateMovementState                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               K2Node_CustomEvent_Map                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MapInformation      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIE_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCompletedStoryQuestsCount_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_QuickMenu_C*  K2Node_DynamicCast_AsWid_Inventory_Quick_Menu                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_QuickMenu_C*  K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::ExecuteUbergraph_bp_MissionSelection(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FKey& K2Node_InputActionEvent_Key_21, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main, bool K2Node_DynamicCast_bSuccess, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FKey& K2Node_InputActionEvent_Key_24, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key_25, const struct FKey& K2Node_InputActionEvent_Key_26, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_4, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsVisible_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_5, const struct FKey& K2Node_InputActionEvent_Key_27, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_6, bool K2Node_DynamicCast_bSuccess_6, const struct FKey& K2Node_InputActionEvent_Key_28, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsVisible_ReturnValue_6, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_7, bool K2Node_DynamicCast_bSuccess_7, const struct FKey& K2Node_InputActionEvent_Key_29, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsVisible_ReturnValue_7, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_8, bool K2Node_DynamicCast_bSuccess_8, const struct FKey& K2Node_InputActionEvent_Key_30, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsVisible_ReturnValue_8, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_9, bool K2Node_DynamicCast_bSuccess_9, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsVisible_ReturnValue_9, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_10, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_10, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_11, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsVisible_ReturnValue_10, bool CallFunc_IsVisible_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_12, bool K2Node_DynamicCast_bSuccess_12, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_13, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsVisible_ReturnValue_12, bool CallFunc_IsVisible_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_14, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_IsValid_ReturnValue_14, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_15, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsVisible_ReturnValue_14, bool CallFunc_IsVisible_ReturnValue_15, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_16, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsVisible_ReturnValue_16, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_17, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsValid_ReturnValue_17, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_18, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsVisible_ReturnValue_17, bool CallFunc_IsVisible_ReturnValue_18, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_19, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsValid_ReturnValue_19, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_20, bool K2Node_DynamicCast_bSuccess_20, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsVisible_ReturnValue_19, int32 Temp_int_Variable, bool CallFunc_IsVisible_ReturnValue_20, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_21, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_IsValid_ReturnValue_21, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_22, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsVisible_ReturnValue_21, bool CallFunc_IsVisible_ReturnValue_22, const struct FKey& K2Node_InputActionEvent_Key_9, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess_23, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, bool CallFunc_CanBeSend_Result, class FName CallFunc_CanBeSend_PreventingBuff, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_23, bool K2Node_DynamicCast_bSuccess_24, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_IsVisible_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, const struct FKey& K2Node_InputActionEvent_Key_10, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_BooleanOR_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_22, const struct FKey& K2Node_InputActionEvent_Key_11, bool CallFunc_BooleanOR_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_25, bool CallFunc_BooleanOR_ReturnValue_26, bool CallFunc_BooleanOR_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_28, bool CallFunc_BooleanOR_ReturnValue_29, const struct FKey& K2Node_InputActionEvent_Key_12, bool CallFunc_BooleanOR_ReturnValue_30, bool CallFunc_BooleanOR_ReturnValue_31, bool CallFunc_BooleanOR_ReturnValue_32, bool CallFunc_BooleanOR_ReturnValue_33, bool CallFunc_BooleanOR_ReturnValue_34, bool CallFunc_BooleanOR_ReturnValue_35, bool CallFunc_BooleanOR_ReturnValue_36, const struct FKey& K2Node_InputActionEvent_Key_13, bool CallFunc_BooleanOR_ReturnValue_37, bool CallFunc_BooleanOR_ReturnValue_38, bool CallFunc_BooleanOR_ReturnValue_39, bool CallFunc_BooleanOR_ReturnValue_40, bool CallFunc_BooleanOR_ReturnValue_41, bool CallFunc_BooleanOR_ReturnValue_42, bool CallFunc_BooleanOR_ReturnValue_43, const struct FKey& K2Node_InputActionEvent_Key_14, bool CallFunc_BooleanOR_ReturnValue_44, bool CallFunc_BooleanOR_ReturnValue_45, bool CallFunc_BooleanOR_ReturnValue_46, bool CallFunc_BooleanOR_ReturnValue_47, bool CallFunc_BooleanOR_ReturnValue_48, bool CallFunc_BooleanOR_ReturnValue_49, bool CallFunc_BooleanOR_ReturnValue_50, const struct FKey& K2Node_InputActionEvent_Key_15, bool CallFunc_BooleanOR_ReturnValue_51, bool CallFunc_BooleanOR_ReturnValue_52, bool CallFunc_BooleanOR_ReturnValue_53, bool CallFunc_BooleanOR_ReturnValue_54, bool CallFunc_BooleanOR_ReturnValue_55, bool CallFunc_BooleanOR_ReturnValue_56, bool CallFunc_BooleanOR_ReturnValue_57, const struct FKey& K2Node_InputActionEvent_Key_16, bool CallFunc_BooleanOR_ReturnValue_58, bool CallFunc_BooleanOR_ReturnValue_59, bool CallFunc_BooleanOR_ReturnValue_60, bool CallFunc_BooleanOR_ReturnValue_61, bool CallFunc_BooleanOR_ReturnValue_62, bool CallFunc_BooleanOR_ReturnValue_63, bool CallFunc_BooleanOR_ReturnValue_64, const struct FKey& K2Node_InputActionEvent_Key_17, bool CallFunc_BooleanOR_ReturnValue_65, bool CallFunc_BooleanOR_ReturnValue_66, bool CallFunc_BooleanOR_ReturnValue_67, bool CallFunc_BooleanOR_ReturnValue_68, bool CallFunc_BooleanOR_ReturnValue_69, bool CallFunc_BooleanOR_ReturnValue_70, bool CallFunc_BooleanOR_ReturnValue_71, const struct FKey& K2Node_InputActionEvent_Key_18, bool CallFunc_BooleanOR_ReturnValue_72, bool CallFunc_BooleanOR_ReturnValue_73, bool CallFunc_BooleanOR_ReturnValue_74, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_24, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_BooleanOR_ReturnValue_75, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_76, bool CallFunc_BooleanOR_ReturnValue_77, bool CallFunc_BooleanOR_ReturnValue_78, bool CallFunc_IsVisible_ReturnValue_24, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_25, bool K2Node_DynamicCast_bSuccess_26, bool CallFunc_IsValid_ReturnValue_25, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_26, bool K2Node_DynamicCast_bSuccess_27, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsVisible_ReturnValue_25, bool CallFunc_IsVisible_ReturnValue_26, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_27, bool K2Node_DynamicCast_bSuccess_28, bool CallFunc_IsValid_ReturnValue_27, class UWid_MissionSelection_Main_C* K2Node_DynamicCast_AsWid_Mission_Selection_Main_28, bool K2Node_DynamicCast_bSuccess_29, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsVisible_ReturnValue_27, bool CallFunc_IsVisible_ReturnValue_28, const struct FKey& K2Node_InputActionEvent_Key_19, bool CallFunc_BooleanOR_ReturnValue_79, bool CallFunc_BooleanOR_ReturnValue_80, bool CallFunc_BooleanOR_ReturnValue_81, bool CallFunc_BooleanOR_ReturnValue_82, bool CallFunc_BooleanOR_ReturnValue_83, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, bool CallFunc_BooleanOR_ReturnValue_84, bool CallFunc_BooleanOR_ReturnValue_85, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_WorkshopUI_Main_C* CallFunc_Create_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_20, bool K2Node_CustomEvent_UpdateMovementState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, enum class EEventMap K2Node_CustomEvent_Map, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_RemoveChild_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_IsInPIE_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess_30, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue, int32 CallFunc_GetCompletedStoryQuestsCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_PermanentDataGetValue_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess_31, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1, bool K2Node_DynamicCast_bSuccess_32, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "ExecuteUbergraph_bp_MissionSelection");

	Params::Abp_MissionSelection_C_ExecuteUbergraph_bp_MissionSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_InputActionEvent_Key_21 = K2Node_InputActionEvent_Key_21;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main = K2Node_DynamicCast_AsWid_Mission_Selection_Main;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_1 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_22 = K2Node_InputActionEvent_Key_22;
	Parms.K2Node_InputActionEvent_Key_23 = K2Node_InputActionEvent_Key_23;
	Parms.K2Node_InputActionEvent_Key_24 = K2Node_InputActionEvent_Key_24;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_2 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_3 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_25 = K2Node_InputActionEvent_Key_25;
	Parms.K2Node_InputActionEvent_Key_26 = K2Node_InputActionEvent_Key_26;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_4 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_5 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsVisible_ReturnValue_4 = CallFunc_IsVisible_ReturnValue_4;
	Parms.CallFunc_IsVisible_ReturnValue_5 = CallFunc_IsVisible_ReturnValue_5;
	Parms.K2Node_InputActionEvent_Key_27 = K2Node_InputActionEvent_Key_27;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_6 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_InputActionEvent_Key_28 = K2Node_InputActionEvent_Key_28;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsVisible_ReturnValue_6 = CallFunc_IsVisible_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_7 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_InputActionEvent_Key_29 = K2Node_InputActionEvent_Key_29;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsVisible_ReturnValue_7 = CallFunc_IsVisible_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_8 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_InputActionEvent_Key_30 = K2Node_InputActionEvent_Key_30;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsVisible_ReturnValue_8 = CallFunc_IsVisible_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_9 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsVisible_ReturnValue_9 = CallFunc_IsVisible_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_10 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_11 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsVisible_ReturnValue_10 = CallFunc_IsVisible_ReturnValue_10;
	Parms.CallFunc_IsVisible_ReturnValue_11 = CallFunc_IsVisible_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_12 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_13 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsVisible_ReturnValue_12 = CallFunc_IsVisible_ReturnValue_12;
	Parms.CallFunc_IsVisible_ReturnValue_13 = CallFunc_IsVisible_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_14 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_15 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsVisible_ReturnValue_14 = CallFunc_IsVisible_ReturnValue_14;
	Parms.CallFunc_IsVisible_ReturnValue_15 = CallFunc_IsVisible_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_16 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_16;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsVisible_ReturnValue_16 = CallFunc_IsVisible_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_17 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_17;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_18 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_18;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsVisible_ReturnValue_17 = CallFunc_IsVisible_ReturnValue_17;
	Parms.CallFunc_IsVisible_ReturnValue_18 = CallFunc_IsVisible_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_19 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_19;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_20 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_20;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsVisible_ReturnValue_19 = CallFunc_IsVisible_ReturnValue_19;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsVisible_ReturnValue_20 = CallFunc_IsVisible_ReturnValue_20;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_21 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_21;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_22 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_22;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsVisible_ReturnValue_21 = CallFunc_IsVisible_ReturnValue_21;
	Parms.CallFunc_IsVisible_ReturnValue_22 = CallFunc_IsVisible_ReturnValue_22;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;
	Parms.CallFunc_CanBeSend_Result = CallFunc_CanBeSend_Result;
	Parms.CallFunc_CanBeSend_PreventingBuff = CallFunc_CanBeSend_PreventingBuff;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_23 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_23;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_IsVisible_ReturnValue_23 = CallFunc_IsVisible_ReturnValue_23;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_18 = CallFunc_BooleanOR_ReturnValue_18;
	Parms.CallFunc_BooleanOR_ReturnValue_19 = CallFunc_BooleanOR_ReturnValue_19;
	Parms.CallFunc_BooleanOR_ReturnValue_20 = CallFunc_BooleanOR_ReturnValue_20;
	Parms.CallFunc_BooleanOR_ReturnValue_21 = CallFunc_BooleanOR_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_22 = CallFunc_BooleanOR_ReturnValue_22;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.CallFunc_BooleanOR_ReturnValue_23 = CallFunc_BooleanOR_ReturnValue_23;
	Parms.CallFunc_BooleanOR_ReturnValue_24 = CallFunc_BooleanOR_ReturnValue_24;
	Parms.CallFunc_BooleanOR_ReturnValue_25 = CallFunc_BooleanOR_ReturnValue_25;
	Parms.CallFunc_BooleanOR_ReturnValue_26 = CallFunc_BooleanOR_ReturnValue_26;
	Parms.CallFunc_BooleanOR_ReturnValue_27 = CallFunc_BooleanOR_ReturnValue_27;
	Parms.CallFunc_BooleanOR_ReturnValue_28 = CallFunc_BooleanOR_ReturnValue_28;
	Parms.CallFunc_BooleanOR_ReturnValue_29 = CallFunc_BooleanOR_ReturnValue_29;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.CallFunc_BooleanOR_ReturnValue_30 = CallFunc_BooleanOR_ReturnValue_30;
	Parms.CallFunc_BooleanOR_ReturnValue_31 = CallFunc_BooleanOR_ReturnValue_31;
	Parms.CallFunc_BooleanOR_ReturnValue_32 = CallFunc_BooleanOR_ReturnValue_32;
	Parms.CallFunc_BooleanOR_ReturnValue_33 = CallFunc_BooleanOR_ReturnValue_33;
	Parms.CallFunc_BooleanOR_ReturnValue_34 = CallFunc_BooleanOR_ReturnValue_34;
	Parms.CallFunc_BooleanOR_ReturnValue_35 = CallFunc_BooleanOR_ReturnValue_35;
	Parms.CallFunc_BooleanOR_ReturnValue_36 = CallFunc_BooleanOR_ReturnValue_36;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.CallFunc_BooleanOR_ReturnValue_37 = CallFunc_BooleanOR_ReturnValue_37;
	Parms.CallFunc_BooleanOR_ReturnValue_38 = CallFunc_BooleanOR_ReturnValue_38;
	Parms.CallFunc_BooleanOR_ReturnValue_39 = CallFunc_BooleanOR_ReturnValue_39;
	Parms.CallFunc_BooleanOR_ReturnValue_40 = CallFunc_BooleanOR_ReturnValue_40;
	Parms.CallFunc_BooleanOR_ReturnValue_41 = CallFunc_BooleanOR_ReturnValue_41;
	Parms.CallFunc_BooleanOR_ReturnValue_42 = CallFunc_BooleanOR_ReturnValue_42;
	Parms.CallFunc_BooleanOR_ReturnValue_43 = CallFunc_BooleanOR_ReturnValue_43;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.CallFunc_BooleanOR_ReturnValue_44 = CallFunc_BooleanOR_ReturnValue_44;
	Parms.CallFunc_BooleanOR_ReturnValue_45 = CallFunc_BooleanOR_ReturnValue_45;
	Parms.CallFunc_BooleanOR_ReturnValue_46 = CallFunc_BooleanOR_ReturnValue_46;
	Parms.CallFunc_BooleanOR_ReturnValue_47 = CallFunc_BooleanOR_ReturnValue_47;
	Parms.CallFunc_BooleanOR_ReturnValue_48 = CallFunc_BooleanOR_ReturnValue_48;
	Parms.CallFunc_BooleanOR_ReturnValue_49 = CallFunc_BooleanOR_ReturnValue_49;
	Parms.CallFunc_BooleanOR_ReturnValue_50 = CallFunc_BooleanOR_ReturnValue_50;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.CallFunc_BooleanOR_ReturnValue_51 = CallFunc_BooleanOR_ReturnValue_51;
	Parms.CallFunc_BooleanOR_ReturnValue_52 = CallFunc_BooleanOR_ReturnValue_52;
	Parms.CallFunc_BooleanOR_ReturnValue_53 = CallFunc_BooleanOR_ReturnValue_53;
	Parms.CallFunc_BooleanOR_ReturnValue_54 = CallFunc_BooleanOR_ReturnValue_54;
	Parms.CallFunc_BooleanOR_ReturnValue_55 = CallFunc_BooleanOR_ReturnValue_55;
	Parms.CallFunc_BooleanOR_ReturnValue_56 = CallFunc_BooleanOR_ReturnValue_56;
	Parms.CallFunc_BooleanOR_ReturnValue_57 = CallFunc_BooleanOR_ReturnValue_57;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.CallFunc_BooleanOR_ReturnValue_58 = CallFunc_BooleanOR_ReturnValue_58;
	Parms.CallFunc_BooleanOR_ReturnValue_59 = CallFunc_BooleanOR_ReturnValue_59;
	Parms.CallFunc_BooleanOR_ReturnValue_60 = CallFunc_BooleanOR_ReturnValue_60;
	Parms.CallFunc_BooleanOR_ReturnValue_61 = CallFunc_BooleanOR_ReturnValue_61;
	Parms.CallFunc_BooleanOR_ReturnValue_62 = CallFunc_BooleanOR_ReturnValue_62;
	Parms.CallFunc_BooleanOR_ReturnValue_63 = CallFunc_BooleanOR_ReturnValue_63;
	Parms.CallFunc_BooleanOR_ReturnValue_64 = CallFunc_BooleanOR_ReturnValue_64;
	Parms.K2Node_InputActionEvent_Key_17 = K2Node_InputActionEvent_Key_17;
	Parms.CallFunc_BooleanOR_ReturnValue_65 = CallFunc_BooleanOR_ReturnValue_65;
	Parms.CallFunc_BooleanOR_ReturnValue_66 = CallFunc_BooleanOR_ReturnValue_66;
	Parms.CallFunc_BooleanOR_ReturnValue_67 = CallFunc_BooleanOR_ReturnValue_67;
	Parms.CallFunc_BooleanOR_ReturnValue_68 = CallFunc_BooleanOR_ReturnValue_68;
	Parms.CallFunc_BooleanOR_ReturnValue_69 = CallFunc_BooleanOR_ReturnValue_69;
	Parms.CallFunc_BooleanOR_ReturnValue_70 = CallFunc_BooleanOR_ReturnValue_70;
	Parms.CallFunc_BooleanOR_ReturnValue_71 = CallFunc_BooleanOR_ReturnValue_71;
	Parms.K2Node_InputActionEvent_Key_18 = K2Node_InputActionEvent_Key_18;
	Parms.CallFunc_BooleanOR_ReturnValue_72 = CallFunc_BooleanOR_ReturnValue_72;
	Parms.CallFunc_BooleanOR_ReturnValue_73 = CallFunc_BooleanOR_ReturnValue_73;
	Parms.CallFunc_BooleanOR_ReturnValue_74 = CallFunc_BooleanOR_ReturnValue_74;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_24 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_24;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_BooleanOR_ReturnValue_75 = CallFunc_BooleanOR_ReturnValue_75;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_BooleanOR_ReturnValue_76 = CallFunc_BooleanOR_ReturnValue_76;
	Parms.CallFunc_BooleanOR_ReturnValue_77 = CallFunc_BooleanOR_ReturnValue_77;
	Parms.CallFunc_BooleanOR_ReturnValue_78 = CallFunc_BooleanOR_ReturnValue_78;
	Parms.CallFunc_IsVisible_ReturnValue_24 = CallFunc_IsVisible_ReturnValue_24;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_25 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_25;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_26 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_26;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsVisible_ReturnValue_25 = CallFunc_IsVisible_ReturnValue_25;
	Parms.CallFunc_IsVisible_ReturnValue_26 = CallFunc_IsVisible_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_27 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_27;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.K2Node_DynamicCast_AsWid_Mission_Selection_Main_28 = K2Node_DynamicCast_AsWid_Mission_Selection_Main_28;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_IsVisible_ReturnValue_27 = CallFunc_IsVisible_ReturnValue_27;
	Parms.CallFunc_IsVisible_ReturnValue_28 = CallFunc_IsVisible_ReturnValue_28;
	Parms.K2Node_InputActionEvent_Key_19 = K2Node_InputActionEvent_Key_19;
	Parms.CallFunc_BooleanOR_ReturnValue_79 = CallFunc_BooleanOR_ReturnValue_79;
	Parms.CallFunc_BooleanOR_ReturnValue_80 = CallFunc_BooleanOR_ReturnValue_80;
	Parms.CallFunc_BooleanOR_ReturnValue_81 = CallFunc_BooleanOR_ReturnValue_81;
	Parms.CallFunc_BooleanOR_ReturnValue_82 = CallFunc_BooleanOR_ReturnValue_82;
	Parms.CallFunc_BooleanOR_ReturnValue_83 = CallFunc_BooleanOR_ReturnValue_83;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_BooleanOR_ReturnValue_84 = CallFunc_BooleanOR_ReturnValue_84;
	Parms.CallFunc_BooleanOR_ReturnValue_85 = CallFunc_BooleanOR_ReturnValue_85;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_20 = K2Node_InputActionEvent_Key_20;
	Parms.K2Node_CustomEvent_UpdateMovementState = K2Node_CustomEvent_UpdateMovementState;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_IsInPIE_ReturnValue = CallFunc_IsInPIE_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue = CallFunc_GetIsGateOfMadnessMode_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_GetCompletedStoryQuestsCount_ReturnValue = CallFunc_GetCompletedStoryQuestsCount_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Quick_Menu = K2Node_DynamicCast_AsWid_Inventory_Quick_Menu;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1 = K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.StartChoosingMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::StartChoosingMission__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "StartChoosingMission__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.DoomsDay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MissionSelection_C::DoomsDay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "DoomsDay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MissionSelection.bp_MissionSelection_C.MissionSelectionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::MissionSelectionFinished__DelegateSignature(class FName MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "MissionSelectionFinished__DelegateSignature");

	Params::Abp_MissionSelection_C_MissionSelectionFinished__DelegateSignature_Params Parms{};

	Parms.MapName = MapName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MissionSelection.bp_MissionSelection_C.ReturnWidgetReference__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_WorkshopUI_Main_C*      Workshop_UI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MissionSelection_C::ReturnWidgetReference__DelegateSignature(class UWid_WorkshopUI_Main_C* Workshop_UI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MissionSelection_C", "ReturnWidgetReference__DelegateSignature");

	Params::Abp_MissionSelection_C_ReturnWidgetReference__DelegateSignature_Params Parms{};

	Parms.Workshop_UI = Workshop_UI;

	UObject::ProcessEvent(Func, &Parms);

}

}


