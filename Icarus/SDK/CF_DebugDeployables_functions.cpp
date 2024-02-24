#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugDeployables.CF_DebugDeployables_C
// (None)

class UClass* UCF_DebugDeployables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugDeployables_C");

	return Clss;
}


// CF_DebugDeployables_C CF_DebugDeployables.Default__CF_DebugDeployables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugDeployables_C* UCF_DebugDeployables_C::GetDefaultObj()
{
	static class UCF_DebugDeployables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugDeployables_C*>(UCF_DebugDeployables_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugDeployables.CF_DebugDeployables_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_DebugDeployables_C::GetCheckboxState(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugDeployables_C", "GetCheckboxState");

	Params::UCF_DebugDeployables_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_DebugDeployables.CF_DebugDeployables_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugDeployables_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugDeployables_C", "OnCheckboxStateChanged");

	Params::UCF_DebugDeployables_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DebugDeployables.CF_DebugDeployables_C.ExecuteUbergraph_CF_DebugDeployables
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugDeployables_C::ExecuteUbergraph_CF_DebugDeployables(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugDeployables_C", "ExecuteUbergraph_CF_DebugDeployables");

	Params::UCF_DebugDeployables_C_ExecuteUbergraph_CF_DebugDeployables_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}


