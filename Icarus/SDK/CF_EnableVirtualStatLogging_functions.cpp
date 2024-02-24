#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_EnableVirtualStatLogging.CF_EnableVirtualStatLogging_C
// (None)

class UClass* UCF_EnableVirtualStatLogging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_EnableVirtualStatLogging_C");

	return Clss;
}


// CF_EnableVirtualStatLogging_C CF_EnableVirtualStatLogging.Default__CF_EnableVirtualStatLogging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_EnableVirtualStatLogging_C* UCF_EnableVirtualStatLogging_C::GetDefaultObj()
{
	static class UCF_EnableVirtualStatLogging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_EnableVirtualStatLogging_C*>(UCF_EnableVirtualStatLogging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_EnableVirtualStatLogging.CF_EnableVirtualStatLogging_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVirtualStatLogging_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_EnableVirtualStatLogging_C::GetCheckboxState(bool CallFunc_IsVirtualStatLogging_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_EnableVirtualStatLogging_C", "GetCheckboxState");

	Params::UCF_EnableVirtualStatLogging_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_IsVirtualStatLogging_ReturnValue = CallFunc_IsVirtualStatLogging_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_EnableVirtualStatLogging.CF_EnableVirtualStatLogging_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_EnableVirtualStatLogging_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_EnableVirtualStatLogging_C", "OnCheckboxStateChanged");

	Params::UCF_EnableVirtualStatLogging_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_EnableVirtualStatLogging.CF_EnableVirtualStatLogging_C.ExecuteUbergraph_CF_EnableVirtualStatLogging
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_EnableVirtualStatLogging_C::ExecuteUbergraph_CF_EnableVirtualStatLogging(int32 EntryPoint, bool K2Node_Event_NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_EnableVirtualStatLogging_C", "ExecuteUbergraph_CF_EnableVirtualStatLogging");

	Params::UCF_EnableVirtualStatLogging_C_ExecuteUbergraph_CF_EnableVirtualStatLogging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}


