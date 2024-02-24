#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QFPErrorIndicator.WBP_QFPErrorIndicator_C
// (None)

class UClass* UWBP_QFPErrorIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QFPErrorIndicator_C");

	return Clss;
}


// WBP_QFPErrorIndicator_C WBP_QFPErrorIndicator.Default__WBP_QFPErrorIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QFPErrorIndicator_C* UWBP_QFPErrorIndicator_C::GetDefaultObj()
{
	static class UWBP_QFPErrorIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QFPErrorIndicator_C*>(UWBP_QFPErrorIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QFPErrorIndicator.WBP_QFPErrorIndicator_C.BP_SetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_QFPErrorIndicator_C::BP_SetState(bool Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QFPErrorIndicator_C", "BP_SetState");

	Params::UWBP_QFPErrorIndicator_C_BP_SetState_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QFPErrorIndicator.WBP_QFPErrorIndicator_C.ExecuteUbergraph_WBP_QFPErrorIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_error                                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_QFPErrorIndicator_C::ExecuteUbergraph_WBP_QFPErrorIndicator(int32 EntryPoint, bool K2Node_Event_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QFPErrorIndicator_C", "ExecuteUbergraph_WBP_QFPErrorIndicator");

	Params::UWBP_QFPErrorIndicator_C_ExecuteUbergraph_WBP_QFPErrorIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_error = K2Node_Event_error;

	UObject::ProcessEvent(Func, &Parms);

}

}


