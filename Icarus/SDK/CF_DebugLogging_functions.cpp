#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugLogging.CF_DebugLogging_C
// (None)

class UClass* UCF_DebugLogging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugLogging_C");

	return Clss;
}


// CF_DebugLogging_C CF_DebugLogging.Default__CF_DebugLogging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugLogging_C* UCF_DebugLogging_C::GetDefaultObj()
{
	static class UCF_DebugLogging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugLogging_C*>(UCF_DebugLogging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugLogging.CF_DebugLogging_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_DebugLogging_C::GetCheckboxState(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugLogging_C", "GetCheckboxState");

	Params::UCF_DebugLogging_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_DebugLogging.CF_DebugLogging_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugLogging_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugLogging_C", "OnCheckboxStateChanged");

	Params::UCF_DebugLogging_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugLogging.CF_DebugLogging_C.ExecuteUbergraph_CF_DebugLogging
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugLogging_C::ExecuteUbergraph_CF_DebugLogging(int32 EntryPoint, bool K2Node_Event_NewState, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugLogging_C", "ExecuteUbergraph_CF_DebugLogging");

	Params::UCF_DebugLogging_C_ExecuteUbergraph_CF_DebugLogging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


