#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FLODRecordRow.FLODRecordRow_C
// (None)

class UClass* UFLODRecordRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FLODRecordRow_C");

	return Clss;
}


// FLODRecordRow_C FLODRecordRow.Default__FLODRecordRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFLODRecordRow_C* UFLODRecordRow_C::GetDefaultObj()
{
	static class UFLODRecordRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFLODRecordRow_C*>(UFLODRecordRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FLODRecordRow.FLODRecordRow_C.SetFLODRecord
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFLODRecord*                 FLODRecord                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLODRecordRow_C::SetFLODRecord(class UFLODRecord* FLODRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FLODRecordRow_C", "SetFLODRecord");

	Params::UFLODRecordRow_C_SetFLODRecord_Params Parms{};

	Parms.FLODRecord = FLODRecord;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FLODRecordRow.FLODRecordRow_C.ExecuteUbergraph_FLODRecordRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODDescription            CallFunc_GetDescription_ReturnValue                              (ConstParm)
// class UFLODRecord*                 K2Node_CustomEvent_FLODRecord                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UFLODRecordRow_C::ExecuteUbergraph_FLODRecordRow(int32 EntryPoint, const struct FFLODDescription& CallFunc_GetDescription_ReturnValue, class UFLODRecord* K2Node_CustomEvent_FLODRecord, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FLODRecordRow_C", "ExecuteUbergraph_FLODRecordRow");

	Params::UFLODRecordRow_C_ExecuteUbergraph_FLODRecordRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.K2Node_CustomEvent_FLODRecord = K2Node_CustomEvent_FLODRecord;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


