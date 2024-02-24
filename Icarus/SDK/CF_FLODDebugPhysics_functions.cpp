#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_FLODDebugPhysics.CF_FLODDebugPhysics_C
// (None)

class UClass* UCF_FLODDebugPhysics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_FLODDebugPhysics_C");

	return Clss;
}


// CF_FLODDebugPhysics_C CF_FLODDebugPhysics.Default__CF_FLODDebugPhysics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_FLODDebugPhysics_C* UCF_FLODDebugPhysics_C::GetDefaultObj()
{
	static class UCF_FLODDebugPhysics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_FLODDebugPhysics_C*>(UCF_FLODDebugPhysics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_FLODDebugPhysics.CF_FLODDebugPhysics_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFISMPhysDebugEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_FLODDebugPhysics_C::GetCheckboxState(bool CallFunc_GetFISMPhysDebugEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FLODDebugPhysics_C", "GetCheckboxState");

	Params::UCF_FLODDebugPhysics_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetFISMPhysDebugEnabled_ReturnValue = CallFunc_GetFISMPhysDebugEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_FLODDebugPhysics.CF_FLODDebugPhysics_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_FLODDebugPhysics_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FLODDebugPhysics_C", "OnCheckboxStateChanged");

	Params::UCF_FLODDebugPhysics_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_FLODDebugPhysics.CF_FLODDebugPhysics_C.ExecuteUbergraph_CF_FLODDebugPhysics
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_FLODDebugPhysics_C::ExecuteUbergraph_CF_FLODDebugPhysics(int32 EntryPoint, bool K2Node_Event_NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FLODDebugPhysics_C", "ExecuteUbergraph_CF_FLODDebugPhysics");

	Params::UCF_FLODDebugPhysics_C_ExecuteUbergraph_CF_FLODDebugPhysics_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}


