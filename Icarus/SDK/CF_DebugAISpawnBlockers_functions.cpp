#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C
// (None)

class UClass* UCF_DebugAISpawnBlockers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugAISpawnBlockers_C");

	return Clss;
}


// CF_DebugAISpawnBlockers_C CF_DebugAISpawnBlockers.Default__CF_DebugAISpawnBlockers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugAISpawnBlockers_C* UCF_DebugAISpawnBlockers_C::GetDefaultObj()
{
	static class UCF_DebugAISpawnBlockers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugAISpawnBlockers_C*>(UCF_DebugAISpawnBlockers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AAISpawner*                  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDebugSpawnBlockers_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_DebugAISpawnBlockers_C::GetCheckboxState(class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_GetDebugSpawnBlockers_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugAISpawnBlockers_C", "GetCheckboxState");

	Params::UCF_DebugAISpawnBlockers_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetDebugSpawnBlockers_ReturnValue = CallFunc_GetDebugSpawnBlockers_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugAISpawnBlockers_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugAISpawnBlockers_C", "OnCheckboxStateChanged");

	Params::UCF_DebugAISpawnBlockers_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugAISpawnBlockers.CF_DebugAISpawnBlockers_C.ExecuteUbergraph_CF_DebugAISpawnBlockers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAISpawner*                  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugAISpawnBlockers_C::ExecuteUbergraph_CF_DebugAISpawnBlockers(int32 EntryPoint, bool K2Node_Event_NewState, class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugAISpawnBlockers_C", "ExecuteUbergraph_CF_DebugAISpawnBlockers");

	Params::UCF_DebugAISpawnBlockers_C_ExecuteUbergraph_CF_DebugAISpawnBlockers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


