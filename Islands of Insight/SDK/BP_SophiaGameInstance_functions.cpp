#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SophiaGameInstance.BP_SophiaGameInstance_C
// (None)

class UClass* UBP_SophiaGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SophiaGameInstance_C");

	return Clss;
}


// BP_SophiaGameInstance_C BP_SophiaGameInstance.Default__BP_SophiaGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SophiaGameInstance_C* UBP_SophiaGameInstance_C::GetDefaultObj()
{
	static class UBP_SophiaGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SophiaGameInstance_C*>(UBP_SophiaGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Set Resolution Scaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::Set_Resolution_Scaling(int32 NewParam, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Set Resolution Scaling");

	Params::UBP_SophiaGameInstance_C_Set_Resolution_Scaling_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Vertical FOV to Horizontal FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAspectRatio_AspectRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegTan_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_SophiaGameInstance_C::Vertical_FOV_to_Horizontal_FOV(float A, float CallFunc_GetAspectRatio_AspectRatio, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegTan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Vertical FOV to Horizontal FOV");

	Params::UBP_SophiaGameInstance_C_Vertical_FOV_to_Horizontal_FOV_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_GetAspectRatio_AspectRatio = CallFunc_GetAspectRatio_AspectRatio;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_DegTan_ReturnValue = CallFunc_DegTan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_DegAtan_ReturnValue = CallFunc_DegAtan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Get Horizontal Zoom FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_SophiaGameInstance_C::Get_Horizontal_Zoom_FOV(float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Get Horizontal Zoom FOV");

	Params::UBP_SophiaGameInstance_C_Get_Horizontal_Zoom_FOV_Params Parms{};

	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue = CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Get Horizontal FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_SophiaGameInstance_C::Get_Horizontal_FOV(float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Get Horizontal FOV");

	Params::UBP_SophiaGameInstance_C_Get_Horizontal_FOV_Params Parms{};

	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue = CallFunc_Vertical_FOV_to_Horizontal_FOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_GetCurrentHorizontalFOVs
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZoomFOV                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Horizontal_FOV_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_GetCurrentHorizontalFOVs(float* FOV, float* ZoomFOV, float CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue, float CallFunc_Get_Horizontal_FOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_GetCurrentHorizontalFOVs");

	Params::UBP_SophiaGameInstance_C_BPI_GetCurrentHorizontalFOVs_Params Parms{};

	Parms.CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue = CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue;
	Parms.CallFunc_Get_Horizontal_FOV_ReturnValue = CallFunc_Get_Horizontal_FOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

	if (ZoomFOV != nullptr)
		*ZoomFOV = Parms.ZoomFOV;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.GetAspectRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              AspectRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::GetAspectRatio(float* AspectRatio, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "GetAspectRatio");

	Params::UBP_SophiaGameInstance_C_GetAspectRatio_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AspectRatio != nullptr)
		*AspectRatio = Parms.AspectRatio;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.AutoSetDistantShadows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Off_Threshold                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Low_Threshold                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::AutoSetDistantShadows(float Score, float Off_Threshold, float Low_Threshold, bool Temp_bool_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_2, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "AutoSetDistantShadows");

	Params::UBP_SophiaGameInstance_C_AutoSetDistantShadows_Params Parms{};

	Parms.Score = Score;
	Parms.Off_Threshold = Off_Threshold;
	Parms.Low_Threshold = Low_Threshold;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Set CVar by Threshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CVar_Name                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Low_Threshold                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Medium_Threshold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              High_Threshold                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Set_CVar_by_Threshold(class FName CVar_Name, float Score, float Low_Threshold, float Medium_Threshold, float High_Threshold, bool Temp_bool_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_2, bool Temp_bool_Variable_2, int32 K2Node_Select_Default_1, int32 Temp_int_Variable_3, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Set CVar by Threshold");

	Params::UBP_SophiaGameInstance_C_Set_CVar_by_Threshold_Params Parms{};

	Parms.CVar_Name = CVar_Name;
	Parms.Score = Score;
	Parms.Low_Threshold = Low_Threshold;
	Parms.Medium_Threshold = Medium_Threshold;
	Parms.High_Threshold = High_Threshold;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_AutoDetectQualitySettings
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_shadows             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_textures            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_effects             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_foliage             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_shaders             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_AutoDetectQualitySettings(float CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore, float CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shadows, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_textures, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_effects, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_foliage, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shaders, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_AutoDetectQualitySettings");

	Params::UBP_SophiaGameInstance_C_BPI_AutoDetectQualitySettings_Params Parms{};

	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore = CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore = CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale = CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance = CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail = CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing = CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_shadows = CallFunc_BenchmarkAndReturnSuggestedSettings_shadows;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_textures = CallFunc_BenchmarkAndReturnSuggestedSettings_textures;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_effects = CallFunc_BenchmarkAndReturnSuggestedSettings_effects;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_foliage = CallFunc_BenchmarkAndReturnSuggestedSettings_foliage;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_shaders = CallFunc_BenchmarkAndReturnSuggestedSettings_shaders;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI = CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog = CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Auto Set Resolution Scaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GPUScore                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Auto_Set_Resolution_Scaling(float GPUScore, bool Temp_bool_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Auto Set Resolution Scaling");

	Params::UBP_SophiaGameInstance_C_Auto_Set_Resolution_Scaling_Params Parms{};

	Parms.GPUScore = GPUScore;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Get Normalized Resolution Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Normalized_Resolution_Scale                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGameResolution_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Get_Normalized_Resolution_Scale(float* Normalized_Resolution_Scale, const struct FVector2D& CallFunc_GetGameResolution_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Get Normalized Resolution Scale");

	Params::UBP_SophiaGameInstance_C_Get_Normalized_Resolution_Scale_Params Parms{};

	Parms.CallFunc_GetGameResolution_ReturnValue = CallFunc_GetGameResolution_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Normalized_Resolution_Scale != nullptr)
		*Normalized_Resolution_Scale = Parms.Normalized_Resolution_Scale;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_CreateServerExtraSettings
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ServerMapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue            (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1          (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2          (None)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<struct FSessionPropertyKeyPair> UBP_SophiaGameInstance_C::BPI_CreateServerExtraSettings(const class FString& ServerName, const class FString& ServerMapName, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_CreateServerExtraSettings");

	Params::UBP_SophiaGameInstance_C_BPI_CreateServerExtraSettings_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.ServerMapName = ServerMapName;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue = CallFunc_MakeLiteralSessionPropertyString_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_ConvertMapNames
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FileLoadString_Text                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_2                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_3                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)

class FString UBP_SophiaGameInstance_C::BPI_ConvertMapNames(const class FString& String, int32 Temp_int_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& CallFunc_FileLoadString_Text, bool CallFunc_FileLoadString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_FileLoadString_Text_1, bool CallFunc_FileLoadString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const class FString& CallFunc_FileLoadString_Text_2, bool CallFunc_FileLoadString_ReturnValue_2, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_FileLoadString_Text_3, bool CallFunc_FileLoadString_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_ConvertMapNames");

	Params::UBP_SophiaGameInstance_C_BPI_ConvertMapNames_Params Parms{};

	Parms.String = String;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_FileLoadString_Text = CallFunc_FileLoadString_Text;
	Parms.CallFunc_FileLoadString_ReturnValue = CallFunc_FileLoadString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_FileLoadString_Text_1 = CallFunc_FileLoadString_Text_1;
	Parms.CallFunc_FileLoadString_ReturnValue_1 = CallFunc_FileLoadString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_FileLoadString_Text_2 = CallFunc_FileLoadString_Text_2;
	Parms.CallFunc_FileLoadString_ReturnValue_2 = CallFunc_FileLoadString_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FileLoadString_Text_3 = CallFunc_FileLoadString_Text_3;
	Parms.CallFunc_FileLoadString_ReturnValue_3 = CallFunc_FileLoadString_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_ShortenMapName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FileLoadString_Text                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_2                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_3                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)

class FString UBP_SophiaGameInstance_C::BPI_ShortenMapName(const class FString& String, int32 Temp_int_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& CallFunc_FileLoadString_Text, bool CallFunc_FileLoadString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_FileLoadString_Text_1, bool CallFunc_FileLoadString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const class FString& CallFunc_FileLoadString_Text_2, bool CallFunc_FileLoadString_ReturnValue_2, const class FString& K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_FileLoadString_Text_3, bool CallFunc_FileLoadString_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_ShortenMapName");

	Params::UBP_SophiaGameInstance_C_BPI_ShortenMapName_Params Parms{};

	Parms.String = String;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_FileLoadString_Text = CallFunc_FileLoadString_Text;
	Parms.CallFunc_FileLoadString_ReturnValue = CallFunc_FileLoadString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_FileLoadString_Text_1 = CallFunc_FileLoadString_Text_1;
	Parms.CallFunc_FileLoadString_ReturnValue_1 = CallFunc_FileLoadString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_FileLoadString_Text_2 = CallFunc_FileLoadString_Text_2;
	Parms.CallFunc_FileLoadString_ReturnValue_2 = CallFunc_FileLoadString_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FileLoadString_Text_3 = CallFunc_FileLoadString_Text_3;
	Parms.CallFunc_FileLoadString_ReturnValue_3 = CallFunc_FileLoadString_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_LoadCharacterData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sex                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SkinIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Skin                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_LoadCharacterData(bool* Sex, int32* SkinIndex, class USkeletalMesh** Skin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_LoadCharacterData");

	Params::UBP_SophiaGameInstance_C_BPI_LoadCharacterData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Sex != nullptr)
		*Sex = Parms.Sex;

	if (SkinIndex != nullptr)
		*SkinIndex = Parms.SkinIndex;

	if (Skin != nullptr)
		*Skin = Parms.Skin;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_SaveCharacterData
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sex                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SkinIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Skin                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_SaveCharacterData(bool Sex, int32 SkinIndex, class USkeletalMesh* Skin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_SaveCharacterData");

	Params::UBP_SophiaGameInstance_C_BPI_SaveCharacterData_Params Parms{};

	Parms.Sex = Sex;
	Parms.SkinIndex = SkinIndex;
	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_GetCustomizationAsset
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class UCharacterCustomizationDataAsset* UBP_SophiaGameInstance_C::BPI_GetCustomizationAsset(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_GetCustomizationAsset");

	Params::UBP_SophiaGameInstance_C_BPI_GetCustomizationAsset_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_IsFTUE
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFTUE_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_SophiaGameInstance_C::BPI_IsFTUE(bool CallFunc_IsFTUE_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_IsFTUE");

	Params::UBP_SophiaGameInstance_C_BPI_IsFTUE_Params Parms{};

	Parms.CallFunc_IsFTUE_ReturnValue = CallFunc_IsFTUE_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.IsLogin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_SophiaGameInstance_C::IsLogin(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "IsLogin");

	Params::UBP_SophiaGameInstance_C_IsLogin_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Is Party Leader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPartyLeader                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLeader_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InParty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::Is_Party_Leader(bool* IsPartyLeader, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLeader_ReturnValue, bool CallFunc_InParty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Is Party Leader");

	Params::UBP_SophiaGameInstance_C_Is_Party_Leader_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLeader_ReturnValue = CallFunc_IsLeader_ReturnValue;
	Parms.CallFunc_InParty_ReturnValue = CallFunc_InParty_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPartyLeader != nullptr)
		*IsPartyLeader = Parms.IsPartyLeader;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.GetMinSlotsBasedOnParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPartySize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLeader_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_SophiaGameInstance_C::GetMinSlotsBasedOnParty(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPartySize_ReturnValue, bool CallFunc_IsLeader_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "GetMinSlotsBasedOnParty");

	Params::UBP_SophiaGameInstance_C_GetMinSlotsBasedOnParty_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartySize_ReturnValue = CallFunc_GetPartySize_ReturnValue;
	Parms.CallFunc_IsLeader_ReturnValue = CallFunc_IsLeader_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SortServerByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      LowstValue                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item                                          (None)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings                          (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyString_SearchResult                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionPropertyString_SettingValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStringLesserThen_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::SortServerByName(TArray<struct FBlueprintSessionResult>& Array, const class FString& LowstValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, bool CallFunc_Less_IntInt_ReturnValue, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyString_SearchResult, const class FString& CallFunc_GetSessionPropertyString_SettingValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsStringLesserThen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SortServerByName");

	Params::UBP_SophiaGameInstance_C_SortServerByName_Params Parms{};

	Parms.Array = Array;
	Parms.LowstValue = LowstValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetExtraSettings_ExtraSettings = CallFunc_GetExtraSettings_ExtraSettings;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSessionPropertyString_SearchResult = CallFunc_GetSessionPropertyString_SearchResult;
	Parms.CallFunc_GetSessionPropertyString_SettingValue = CallFunc_GetSessionPropertyString_SettingValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsStringLesserThen_ReturnValue = CallFunc_IsStringLesserThen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.StopAllFModEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::StopAllFModEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "StopAllFModEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_378EF5D14628DFED997EBC9154E6AEC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_378EF5D14628DFED997EBC9154E6AEC3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_378EF5D14628DFED997EBC9154E6AEC3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_378EF5D14628DFED997EBC9154E6AEC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_378EF5D14628DFED997EBC9154E6AEC3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_378EF5D14628DFED997EBC9154E6AEC3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_6B6C94FF407299EEA427C1A254D364B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_6B6C94FF407299EEA427C1A254D364B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_6B6C94FF407299EEA427C1A254D364B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_6B6C94FF407299EEA427C1A254D364B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_6B6C94FF407299EEA427C1A254D364B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_6B6C94FF407299EEA427C1A254D364B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_76BD2D28415EBFD8F11898A181E10107
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_76BD2D28415EBFD8F11898A181E10107()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_76BD2D28415EBFD8F11898A181E10107");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_76BD2D28415EBFD8F11898A181E10107
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_76BD2D28415EBFD8F11898A181E10107()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_76BD2D28415EBFD8F11898A181E10107");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_6D07241642F049E686756EB3353DD7ED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_6D07241642F049E686756EB3353DD7ED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_6D07241642F049E686756EB3353DD7ED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_6D07241642F049E686756EB3353DD7ED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_6D07241642F049E686756EB3353DD7ED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_6D07241642F049E686756EB3353DD7ED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_A678BF714E071430575CC49E2FC763C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_A678BF714E071430575CC49E2FC763C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_A678BF714E071430575CC49E2FC763C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_A678BF714E071430575CC49E2FC763C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_A678BF714E071430575CC49E2FC763C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_A678BF714E071430575CC49E2FC763C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_7366D8AC44C6A979DBD67AAA4CBE3680
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_7366D8AC44C6A979DBD67AAA4CBE3680()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_7366D8AC44C6A979DBD67AAA4CBE3680");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_7366D8AC44C6A979DBD67AAA4CBE3680
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_7366D8AC44C6A979DBD67AAA4CBE3680()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_7366D8AC44C6A979DBD67AAA4CBE3680");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_2FF7F2C44BA830F3D1870A93765A9AB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_2FF7F2C44BA830F3D1870A93765A9AB0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_2FF7F2C44BA830F3D1870A93765A9AB0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_2FF7F2C44BA830F3D1870A93765A9AB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_2FF7F2C44BA830F3D1870A93765A9AB0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_2FF7F2C44BA830F3D1870A93765A9AB0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_45749BD34E7C53E1EA4F96A8DA17F151
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_45749BD34E7C53E1EA4F96A8DA17F151()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_45749BD34E7C53E1EA4F96A8DA17F151");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_45749BD34E7C53E1EA4F96A8DA17F151
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_45749BD34E7C53E1EA4F96A8DA17F151()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_45749BD34E7C53E1EA4F96A8DA17F151");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_21B3624D4C89B0068B0D0FAEDAB7A736
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_21B3624D4C89B0068B0D0FAEDAB7A736()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_21B3624D4C89B0068B0D0FAEDAB7A736");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_21B3624D4C89B0068B0D0FAEDAB7A736
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_21B3624D4C89B0068B0D0FAEDAB7A736()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_21B3624D4C89B0068B0D0FAEDAB7A736");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_7FBD3DCB433EF0D559F66D8BF7A86C0A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SophiaGameInstance_C::OnFailure_7FBD3DCB433EF0D559F66D8BF7A86C0A(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_7FBD3DCB433EF0D559F66D8BF7A86C0A");

	Params::UBP_SophiaGameInstance_C_OnFailure_7FBD3DCB433EF0D559F66D8BF7A86C0A_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_7FBD3DCB433EF0D559F66D8BF7A86C0A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SophiaGameInstance_C::OnSuccess_7FBD3DCB433EF0D559F66D8BF7A86C0A(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_7FBD3DCB433EF0D559F66D8BF7A86C0A");

	Params::UBP_SophiaGameInstance_C_OnSuccess_7FBD3DCB433EF0D559F66D8BF7A86C0A_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_44346FF74639149112DAB792A7DF02B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_44346FF74639149112DAB792A7DF02B9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_44346FF74639149112DAB792A7DF02B9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_44346FF74639149112DAB792A7DF02B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_44346FF74639149112DAB792A7DF02B9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_44346FF74639149112DAB792A7DF02B9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_BA9BEB1E44E843C7EE51B3A9EC7B97B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_BA9BEB1E44E843C7EE51B3A9EC7B97B5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_BA9BEB1E44E843C7EE51B3A9EC7B97B5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_BA9BEB1E44E843C7EE51B3A9EC7B97B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_BA9BEB1E44E843C7EE51B3A9EC7B97B5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_BA9BEB1E44E843C7EE51B3A9EC7B97B5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_84F153A8401D650C2DF572A783C61C13
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SophiaGameInstance_C::OnFailure_84F153A8401D650C2DF572A783C61C13(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_84F153A8401D650C2DF572A783C61C13");

	Params::UBP_SophiaGameInstance_C_OnFailure_84F153A8401D650C2DF572A783C61C13_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_84F153A8401D650C2DF572A783C61C13
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SophiaGameInstance_C::OnSuccess_84F153A8401D650C2DF572A783C61C13(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_84F153A8401D650C2DF572A783C61C13");

	Params::UBP_SophiaGameInstance_C_OnSuccess_84F153A8401D650C2DF572A783C61C13_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_DBB720164BF89AD36371CB9CA8B82569
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_DBB720164BF89AD36371CB9CA8B82569()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_DBB720164BF89AD36371CB9CA8B82569");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_DBB720164BF89AD36371CB9CA8B82569
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_DBB720164BF89AD36371CB9CA8B82569()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_DBB720164BF89AD36371CB9CA8B82569");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_A0AC820440B57C732ADDE2803B30AF15
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_A0AC820440B57C732ADDE2803B30AF15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_A0AC820440B57C732ADDE2803B30AF15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_A0AC820440B57C732ADDE2803B30AF15
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_A0AC820440B57C732ADDE2803B30AF15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_A0AC820440B57C732ADDE2803B30AF15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnFailure_BB1A52C1480B21AF0BB1C2A0CD5599B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnFailure_BB1A52C1480B21AF0BB1C2A0CD5599B4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnFailure_BB1A52C1480B21AF0BB1C2A0CD5599B4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnSuccess_BB1A52C1480B21AF0BB1C2A0CD5599B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::OnSuccess_BB1A52C1480B21AF0BB1C2A0CD5599B4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnSuccess_BB1A52C1480B21AF0BB1C2A0CD5599B4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.GamepadIconsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::GamepadIconsChanged(const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "GamepadIconsChanged");

	Params::UBP_SophiaGameInstance_C_GamepadIconsChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Host Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Host_Session(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Host Session");

	Params::UBP_SophiaGameInstance_C_Host_Session_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.QuitHost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::QuitHost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "QuitHost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.HostDedicatedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Server_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Server_Map                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              PublicConnections                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::HostDedicatedServer(const class FString& Server_Name, const class FString& Server_Map, int32 PublicConnections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "HostDedicatedServer");

	Params::UBP_SophiaGameInstance_C_HostDedicatedServer_Params Parms{};

	Parms.Server_Name = Server_Name;
	Parms.Server_Map = Server_Map;
	Parms.PublicConnections = PublicConnections;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ShouldAcceptPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::ShouldAcceptPlayers(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ShouldAcceptPlayers");

	Params::UBP_SophiaGameInstance_C_ShouldAcceptPlayers_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ReceiveShutdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ServerHeartbeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::ServerHeartbeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ServerHeartbeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.DedicatedServerInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::DedicatedServerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "DedicatedServerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "HandleNetworkError");

	Params::UBP_SophiaGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.RestartServer
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::RestartServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "RestartServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.vFOVChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::VFOVChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "vFOVChanged");

	Params::UBP_SophiaGameInstance_C_VFOVChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.MasterVolChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::MasterVolChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "MasterVolChanged");

	Params::UBP_SophiaGameInstance_C_MasterVolChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.UpdateServerMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::UpdateServerMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "UpdateServerMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BGMVolumnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BGMVolumnChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BGMVolumnChanged");

	Params::UBP_SophiaGameInstance_C_BGMVolumnChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.MouseChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::MouseChange(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "MouseChange");

	Params::UBP_SophiaGameInstance_C_MouseChange_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ControllerChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::ControllerChange(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ControllerChange");

	Params::UBP_SophiaGameInstance_C_ControllerChange_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SSGIChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::SSGIChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SSGIChanged");

	Params::UBP_SophiaGameInstance_C_SSGIChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_PreMapLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BP_PreMapLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_PreMapLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_PostMapLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BP_PostMapLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_PostMapLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SendPartyMemberServerInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::SendPartyMemberServerInvite(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SendPartyMemberServerInvite");

	Params::UBP_SophiaGameInstance_C_SendPartyMemberServerInvite_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SFXVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::SFXVolumeChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SFXVolumeChanged");

	Params::UBP_SophiaGameInstance_C_SFXVolumeChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_OnKrakenLoginFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BP_OnKrakenLoginFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_OnKrakenLoginFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Set Foliage Cluster Culling Distances
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Set_Foliage_Cluster_Culling_Distances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Set Foliage Cluster Culling Distances");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.StartServerHeartBeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::StartServerHeartBeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "StartServerHeartBeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_FindGameLiftServer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BPI_FindGameLiftServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_FindGameLiftServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_TutorialWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_TutorialWidget(TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_TutorialWidget");

	Params::UBP_SophiaGameInstance_C_BPI_TutorialWidget_Params Parms{};

	Parms.WidgetClass = WidgetClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_TryJoinServerFromSaveData
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BPI_TryJoinServerFromSaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_TryJoinServerFromSaveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_DestroySession
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UWorld>       Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_DestroySession(TSoftObjectPtr<class UWorld>& Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_DestroySession");

	Params::UBP_SophiaGameInstance_C_BPI_DestroySession_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_OnServerInviteSent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BPI_OnServerInviteSent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_OnServerInviteSent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_RefreshServer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bPartyJoin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::BPI_RefreshServer(const class FString& ServerName, bool bPartyJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_RefreshServer");

	Params::UBP_SophiaGameInstance_C_BPI_RefreshServer_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.bPartyJoin = bPartyJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_JoinSession
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     RSession                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMainMenu*                   InMenu                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPartyJoin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_JoinSession(const struct FBlueprintSessionResult& RSession, class UMainMenu* InMenu, bool bPartyJoin, const class FString& MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_JoinSession");

	Params::UBP_SophiaGameInstance_C_BPI_JoinSession_Params Parms{};

	Parms.RSession = RSession;
	Parms.InMenu = InMenu;
	Parms.bPartyJoin = bPartyJoin;
	Parms.MapName = MapName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_StoreGameInstanceValuesAndSwapServer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              GainedXP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPartyJoin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::BPI_StoreGameInstanceValuesAndSwapServer(const class FString& ServerName, int32 GainedXP, bool bPartyJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_StoreGameInstanceValuesAndSwapServer");

	Params::UBP_SophiaGameInstance_C_BPI_StoreGameInstanceValuesAndSwapServer_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.GainedXP = GainedXP;
	Parms.bPartyJoin = bPartyJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_TryJoinServerFromMenu
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     RSession                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMainMenu*                   Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_TryJoinServerFromMenu(const struct FBlueprintSessionResult& RSession, class UMainMenu* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_TryJoinServerFromMenu");

	Params::UBP_SophiaGameInstance_C_BPI_TryJoinServerFromMenu_Params Parms{};

	Parms.RSession = RSession;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BPI_OnInvitedToJoinServer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BPI_OnInvitedToJoinServer(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BPI_OnInvitedToJoinServer");

	Params::UBP_SophiaGameInstance_C_BPI_OnInvitedToJoinServer_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Enable HZB on Test Builds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Enable_HZB_on_Test_Builds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Enable HZB on Test Builds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Shadow Setting Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Shadow_Setting_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Shadow Setting Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnShadowQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::OnShadowQualityChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnShadowQualityChanged");

	Params::UBP_SophiaGameInstance_C_OnShadowQualityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Volumetric Fog Setting Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Volumetric_Fog_Setting_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Volumetric Fog Setting Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnVolumetricFogQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::OnVolumetricFogQualityChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnVolumetricFogQualityChanged");

	Params::UBP_SophiaGameInstance_C_OnVolumetricFogQualityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Geometry Detail Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Geometry_Detail_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Geometry Detail Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SetGeometryDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::SetGeometryDetail(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SetGeometryDetail");

	Params::UBP_SophiaGameInstance_C_SetGeometryDetail_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.WrongVersion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::WrongVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "WrongVersion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Shader Quality Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Shader_Quality_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Shader Quality Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Shader Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Shader_Quality_Changed(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Shader Quality Changed");

	Params::UBP_SophiaGameInstance_C_Shader_Quality_Changed_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.MouseInvertChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::MouseInvertChange(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "MouseInvertChange");

	Params::UBP_SophiaGameInstance_C_MouseInvertChange_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Bloom Quality Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Bloom_Quality_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Bloom Quality Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BloomQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BloomQualityChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BloomQualityChanged");

	Params::UBP_SophiaGameInstance_C_BloomQualityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Upscaling Callbacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Upscaling_Callbacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Upscaling Callbacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ScalingModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::ScalingModeChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ScalingModeChanged");

	Params::UBP_SophiaGameInstance_C_ScalingModeChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Effects Quality Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Effects_Quality_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Effects Quality Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.EffectsQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::EffectsQualityChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "EffectsQualityChanged");

	Params::UBP_SophiaGameInstance_C_EffectsQualityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_GetSteamAvatar
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      SteamID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      KrakenId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::BP_GetSteamAvatar(const class FString& SteamID, const class FString& KrakenId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_GetSteamAvatar");

	Params::UBP_SophiaGameInstance_C_BP_GetSteamAvatar_Params Parms{};

	Parms.SteamID = SteamID;
	Parms.KrakenId = KrakenId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.SetLocalAvatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::SetLocalAvatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "SetLocalAvatar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add Reduce Motion Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_Reduce_Motion_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add Reduce Motion Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Reduce Motion Effects Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Reduce_Motion_Effects_Changed(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Reduce Motion Effects Changed");

	Params::UBP_SophiaGameInstance_C_Reduce_Motion_Effects_Changed_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add EnforceFOV Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_EnforceFOV_Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add EnforceFOV Tick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.EnforceFOVTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::EnforceFOVTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "EnforceFOVTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Correct All Scalability Group Conflicts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Correct_All_Scalability_Group_Conflicts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Correct All Scalability Group Conflicts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.DFAOQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::DFAOQualityChanged(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "DFAOQualityChanged");

	Params::UBP_SophiaGameInstance_C_DFAOQualityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Add DFAO Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::Add_DFAO_Callback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Add DFAO Callback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_DoVideoSettingsCorrection
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BP_DoVideoSettingsCorrection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_DoVideoSettingsCorrection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.BP_PlayFakeLoadingScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SophiaGameInstance_C::BP_PlayFakeLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "BP_PlayFakeLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.OnPingFailure_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingIP*                     PingOperation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Hostname                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::OnPingFailure_Event_0(class UPingIP* PingOperation, const class FString& Hostname)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "OnPingFailure_Event_0");

	Params::UBP_SophiaGameInstance_C_OnPingFailure_Event_0_Params Parms{};

	Parms.PingOperation = PingOperation;
	Parms.Hostname = Hostname;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.Connected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingIP*                     PingOperation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Hostname                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              TimeMS                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SophiaGameInstance_C::Connected(class UPingIP* PingOperation, const class FString& Hostname, int32 TimeMS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "Connected");

	Params::UBP_SophiaGameInstance_C_Connected_Params Parms{};

	Parms.PingOperation = PingOperation;
	Parms.Hostname = Hostname;
	Parms.TimeMS = TimeMS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaGameInstance.BP_SophiaGameInstance_C.ExecuteUbergraph_BP_SophiaGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionsSearchSetting>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_1                                     (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results                                       (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable_1                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UWBP_KrakenDisconnected_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISSocial*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISSocial*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKrakenID_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Loading_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewValue_17                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Value_1                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue            (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UCreateSessionCallbackProxyAdvanced*CallFunc_CreateAdvancedSession_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Server_Name                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Server_Map                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PublicConnections                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_BPI_CreateServerExtraSettings_ReturnValue               (ReferenceParm)
// class UCreateSessionCallbackProxyAdvanced*CallFunc_CreateAdvancedSession_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable_2                                           (ReferenceParm)
// TArray<struct FSessionPropertyKeyPair>CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray          (ReferenceParm)
// class UUpdateSessionCallbackProxyAdvanced*CallFunc_UpdateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// struct FSessionPropertyKeyPair     K2Node_SetFieldsInStruct_StructOut                               (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaController*           K2Node_DynamicCast_AsSophia_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaGameMode*             K2Node_DynamicCast_AsSophia_Game_Mode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_2                                     (ConstParm, ReferenceParm)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BPI_ConvertMapNames_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BPI_ShortenMapName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewValue_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_3                                     (ConstParm, ReferenceParm)
// float                              K2Node_CustomEvent_NewValue_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FileLoadString_Text                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_WrongVersion_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveLaunchCount_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveLaunchCount_C*          K2Node_DynamicCast_AsSave_Launch_Count                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class USaveLaunchCount_C*          CallFunc_CreateSaveGameObject_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewValue_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// struct FSessionPropertyKeyPair     CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSessionPropertyKey_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_41                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_42                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConquestGameMode*           K2Node_DynamicCast_AsConquest_Game_Mode                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMinSlotsBasedOnParty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFindSessionsCallbackProxyAdvanced*CallFunc_FindSessionsAdvanced_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_43                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item_2                                        (None)
// class FString                      CallFunc_GetSessionID_AsString_SessionID                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_44                          (ZeroConstructor, NoDestructor)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_45                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetCommandLine_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseCommandLine_OutTokens                              (ReferenceParm)
// TArray<class FString>              CallFunc_ParseCommandLine_OutSwitches                            (ReferenceParm)
// TMap<class FString, class FString> CallFunc_ParseCommandLine_OutParams                              (None)
// class ASophiaGameMode*             K2Node_DynamicCast_AsSophia_Game_Mode_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAverageFPS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLogin_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_46                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLogin_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaHUD*                  CallFunc_BP_GetFirstLocalPlayerHUD_hud                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_GameHUD_C*              K2Node_DynamicCast_AsWBP_Game_HUD                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaCharacterController_C*K2Node_DynamicCast_AsBP_Sophia_Character_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UUserWidget>     K2Node_Event_WidgetClass                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWorld>       K2Node_Event_Level                                               (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UTutorialWidget*             K2Node_DynamicCast_AsTutorial_Widget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_serverName_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPartyJoin_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBlueprintSessionResult     K2Node_Event_rSession_1                                          (None)
// class UMainMenu*                   K2Node_Event_InMenu                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPartyJoin_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_MapName                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings                          (ReferenceParm)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyBool_SearchResult                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionPropertyBool_SettingValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_serverName                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_gainedXP                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPartyJoin                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_BPI_ShortenMapName_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_Event_rSession                                            (None)
// class UMainMenu*                   K2Node_Event_Menu                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_ID                                                  (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Dedicated_C*   K2Node_DynamicCast_AsWBP_Main_Menu_Dedicated                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings_1                        (ReferenceParm)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyBool_SearchResult_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionPropertyBool_SettingValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTestOrShippingBuild_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_47                          (ZeroConstructor, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_FatalErrorPrompt_C*     CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBoolCVar_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIntCVar_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_48                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_49                          (ZeroConstructor, NoDestructor)
// TArray<class UWBP_Loading_C*>      CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_Loading_C*              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_SteamID                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_KrakenID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSteamFriendAvatarFromString_OutSteamID               (ZeroConstructor, HasGetValueTypeHash)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatarFromString_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSteamFriendAvatarFromString_OutKrakenId              (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatarFromString_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_50                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_51                          (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_52                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetAspectRatio_AspectRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAspectRatio_AspectRatio_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Horizontal_FOV_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings_2                        (ReferenceParm)
// class UPingIP*                     K2Node_CustomEvent_PingOperation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Hostname_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class UPingIP*                     K2Node_CustomEvent_PingOperation                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Hostname                                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TimeMS                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionsSearchSetting>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// class UFindSessionsCallbackProxyAdvanced*CallFunc_FindSessionsAdvanced_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SophiaGameInstance_C::ExecuteUbergraph_BP_SophiaGameInstance(int32 EntryPoint, TArray<struct FSessionsSearchSetting>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UWBP_KrakenDisconnected_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, int32 Temp_int_Variable_6, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGISSocial* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UGISSocial* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& CallFunc_GetKrakenID_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable_17, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, int32 Temp_int_Variable_18, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, class UWBP_Loading_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const class FString& K2Node_CustomEvent_NewValue_17, bool K2Node_SwitchString_CmpSuccess, const class FString& K2Node_CustomEvent_Value_1, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& K2Node_CustomEvent_Server_Name, const class FString& K2Node_CustomEvent_Server_Map, int32 K2Node_CustomEvent_PublicConnections, TArray<struct FSessionPropertyKeyPair>& CallFunc_BPI_CreateServerExtraSettings_ReturnValue, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_2, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_Value, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const struct FSessionPropertyKeyPair& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ASophiaController* K2Node_DynamicCast_AsSophia_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ASophiaGameMode* K2Node_DynamicCast_AsSophia_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_BPI_ConvertMapNames_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_BPI_ShortenMapName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsDedicatedServer_ReturnValue_1, float K2Node_CustomEvent_NewValue_16, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_3, float K2Node_CustomEvent_NewValue_15, const class FString& CallFunc_FileLoadString_Text, bool CallFunc_FileLoadString_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWBP_WrongVersion_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USaveLaunchCount_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveLaunchCount_C* K2Node_DynamicCast_AsSave_Launch_Count, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SaveGameToSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, class USaveLaunchCount_C* CallFunc_CreateSaveGameObject_ReturnValue_1, bool CallFunc_SaveGameToSlot_ReturnValue_1, float K2Node_CustomEvent_NewValue_14, float K2Node_CustomEvent_NewValue_13, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_CustomEvent_NewValue_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, const struct FSessionPropertyKeyPair& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, class FName CallFunc_GetSessionPropertyKey_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class AConquestGameMode* K2Node_DynamicCast_AsConquest_Game_Mode, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 K2Node_CustomEvent_NewValue_11, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_3, int32 CallFunc_GetMinSlotsBasedOnParty_ReturnValue, const class FString& K2Node_CustomEvent_ID, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, bool CallFunc_IsValid_ReturnValue_8, int32 Temp_int_Array_Index_Variable_3, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_2, const class FString& CallFunc_GetSessionID_AsString_SessionID, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_12, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, const class FString& CallFunc_GetCommandLine_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, TArray<class FString>& CallFunc_ParseCommandLine_OutTokens, TArray<class FString>& CallFunc_ParseCommandLine_OutSwitches, TMap<class FString, class FString> CallFunc_ParseCommandLine_OutParams, class ASophiaGameMode* K2Node_DynamicCast_AsSophia_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_GetAverageFPS_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_CustomEvent_NewValue_10, float CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_IsLogin_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLogin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class ASophiaHUD* CallFunc_BP_GetFirstLocalPlayerHUD_hud, bool CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_8, class UWBP_GameHUD_C* K2Node_DynamicCast_AsWBP_Game_HUD, bool K2Node_DynamicCast_bSuccess_9, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_1, bool K2Node_DynamicCast_bSuccess_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_14, class ABP_SophiaCharacterController_C* K2Node_DynamicCast_AsBP_Sophia_Character_Controller, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_12, TSubclassOf<class UUserWidget> K2Node_Event_WidgetClass, class UUserWidget* CallFunc_Create_ReturnValue_3, TSoftObjectPtr<class UWorld> K2Node_Event_Level, class UTutorialWidget* K2Node_DynamicCast_AsTutorial_Widget, bool K2Node_DynamicCast_bSuccess_12, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const class FString& K2Node_Event_serverName_1, bool K2Node_Event_bPartyJoin_2, const struct FBlueprintSessionResult& K2Node_Event_rSession_1, class UMainMenu* K2Node_Event_InMenu, bool K2Node_Event_bPartyJoin_1, const class FString& K2Node_Event_MapName, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult, bool CallFunc_GetSessionPropertyBool_SettingValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, const class FString& K2Node_Event_serverName, int32 K2Node_Event_gainedXP, bool K2Node_Event_bPartyJoin, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_BPI_ShortenMapName_ReturnValue_1, const struct FBlueprintSessionResult& K2Node_Event_rSession, class UMainMenu* K2Node_Event_Menu, const class FString& K2Node_Event_ID, class UWBP_MainMenu_Dedicated_C* K2Node_DynamicCast_AsWBP_Main_Menu_Dedicated, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_17, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings_1, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult_1, bool CallFunc_GetSessionPropertyBool_SettingValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsTestOrShippingBuild_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 K2Node_CustomEvent_NewValue_9, int32 K2Node_CustomEvent_NewValue_8, int32 CallFunc_GetIntCVar_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_CustomEvent_NewValue_7, bool K2Node_SwitchInteger_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_18, class UWBP_FatalErrorPrompt_C* CallFunc_Create_ReturnValue_4, int32 K2Node_CustomEvent_NewValue_6, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_NewValue_5, float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, int32 K2Node_CustomEvent_NewValue_4, int32 CallFunc_GetIntCVar_ReturnValue_1, int32 K2Node_CustomEvent_NewValue_3, int32 CallFunc_GetIntCVar_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_GetIntCVar_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_2, int32 K2Node_CustomEvent_NewValue_2, int32 CallFunc_GetIntCVar_ReturnValue_4, float K2Node_Select_Default_1, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_49, TArray<class UWBP_Loading_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWBP_Loading_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& K2Node_Event_SteamID, const class FString& K2Node_Event_KrakenID, const class FString& CallFunc_GetSteamFriendAvatarFromString_OutSteamID, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatarFromString_Result, const class FString& CallFunc_GetSteamFriendAvatarFromString_OutKrakenId, class UTexture2D* CallFunc_GetSteamFriendAvatarFromString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_50, bool CallFunc_IsValid_ReturnValue_19, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_51, float K2Node_CustomEvent_NewValue_1, float CallFunc_GetFloatCVar_ReturnValue_2, int32 Temp_int_Variable_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_52, float CallFunc_GetAspectRatio_AspectRatio, float CallFunc_GetAspectRatio_AspectRatio_1, float CallFunc_GetFloatCVar_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Get_Horizontal_FOV_ReturnValue, float CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue, int32 CallFunc_GetIntCVar_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_20, float K2Node_Select_Default_4, float K2Node_Select_Default_5, int32 K2Node_CustomEvent_NewValue, int32 CallFunc_GetIntCVar_ReturnValue_6, int32 CallFunc_GetIntCVar_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_3, int32 Temp_int_Array_Index_Variable_4, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings_2, class UPingIP* K2Node_CustomEvent_PingOperation_1, const class FString& K2Node_CustomEvent_Hostname_1, class UPingIP* K2Node_CustomEvent_PingOperation, const class FString& K2Node_CustomEvent_Hostname, int32 K2Node_CustomEvent_TimeMS, int32 Temp_int_Variable_20, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_7, TArray<struct FSessionsSearchSetting>& Temp_struct_Variable_3, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaGameInstance_C", "ExecuteUbergraph_BP_SophiaGameInstance");

	Params::UBP_SophiaGameInstance_C_ExecuteUbergraph_BP_SophiaGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Results_1 = K2Node_CustomEvent_Results_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Results = K2Node_CustomEvent_Results;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetKrakenID_ReturnValue = CallFunc_GetKrakenID_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.Temp_float_Variable_10 = Temp_float_Variable_10;
	Parms.Temp_float_Variable_11 = Temp_float_Variable_11;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue = CallFunc_BPC_GetAgeConsentConfirmation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_NewValue_17 = K2Node_CustomEvent_NewValue_17;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue = CallFunc_MakeLiteralSessionPropertyString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CreateAdvancedSession_ReturnValue = CallFunc_CreateAdvancedSession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Server_Name = K2Node_CustomEvent_Server_Name;
	Parms.K2Node_CustomEvent_Server_Map = K2Node_CustomEvent_Server_Map;
	Parms.K2Node_CustomEvent_PublicConnections = K2Node_CustomEvent_PublicConnections;
	Parms.CallFunc_BPI_CreateServerExtraSettings_ReturnValue = CallFunc_BPI_CreateServerExtraSettings_ReturnValue;
	Parms.CallFunc_CreateAdvancedSession_ReturnValue_1 = CallFunc_CreateAdvancedSession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray = CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray;
	Parms.CallFunc_UpdateSession_ReturnValue = CallFunc_UpdateSession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Controller = K2Node_DynamicCast_AsSophia_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Mode = K2Node_DynamicCast_AsSophia_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Results_2 = K2Node_CustomEvent_Results_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_BPI_ConvertMapNames_ReturnValue = CallFunc_BPI_ConvertMapNames_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BPI_ShortenMapName_ReturnValue = CallFunc_BPI_ShortenMapName_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue_2 = CallFunc_DestroySession_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_16 = K2Node_CustomEvent_NewValue_16;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Results_3 = K2Node_CustomEvent_Results_3;
	Parms.K2Node_CustomEvent_NewValue_15 = K2Node_CustomEvent_NewValue_15;
	Parms.CallFunc_FileLoadString_Text = CallFunc_FileLoadString_Text;
	Parms.CallFunc_FileLoadString_ReturnValue = CallFunc_FileLoadString_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSave_Launch_Count = K2Node_DynamicCast_AsSave_Launch_Count;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue_1 = CallFunc_CreateSaveGameObject_ReturnValue_1;
	Parms.CallFunc_SaveGameToSlot_ReturnValue_1 = CallFunc_SaveGameToSlot_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_14 = K2Node_CustomEvent_NewValue_14;
	Parms.K2Node_CustomEvent_NewValue_13 = K2Node_CustomEvent_NewValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_12 = K2Node_CustomEvent_NewValue_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_DestroySession_ReturnValue_3 = CallFunc_DestroySession_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetSessionPropertyKey_ReturnValue = CallFunc_GetSessionPropertyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.K2Node_CreateDelegate_OutputDelegate_41 = K2Node_CreateDelegate_OutputDelegate_41;
	Parms.K2Node_CreateDelegate_OutputDelegate_42 = K2Node_CreateDelegate_OutputDelegate_42;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsConquest_Game_Mode = K2Node_DynamicCast_AsConquest_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_DestroySession_ReturnValue_4 = CallFunc_DestroySession_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue_1 = CallFunc_GetConsoleVariableIntValue_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_11 = K2Node_CustomEvent_NewValue_11;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.CallFunc_GetMinSlotsBasedOnParty_ReturnValue = CallFunc_GetMinSlotsBasedOnParty_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_FindSessionsAdvanced_ReturnValue = CallFunc_FindSessionsAdvanced_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_43 = K2Node_CreateDelegate_OutputDelegate_43;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetSessionID_AsString_SessionID = CallFunc_GetSessionID_AsString_SessionID;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_44 = K2Node_CreateDelegate_OutputDelegate_44;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.CallFunc_DestroySession_ReturnValue_5 = CallFunc_DestroySession_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_12 = CallFunc_GetPlayerController_ReturnValue_12;
	Parms.CallFunc_DestroySession_ReturnValue_6 = CallFunc_DestroySession_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_45 = K2Node_CreateDelegate_OutputDelegate_45;
	Parms.CallFunc_GetCommandLine_ReturnValue = CallFunc_GetCommandLine_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.CallFunc_ParseCommandLine_OutTokens = CallFunc_ParseCommandLine_OutTokens;
	Parms.CallFunc_ParseCommandLine_OutSwitches = CallFunc_ParseCommandLine_OutSwitches;
	Parms.CallFunc_ParseCommandLine_OutParams = CallFunc_ParseCommandLine_OutParams;
	Parms.K2Node_DynamicCast_AsSophia_Game_Mode_1 = K2Node_DynamicCast_AsSophia_Game_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetAverageFPS_ReturnValue = CallFunc_GetAverageFPS_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_13 = CallFunc_GetPlayerController_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_NewValue_10 = K2Node_CustomEvent_NewValue_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_IsLogin_ReturnValue = CallFunc_IsLogin_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_46 = K2Node_CreateDelegate_OutputDelegate_46;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsLogin_ReturnValue_1 = CallFunc_IsLogin_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_hud = CallFunc_BP_GetFirstLocalPlayerHUD_hud;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue = CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD = K2Node_DynamicCast_AsBP_Sophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsWBP_Game_HUD = K2Node_DynamicCast_AsWBP_Game_HUD;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_4 = CallFunc_GetPlayerCharacter_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character_1 = K2Node_DynamicCast_AsFirst_Person_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_14 = CallFunc_GetPlayerController_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Character_Controller = K2Node_DynamicCast_AsBP_Sophia_Character_Controller;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_Event_WidgetClass = K2Node_Event_WidgetClass;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.K2Node_DynamicCast_AsTutorial_Widget = K2Node_DynamicCast_AsTutorial_Widget;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Event_serverName_1 = K2Node_Event_serverName_1;
	Parms.K2Node_Event_bPartyJoin_2 = K2Node_Event_bPartyJoin_2;
	Parms.K2Node_Event_rSession_1 = K2Node_Event_rSession_1;
	Parms.K2Node_Event_InMenu = K2Node_Event_InMenu;
	Parms.K2Node_Event_bPartyJoin_1 = K2Node_Event_bPartyJoin_1;
	Parms.K2Node_Event_MapName = K2Node_Event_MapName;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_JoinSession_ReturnValue_1 = CallFunc_JoinSession_ReturnValue_1;
	Parms.CallFunc_GetExtraSettings_ExtraSettings = CallFunc_GetExtraSettings_ExtraSettings;
	Parms.CallFunc_GetSessionPropertyBool_SearchResult = CallFunc_GetSessionPropertyBool_SearchResult;
	Parms.CallFunc_GetSessionPropertyBool_SettingValue = CallFunc_GetSessionPropertyBool_SettingValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_Event_serverName = K2Node_Event_serverName;
	Parms.K2Node_Event_gainedXP = K2Node_Event_gainedXP;
	Parms.K2Node_Event_bPartyJoin = K2Node_Event_bPartyJoin;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BPI_ShortenMapName_ReturnValue_1 = CallFunc_BPI_ShortenMapName_ReturnValue_1;
	Parms.K2Node_Event_rSession = K2Node_Event_rSession;
	Parms.K2Node_Event_Menu = K2Node_Event_Menu;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_DynamicCast_AsWBP_Main_Menu_Dedicated = K2Node_DynamicCast_AsWBP_Main_Menu_Dedicated;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_JoinSession_ReturnValue_2 = CallFunc_JoinSession_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_GetExtraSettings_ExtraSettings_1 = CallFunc_GetExtraSettings_ExtraSettings_1;
	Parms.CallFunc_GetSessionPropertyBool_SearchResult_1 = CallFunc_GetSessionPropertyBool_SearchResult_1;
	Parms.CallFunc_GetSessionPropertyBool_SettingValue_1 = CallFunc_GetSessionPropertyBool_SettingValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsTestOrShippingBuild_ReturnValue = CallFunc_IsTestOrShippingBuild_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_CustomEvent_NewValue_9 = K2Node_CustomEvent_NewValue_9;
	Parms.K2Node_CustomEvent_NewValue_8 = K2Node_CustomEvent_NewValue_8;
	Parms.CallFunc_GetIntCVar_ReturnValue = CallFunc_GetIntCVar_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NewValue_7 = K2Node_CustomEvent_NewValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_15 = CallFunc_GetPlayerController_ReturnValue_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_47 = K2Node_CreateDelegate_OutputDelegate_47;
	Parms.CallFunc_DestroySession_ReturnValue_7 = CallFunc_DestroySession_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.K2Node_CustomEvent_NewValue_6 = K2Node_CustomEvent_NewValue_6;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue_1 = CallFunc_GetBoolCVar_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_5 = K2Node_CustomEvent_NewValue_5;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue_1 = CallFunc_GetFloatCVar_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_CustomEvent_NewValue_4 = K2Node_CustomEvent_NewValue_4;
	Parms.CallFunc_GetIntCVar_ReturnValue_1 = CallFunc_GetIntCVar_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue_3 = K2Node_CustomEvent_NewValue_3;
	Parms.CallFunc_GetIntCVar_ReturnValue_2 = CallFunc_GetIntCVar_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetIntCVar_ReturnValue_3 = CallFunc_GetIntCVar_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_CustomEvent_NewValue_2 = K2Node_CustomEvent_NewValue_2;
	Parms.CallFunc_GetIntCVar_ReturnValue_4 = CallFunc_GetIntCVar_ReturnValue_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_48 = K2Node_CreateDelegate_OutputDelegate_48;
	Parms.K2Node_CreateDelegate_OutputDelegate_49 = K2Node_CreateDelegate_OutputDelegate_49;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_Event_SteamID = K2Node_Event_SteamID;
	Parms.K2Node_Event_KrakenID = K2Node_Event_KrakenID;
	Parms.CallFunc_GetSteamFriendAvatarFromString_OutSteamID = CallFunc_GetSteamFriendAvatarFromString_OutSteamID;
	Parms.CallFunc_GetSteamFriendAvatarFromString_Result = CallFunc_GetSteamFriendAvatarFromString_Result;
	Parms.CallFunc_GetSteamFriendAvatarFromString_OutKrakenId = CallFunc_GetSteamFriendAvatarFromString_OutKrakenId;
	Parms.CallFunc_GetSteamFriendAvatarFromString_ReturnValue = CallFunc_GetSteamFriendAvatarFromString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_50 = K2Node_CreateDelegate_OutputDelegate_50;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_51 = K2Node_CreateDelegate_OutputDelegate_51;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_2 = CallFunc_GetFloatCVar_ReturnValue_2;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_52 = K2Node_CreateDelegate_OutputDelegate_52;
	Parms.CallFunc_GetAspectRatio_AspectRatio = CallFunc_GetAspectRatio_AspectRatio;
	Parms.CallFunc_GetAspectRatio_AspectRatio_1 = CallFunc_GetAspectRatio_AspectRatio_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_3 = CallFunc_GetFloatCVar_ReturnValue_3;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_Horizontal_FOV_ReturnValue = CallFunc_Get_Horizontal_FOV_ReturnValue;
	Parms.CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue = CallFunc_Get_Horizontal_Zoom_FOV_ReturnValue;
	Parms.CallFunc_GetIntCVar_ReturnValue_5 = CallFunc_GetIntCVar_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_GetIntCVar_ReturnValue_6 = CallFunc_GetIntCVar_ReturnValue_6;
	Parms.CallFunc_GetIntCVar_ReturnValue_7 = CallFunc_GetIntCVar_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetExtraSettings_ExtraSettings_2 = CallFunc_GetExtraSettings_ExtraSettings_2;
	Parms.K2Node_CustomEvent_PingOperation_1 = K2Node_CustomEvent_PingOperation_1;
	Parms.K2Node_CustomEvent_Hostname_1 = K2Node_CustomEvent_Hostname_1;
	Parms.K2Node_CustomEvent_PingOperation = K2Node_CustomEvent_PingOperation;
	Parms.K2Node_CustomEvent_Hostname = K2Node_CustomEvent_Hostname;
	Parms.K2Node_CustomEvent_TimeMS = K2Node_CustomEvent_TimeMS;
	Parms.Temp_int_Variable_20 = Temp_int_Variable_20;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_FindSessionsAdvanced_ReturnValue_1 = CallFunc_FindSessionsAdvanced_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;

	UObject::ProcessEvent(Func, &Parms);

}

}


