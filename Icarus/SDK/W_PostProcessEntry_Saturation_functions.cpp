#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_Saturation.W_PostProcessEntry_Saturation_C
// (None)

class UClass* UW_PostProcessEntry_Saturation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_Saturation_C");

	return Clss;
}


// W_PostProcessEntry_Saturation_C W_PostProcessEntry_Saturation.Default__W_PostProcessEntry_Saturation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_Saturation_C* UW_PostProcessEntry_Saturation_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_Saturation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_Saturation_C*>(UW_PostProcessEntry_Saturation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry_Saturation.W_PostProcessEntry_Saturation_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Saturation_C::UpdatePostProcess(struct FPostProcessSettings& Settings, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetSliderValue_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FVector4& CallFunc_MakeVector4_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Saturation_C", "UpdatePostProcess");

	Params::UW_PostProcessEntry_Saturation_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


