#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CameraSetting_Exposure.UMG_CameraSetting_Exposure_C
// (None)

class UClass* UUMG_CameraSetting_Exposure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CameraSetting_Exposure_C");

	return Clss;
}


// UMG_CameraSetting_Exposure_C UMG_CameraSetting_Exposure.Default__UMG_CameraSetting_Exposure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CameraSetting_Exposure_C* UUMG_CameraSetting_Exposure_C::GetDefaultObj()
{
	static class UUMG_CameraSetting_Exposure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CameraSetting_Exposure_C*>(UUMG_CameraSetting_Exposure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CameraSetting_Exposure.UMG_CameraSetting_Exposure_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CameraSetting_Exposure_C::UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_Exposure_C", "UpdatePostProcess");

	Params::UUMG_CameraSetting_Exposure_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


