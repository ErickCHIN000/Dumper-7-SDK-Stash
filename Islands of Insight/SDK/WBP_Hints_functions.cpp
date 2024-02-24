#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Hints.WBP_Hints_C
// (None)

class UClass* UWBP_Hints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Hints_C");

	return Clss;
}


// WBP_Hints_C WBP_Hints.Default__WBP_Hints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Hints_C* UWBP_Hints_C::GetDefaultObj()
{
	static class UWBP_Hints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Hints_C*>(UWBP_Hints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Hints.WBP_Hints_C.BP_SetHintText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        AggregateHintText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Hints_C::BP_SetHintText(class FText& AggregateHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Hints_C", "BP_SetHintText");

	Params::UWBP_Hints_C_BP_SetHintText_Params Parms{};

	Parms.AggregateHintText = AggregateHintText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Hints.WBP_Hints_C.ExecuteUbergraph_WBP_Hints
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_aggregateHintText                                   (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Hints_C::ExecuteUbergraph_WBP_Hints(int32 EntryPoint, class FText K2Node_Event_aggregateHintText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Hints_C", "ExecuteUbergraph_WBP_Hints");

	Params::UWBP_Hints_C_ExecuteUbergraph_WBP_Hints_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_aggregateHintText = K2Node_Event_aggregateHintText;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


