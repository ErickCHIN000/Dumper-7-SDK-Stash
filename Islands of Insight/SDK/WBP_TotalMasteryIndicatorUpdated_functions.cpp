#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TotalMasteryIndicatorUpdated.WBP_TotalMasteryIndicatorUpdated_C
// (None)

class UClass* UWBP_TotalMasteryIndicatorUpdated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TotalMasteryIndicatorUpdated_C");

	return Clss;
}


// WBP_TotalMasteryIndicatorUpdated_C WBP_TotalMasteryIndicatorUpdated.Default__WBP_TotalMasteryIndicatorUpdated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TotalMasteryIndicatorUpdated_C* UWBP_TotalMasteryIndicatorUpdated_C::GetDefaultObj()
{
	static class UWBP_TotalMasteryIndicatorUpdated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TotalMasteryIndicatorUpdated_C*>(UWBP_TotalMasteryIndicatorUpdated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TotalMasteryIndicatorUpdated.WBP_TotalMasteryIndicatorUpdated_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TotalMasteryIndicatorUpdated_C::SetLevel(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotalMasteryIndicatorUpdated_C", "SetLevel");

	Params::UWBP_TotalMasteryIndicatorUpdated_C_SetLevel_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TotalMasteryIndicatorUpdated.WBP_TotalMasteryIndicatorUpdated_C.ExecuteUbergraph_WBP_TotalMasteryIndicatorUpdated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_TotalMasteryIndicatorUpdated_C::ExecuteUbergraph_WBP_TotalMasteryIndicatorUpdated(int32 EntryPoint, int32 K2Node_CustomEvent_Value, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotalMasteryIndicatorUpdated_C", "ExecuteUbergraph_WBP_TotalMasteryIndicatorUpdated");

	Params::UWBP_TotalMasteryIndicatorUpdated_C_ExecuteUbergraph_WBP_TotalMasteryIndicatorUpdated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


