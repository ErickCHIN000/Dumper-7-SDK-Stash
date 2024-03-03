#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_CarnalLevel.AC_CarnalLevel_C
// (None)

class UClass* UAC_CarnalLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_CarnalLevel_C");

	return Clss;
}


// AC_CarnalLevel_C AC_CarnalLevel.Default__AC_CarnalLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_CarnalLevel_C* UAC_CarnalLevel_C::GetDefaultObj()
{
	static class UAC_CarnalLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_CarnalLevel_C*>(UAC_CarnalLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Level Check
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TURR                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_CarnalLevel_C::Level_Check(int32 Level, bool* TURR, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Level Check");

	Params::UAC_CarnalLevel_C_Level_Check_Params Parms{};

	Parms.Level = Level;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TURR != nullptr)
		*TURR = Parms.TURR;

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Get Current Level
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_CarnalLevel_C::Get_Current_Level(int32* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Get Current Level");

	Params::UAC_CarnalLevel_C_Get_Current_Level_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Is Next Level Valid?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_CarnalLevel_C::Is_Next_Level_Valid_(bool* IsValid, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Is Next Level Valid?");

	Params::UAC_CarnalLevel_C_Is_Next_Level_Valid__Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Exceed Level Max Exp?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_CarnalLevel_C::Exceed_Level_Max_Exp_(bool* Return_value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Exceed Level Max Exp?");

	Params::UAC_CarnalLevel_C_Exceed_Level_Max_Exp__Params Parms{};

	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = Parms.Return_value;

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Setup Leveling Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelingSystem           CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_CarnalLevel_C::Setup_Leveling_Data(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_LevelingSystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Setup Leveling Data");

	Params::UAC_CarnalLevel_C_Setup_Leveling_Data_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAC_CarnalLevel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Event Add Level Exp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Experience                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_CarnalLevel_C::Event_Add_Level_Exp(float Experience)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Event Add Level Exp");

	Params::UAC_CarnalLevel_C_Event_Add_Level_Exp_Params Parms{};

	Parms.Experience = Experience;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Event Set Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Current_Experience                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_CarnalLevel_C::Event_Set_Level(int32 Level, float Current_Experience)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Event Set Level");

	Params::UAC_CarnalLevel_C_Event_Set_Level_Params Parms{};

	Parms.Level = Level;
	Parms.Current_Experience = Current_Experience;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Event Level Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_CarnalLevel_C::Event_Level_Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Event Level Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.Event Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_CarnalLevel_C::Event_Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "Event Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.ExecuteUbergraph_AC_CarnalLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CarnalLevel_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Experience                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Exceed_Level_Max_Exp__Return_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Exceed_Level_Max_Exp__Return_Value_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Exceed_Level_Max_Exp__Return_Value_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Next_Level_Valid__isValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Current_Experience                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_05_notification_CarnalInstinct_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Current_Level_Level                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_CarnalLevel_C::ExecuteUbergraph_AC_CarnalLevel(int32 EntryPoint, class UWB_CarnalLevel_C* CallFunc_Create_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_CustomEvent_Experience, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Exceed_Level_Max_Exp__Return_Value, bool CallFunc_Exceed_Level_Max_Exp__Return_Value_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Exceed_Level_Max_Exp__Return_Value_2, bool CallFunc_Is_Next_Level_Valid__isValid, int32 K2Node_CustomEvent_Level, float K2Node_CustomEvent_Current_Experience, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class UW_05_notification_CarnalInstinct_C* CallFunc_Create_ReturnValue_1, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Get_Current_Level_Level, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "ExecuteUbergraph_AC_CarnalLevel");

	Params::UAC_CarnalLevel_C_ExecuteUbergraph_AC_CarnalLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Experience = K2Node_CustomEvent_Experience;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Exceed_Level_Max_Exp__Return_Value = CallFunc_Exceed_Level_Max_Exp__Return_Value;
	Parms.CallFunc_Exceed_Level_Max_Exp__Return_Value_1 = CallFunc_Exceed_Level_Max_Exp__Return_Value_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Exceed_Level_Max_Exp__Return_Value_2 = CallFunc_Exceed_Level_Max_Exp__Return_Value_2;
	Parms.CallFunc_Is_Next_Level_Valid__isValid = CallFunc_Is_Next_Level_Valid__isValid;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_Current_Experience = K2Node_CustomEvent_Current_Experience;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Get_Current_Level_Level = CallFunc_Get_Current_Level_Level;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.On Level Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_CarnalLevel_C::On_Level_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "On Level Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_CarnalLevel.AC_CarnalLevel_C.On Gained Experience__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_CarnalLevel_C::On_Gained_Experience__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_CarnalLevel_C", "On Gained Experience__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


