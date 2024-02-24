#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// (Actor)

class UClass* ABP_Sky_Sphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Sky_Sphere_C");

	return Clss;
}


// BP_Sky_Sphere_C BP_Sky_Sphere.Default__BP_Sky_Sphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Sky_Sphere_C* ABP_Sky_Sphere_C::GetDefaultObj()
{
	static class ABP_Sky_Sphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Sky_Sphere_C*>(ABP_Sky_Sphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetSunBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::SetSunBrightness(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "SetSunBrightness");

	Params::ABP_Sky_Sphere_C_SetSunBrightness_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetCloudOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::SetCloudOpacity(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "SetCloudOpacity");

	Params::ABP_Sky_Sphere_C_SetCloudOpacity_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.GetTextureBirghtness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::GetTextureBirghtness(float* Value, float CallFunc_K2_GetScalarParameterValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "GetTextureBirghtness");

	Params::ABP_Sky_Sphere_C_GetTextureBirghtness_Params Parms{};

	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewBrightness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::ChangeBrightness(float NewBrightness, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "ChangeBrightness");

	Params::ABP_Sky_Sphere_C_ChangeBrightness_Params Parms{};

	Parms.NewBrightness = NewBrightness;
	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeOverallColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::ChangeOverallColor(const struct FLinearColor& NewColor, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "ChangeOverallColor");

	Params::ABP_Sky_Sphere_C_ChangeOverallColor_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::UpdateSunDirection(bool CallFunc_Less_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Abs_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "UpdateSunDirection");

	Params::ABP_Sky_Sphere_C_UpdateSunDirection_Params Parms{};

	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "UserConstructionScript");

	Params::ABP_Sky_Sphere_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.OverallColorChange__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Sky_Sphere_C::OverallColorChange__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "OverallColorChange__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.OverallColorChange__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Sky_Sphere_C::OverallColorChange__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "OverallColorChange__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.BrightnessChange__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Sky_Sphere_C::BrightnessChange__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "BrightnessChange__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.BrightnessChange__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Sky_Sphere_C::BrightnessChange__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "BrightnessChange__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeOverallColorTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CurrentColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::ChangeOverallColorTimeline(const struct FLinearColor& NewColor, const struct FLinearColor& CurrentColor, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "ChangeOverallColorTimeline");

	Params::ABP_Sky_Sphere_C_ChangeOverallColorTimeline_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.CurrentColor = CurrentColor;
	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeBrightnessTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewBrightness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentBrightness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::ChangeBrightnessTimeline(float NewBrightness, float CurrentBrightness, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "ChangeBrightnessTimeline");

	Params::ABP_Sky_Sphere_C_ChangeBrightnessTimeline_Params Parms{};

	Parms.NewBrightness = NewBrightness;
	Parms.CurrentBrightness = CurrentBrightness;
	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_NewColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_CurrentColor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InTime_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewBrightness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentBrightness                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sky_Sphere_C::ExecuteUbergraph_BP_Sky_Sphere(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_NewColor, const struct FLinearColor& K2Node_CustomEvent_CurrentColor, float K2Node_CustomEvent_InTime_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float K2Node_CustomEvent_NewBrightness, float K2Node_CustomEvent_CurrentBrightness, float K2Node_CustomEvent_InTime, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sky_Sphere_C", "ExecuteUbergraph_BP_Sky_Sphere");

	Params::ABP_Sky_Sphere_C_ExecuteUbergraph_BP_Sky_Sphere_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewColor = K2Node_CustomEvent_NewColor;
	Parms.K2Node_CustomEvent_CurrentColor = K2Node_CustomEvent_CurrentColor;
	Parms.K2Node_CustomEvent_InTime_1 = K2Node_CustomEvent_InTime_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_CustomEvent_NewBrightness = K2Node_CustomEvent_NewBrightness;
	Parms.K2Node_CustomEvent_CurrentBrightness = K2Node_CustomEvent_CurrentBrightness;
	Parms.K2Node_CustomEvent_InTime = K2Node_CustomEvent_InTime;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


