#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C
// (None)

class UClass* UCF_ShelteredRequiredDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_ShelteredRequiredDisabled_C");

	return Clss;
}


// CF_ShelteredRequiredDisabled_C CF_ShelteredRequiredDisabled.Default__CF_ShelteredRequiredDisabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_ShelteredRequiredDisabled_C* UCF_ShelteredRequiredDisabled_C::GetDefaultObj()
{
	static class UCF_ShelteredRequiredDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_ShelteredRequiredDisabled_C*>(UCF_ShelteredRequiredDisabled_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShelteredRequiredDisabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_ShelteredRequiredDisabled_C::GetCheckboxState(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsShelteredRequiredDisabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ShelteredRequiredDisabled_C", "GetCheckboxState");

	Params::UCF_ShelteredRequiredDisabled_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsShelteredRequiredDisabled_ReturnValue = CallFunc_IsShelteredRequiredDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_ShelteredRequiredDisabled_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ShelteredRequiredDisabled_C", "OnCheckboxStateChanged");

	Params::UCF_ShelteredRequiredDisabled_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_ShelteredRequiredDisabled.CF_ShelteredRequiredDisabled_C.ExecuteUbergraph_CF_ShelteredRequiredDisabled
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetCheatController_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheatController*            CallFunc_GetCheatController_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_ShelteredRequiredDisabled_C::ExecuteUbergraph_CF_ShelteredRequiredDisabled(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ShelteredRequiredDisabled_C", "ExecuteUbergraph_CF_ShelteredRequiredDisabled");

	Params::UCF_ShelteredRequiredDisabled_C_ExecuteUbergraph_CF_ShelteredRequiredDisabled_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetCheatController_Paths = CallFunc_GetCheatController_Paths;
	Parms.CallFunc_GetCheatController_ReturnValue = CallFunc_GetCheatController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


