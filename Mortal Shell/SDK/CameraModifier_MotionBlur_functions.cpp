#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_MotionBlur.CameraModifier_MotionBlur_C
// (None)

class UClass* UCameraModifier_MotionBlur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_MotionBlur_C");

	return Clss;
}


// CameraModifier_MotionBlur_C CameraModifier_MotionBlur.Default__CameraModifier_MotionBlur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_MotionBlur_C* UCameraModifier_MotionBlur_C::GetDefaultObj()
{
	static class UCameraModifier_MotionBlur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_MotionBlur_C*>(UCameraModifier_MotionBlur_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_MotionBlur.CameraModifier_MotionBlur_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        PostProcessSettings                                              (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void UCameraModifier_MotionBlur_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_MotionBlur_C", "BlueprintModifyPostProcess");

	Params::UCameraModifier_MotionBlur_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


