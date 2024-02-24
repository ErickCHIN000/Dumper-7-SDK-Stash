#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C
// (None)

class UClass* UCF_DisableBuildingIntegrity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DisableBuildingIntegrity_C");

	return Clss;
}


// CF_DisableBuildingIntegrity_C CF_DisableBuildingIntegrity.Default__CF_DisableBuildingIntegrity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DisableBuildingIntegrity_C* UCF_DisableBuildingIntegrity_C::GetDefaultObj()
{
	static class UCF_DisableBuildingIntegrity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DisableBuildingIntegrity_C*>(UCF_DisableBuildingIntegrity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildingIntegrityDisabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_DisableBuildingIntegrity_C::GetCheckboxState(bool CallFunc_IsBuildingIntegrityDisabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DisableBuildingIntegrity_C", "GetCheckboxState");

	Params::UCF_DisableBuildingIntegrity_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_IsBuildingIntegrityDisabled_ReturnValue = CallFunc_IsBuildingIntegrityDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DisableBuildingIntegrity_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DisableBuildingIntegrity_C", "OnCheckboxStateChanged");

	Params::UCF_DisableBuildingIntegrity_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DisableBuildingIntegrity.CF_DisableBuildingIntegrity_C.ExecuteUbergraph_CF_DisableBuildingIntegrity
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetCheatController_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheatController*            CallFunc_GetCheatController_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DisableBuildingIntegrity_C::ExecuteUbergraph_CF_DisableBuildingIntegrity(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DisableBuildingIntegrity_C", "ExecuteUbergraph_CF_DisableBuildingIntegrity");

	Params::UCF_DisableBuildingIntegrity_C_ExecuteUbergraph_CF_DisableBuildingIntegrity_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetCheatController_Paths = CallFunc_GetCheatController_Paths;
	Parms.CallFunc_GetCheatController_ReturnValue = CallFunc_GetCheatController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


