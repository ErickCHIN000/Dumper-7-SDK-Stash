#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_UnlimitedResources.CF_UnlimitedResources_C
// (None)

class UClass* UCF_UnlimitedResources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_UnlimitedResources_C");

	return Clss;
}


// CF_UnlimitedResources_C CF_UnlimitedResources.Default__CF_UnlimitedResources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_UnlimitedResources_C* UCF_UnlimitedResources_C::GetDefaultObj()
{
	static class UCF_UnlimitedResources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_UnlimitedResources_C*>(UCF_UnlimitedResources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_UnlimitedResources.CF_UnlimitedResources_C.GetCheckboxState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlimitedResourcesEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_UnlimitedResources_C::GetCheckboxState(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsUnlimitedResourcesEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlimitedResources_C", "GetCheckboxState");

	Params::UCF_UnlimitedResources_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsUnlimitedResourcesEnabled_ReturnValue = CallFunc_IsUnlimitedResourcesEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_UnlimitedResources.CF_UnlimitedResources_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_UnlimitedResources_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlimitedResources_C", "OnCheckboxStateChanged");

	Params::UCF_UnlimitedResources_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_UnlimitedResources.CF_UnlimitedResources_C.ExecuteUbergraph_CF_UnlimitedResources
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetCheatController_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheatController*            CallFunc_GetCheatController_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_UnlimitedResources_C::ExecuteUbergraph_CF_UnlimitedResources(int32 EntryPoint, bool K2Node_Event_NewState, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlimitedResources_C", "ExecuteUbergraph_CF_UnlimitedResources");

	Params::UCF_UnlimitedResources_C_ExecuteUbergraph_CF_UnlimitedResources_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetCheatController_Paths = CallFunc_GetCheatController_Paths;
	Parms.CallFunc_GetCheatController_ReturnValue = CallFunc_GetCheatController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


