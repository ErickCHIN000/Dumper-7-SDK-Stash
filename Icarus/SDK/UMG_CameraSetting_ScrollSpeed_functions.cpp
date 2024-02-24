#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CameraSetting_ScrollSpeed.UMG_CameraSetting_ScrollSpeed_C
// (None)

class UClass* UUMG_CameraSetting_ScrollSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CameraSetting_ScrollSpeed_C");

	return Clss;
}


// UMG_CameraSetting_ScrollSpeed_C UMG_CameraSetting_ScrollSpeed.Default__UMG_CameraSetting_ScrollSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CameraSetting_ScrollSpeed_C* UUMG_CameraSetting_ScrollSpeed_C::GetDefaultObj()
{
	static class UUMG_CameraSetting_ScrollSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CameraSetting_ScrollSpeed_C*>(UUMG_CameraSetting_ScrollSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CameraSetting_ScrollSpeed.UMG_CameraSetting_ScrollSpeed_C.GetSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_CameraSetting_ScrollSpeed_C::GetSliderValue(float CallFunc_GetValue_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CameraSetting_ScrollSpeed_C", "GetSliderValue");

	Params::UUMG_CameraSetting_ScrollSpeed_C_GetSliderValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


