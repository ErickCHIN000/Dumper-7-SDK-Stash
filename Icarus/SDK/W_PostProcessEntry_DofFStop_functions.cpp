#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_DofFStop.W_PostProcessEntry_DofFStop_C
// (None)

class UClass* UW_PostProcessEntry_DofFStop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_DofFStop_C");

	return Clss;
}


// W_PostProcessEntry_DofFStop_C W_PostProcessEntry_DofFStop.Default__W_PostProcessEntry_DofFStop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_DofFStop_C* UW_PostProcessEntry_DofFStop_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_DofFStop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_DofFStop_C*>(UW_PostProcessEntry_DofFStop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry_DofFStop.W_PostProcessEntry_DofFStop_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_DofFStop_C::UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_DofFStop_C", "UpdatePostProcess");

	Params::UW_PostProcessEntry_DofFStop_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


