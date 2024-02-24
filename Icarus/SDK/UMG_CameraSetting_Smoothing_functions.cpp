#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CameraSetting_Smoothing.UMG_CameraSetting_Smoothing_C
// (None)

class UClass* UUMG_CameraSetting_Smoothing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CameraSetting_Smoothing_C");

	return Clss;
}


// UMG_CameraSetting_Smoothing_C UMG_CameraSetting_Smoothing.Default__UMG_CameraSetting_Smoothing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CameraSetting_Smoothing_C* UUMG_CameraSetting_Smoothing_C::GetDefaultObj()
{
	static class UUMG_CameraSetting_Smoothing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CameraSetting_Smoothing_C*>(UUMG_CameraSetting_Smoothing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CameraSetting_Smoothing.UMG_CameraSetting_Smoothing_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           CallFunc_GetPhotoCameraPawn_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CameraSetting_Smoothing_C::UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue, class ABP_PhotoCamera_C* CallFunc_GetPhotoCameraPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_Smoothing_C", "UpdatePostProcess");

	Params::UUMG_CameraSetting_Smoothing_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;
	Parms.CallFunc_GetPhotoCameraPawn_ReturnValue = CallFunc_GetPhotoCameraPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


