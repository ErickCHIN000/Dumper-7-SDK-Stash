#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_ToggleProjection.W_PostProcessEntry_ToggleProjection_C
// (None)

class UClass* UW_PostProcessEntry_ToggleProjection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_ToggleProjection_C");

	return Clss;
}


// W_PostProcessEntry_ToggleProjection_C W_PostProcessEntry_ToggleProjection.Default__W_PostProcessEntry_ToggleProjection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_ToggleProjection_C* UW_PostProcessEntry_ToggleProjection_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_ToggleProjection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_ToggleProjection_C*>(UW_PostProcessEntry_ToggleProjection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry_ToggleProjection.W_PostProcessEntry_ToggleProjection_C.UpdatePostProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCheckboxState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UW_PostProcessEntry_ToggleProjection_C::UpdatePostProcess(struct FPostProcessSettings& Settings, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool CallFunc_GetCheckboxState_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_ToggleProjection_C", "UpdatePostProcess");

	Params::UW_PostProcessEntry_ToggleProjection_C_UpdatePostProcess_Params Parms{};

	Parms.Settings = Settings;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetCheckboxState_ReturnValue = CallFunc_GetCheckboxState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


