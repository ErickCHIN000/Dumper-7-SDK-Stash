#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_CameraSmoothing.W_PostProcessEntry_CameraSmoothing_C
// (None)

class UClass* UW_PostProcessEntry_CameraSmoothing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_CameraSmoothing_C");

	return Clss;
}


// W_PostProcessEntry_CameraSmoothing_C W_PostProcessEntry_CameraSmoothing.Default__W_PostProcessEntry_CameraSmoothing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_CameraSmoothing_C* UW_PostProcessEntry_CameraSmoothing_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_CameraSmoothing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_CameraSmoothing_C*>(UW_PostProcessEntry_CameraSmoothing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry_CameraSmoothing.W_PostProcessEntry_CameraSmoothing_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_CinematicPawn_C*         CallFunc_GetCinematicPawn_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_CameraSmoothing_C::UpdatePostProcess(struct FPostProcessSettings& Settings, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, float CallFunc_GetSliderValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_CameraSmoothing_C", "UpdatePostProcess");

	Params::UW_PostProcessEntry_CameraSmoothing_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetCinematicPawn_ReturnValue = CallFunc_GetCinematicPawn_ReturnValue;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


