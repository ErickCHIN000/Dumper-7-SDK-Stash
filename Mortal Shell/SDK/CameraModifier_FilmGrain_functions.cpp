#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_FilmGrain.CameraModifier_FilmGrain_C
// (None)

class UClass* UCameraModifier_FilmGrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_FilmGrain_C");

	return Clss;
}


// CameraModifier_FilmGrain_C CameraModifier_FilmGrain.Default__CameraModifier_FilmGrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_FilmGrain_C* UCameraModifier_FilmGrain_C::GetDefaultObj()
{
	static class UCameraModifier_FilmGrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_FilmGrain_C*>(UCameraModifier_FilmGrain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_FilmGrain.CameraModifier_FilmGrain_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        PostProcessSettings                                              (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void UCameraModifier_FilmGrain_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_FilmGrain_C", "BlueprintModifyPostProcess");

	Params::UCameraModifier_FilmGrain_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


