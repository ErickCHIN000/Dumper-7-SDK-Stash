#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_CameraDeltaChecks.CF_CameraDeltaChecks_C
// (None)

class UClass* UCF_CameraDeltaChecks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_CameraDeltaChecks_C");

	return Clss;
}


// CF_CameraDeltaChecks_C CF_CameraDeltaChecks.Default__CF_CameraDeltaChecks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_CameraDeltaChecks_C* UCF_CameraDeltaChecks_C::GetDefaultObj()
{
	static class UCF_CameraDeltaChecks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_CameraDeltaChecks_C*>(UCF_CameraDeltaChecks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_CameraDeltaChecks.CF_CameraDeltaChecks_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_CameraDeltaChecks_C::GetCheckboxState(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_CameraDeltaChecks_C", "GetCheckboxState");

	Params::UCF_CameraDeltaChecks_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_CameraDeltaChecks.CF_CameraDeltaChecks_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_CameraDeltaChecks_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_CameraDeltaChecks_C", "OnCheckboxStateChanged");

	Params::UCF_CameraDeltaChecks_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_CameraDeltaChecks.CF_CameraDeltaChecks_C.ExecuteUbergraph_CF_CameraDeltaChecks
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_CameraDeltaChecks_C::ExecuteUbergraph_CF_CameraDeltaChecks(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_CameraDeltaChecks_C", "ExecuteUbergraph_CF_CameraDeltaChecks");

	Params::UCF_CameraDeltaChecks_C_ExecuteUbergraph_CF_CameraDeltaChecks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


