#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ClientLogging.UMG_ClientLogging_C
// (None)

class UClass* UUMG_ClientLogging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ClientLogging_C");

	return Clss;
}


// UMG_ClientLogging_C UMG_ClientLogging.Default__UMG_ClientLogging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ClientLogging_C* UUMG_ClientLogging_C::GetDefaultObj()
{
	static class UUMG_ClientLogging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ClientLogging_C*>(UUMG_ClientLogging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ClientLogging.UMG_ClientLogging_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ClientLogging_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClientLogging_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ClientLogging.UMG_ClientLogging_C.OnLogEntryAdded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIcarusLogEntry             LogEntry                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ClientLogging_C::OnLogEntryAdded(struct FIcarusLogEntry& LogEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClientLogging_C", "OnLogEntryAdded");

	Params::UUMG_ClientLogging_C_OnLogEntryAdded_Params Parms{};

	Parms.LogEntry = LogEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ClientLogging.UMG_ClientLogging_C.InitLogList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ClientLogging_C::InitLogList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClientLogging_C", "InitLogList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ClientLogging.UMG_ClientLogging_C.ExecuteUbergraph_UMG_ClientLogging
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UIcarusLogSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ClientLogItem_C*         CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusLogEntry             K2Node_CustomEvent_LogEntry                                      (ConstParm)
// class UIcarusLogSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusLogEntry             CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_IsLogValid_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ClientLogging_C::ExecuteUbergraph_UMG_ClientLogging(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UBP_ClientLogItem_C* CallFunc_SpawnObject_ReturnValue, const struct FIcarusLogEntry& K2Node_CustomEvent_LogEntry, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, const struct FIcarusLogEntry& CallFunc_Array_Get_Item_1, bool CallFunc_IsLogValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ClientLogging_C", "ExecuteUbergraph_UMG_ClientLogging");

	Params::UUMG_ClientLogging_C_ExecuteUbergraph_UMG_ClientLogging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CustomEvent_LogEntry = K2Node_CustomEvent_LogEntry;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsLogValid_ReturnValue = CallFunc_IsLogValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


