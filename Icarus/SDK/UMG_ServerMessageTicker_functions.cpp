#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ServerMessageTicker.UMG_ServerMessageTicker_C
// (None)

class UClass* UUMG_ServerMessageTicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ServerMessageTicker_C");

	return Clss;
}


// UMG_ServerMessageTicker_C UMG_ServerMessageTicker.Default__UMG_ServerMessageTicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ServerMessageTicker_C* UUMG_ServerMessageTicker_C::GetDefaultObj()
{
	static class UUMG_ServerMessageTicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ServerMessageTicker_C*>(UUMG_ServerMessageTicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ServerMessageTicker.UMG_ServerMessageTicker_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMaintenanceStatus          Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime                   CallFunc_ConvertToDateTime_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_ConvertToDateTime_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue                 (None)
// class FText                        CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_ServerMessageTicker_C::Update(const struct FMaintenanceStatus& Status, const struct FDateTime& CallFunc_ConvertToDateTime_ReturnValue, const struct FDateTime& CallFunc_ConvertToDateTime_ReturnValue_1, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ServerMessageTicker_C", "Update");

	Params::UUMG_ServerMessageTicker_C_Update_Params Parms{};

	Parms.Status = Status;
	Parms.CallFunc_ConvertToDateTime_ReturnValue = CallFunc_ConvertToDateTime_ReturnValue;
	Parms.CallFunc_ConvertToDateTime_ReturnValue_1 = CallFunc_ConvertToDateTime_ReturnValue_1;
	Parms.CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue = CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;
	Parms.CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1 = CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


