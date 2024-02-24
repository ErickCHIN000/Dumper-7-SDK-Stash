#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C
// (None)

class UClass* UUMG_CameraSetting_Speed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CameraSetting_Speed_C");

	return Clss;
}


// UMG_CameraSetting_Speed_C UMG_CameraSetting_Speed.Default__UMG_CameraSetting_Speed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CameraSetting_Speed_C* UUMG_CameraSetting_Speed_C::GetDefaultObj()
{
	static class UUMG_CameraSetting_Speed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CameraSetting_Speed_C*>(UUMG_CameraSetting_Speed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C.ManualIncrease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Increase                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CameraSetting_Speed_C::ManualIncrease(float Increase, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_Speed_C", "ManualIncrease");

	Params::UUMG_CameraSetting_Speed_C_ManualIncrease_Params Parms{};

	Parms.Increase = Increase;
	Parms.CallFunc_GetMinSliderValue_ReturnValue = CallFunc_GetMinSliderValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetMaxSliderValue_ReturnValue = CallFunc_GetMaxSliderValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           CallFunc_GetPhotoCameraPawn_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CameraSetting_Speed_C::UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue, class ABP_PhotoCamera_C* CallFunc_GetPhotoCameraPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_Speed_C", "UpdatePostProcess");

	Params::UUMG_CameraSetting_Speed_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;
	Parms.CallFunc_GetPhotoCameraPawn_ReturnValue = CallFunc_GetPhotoCameraPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


