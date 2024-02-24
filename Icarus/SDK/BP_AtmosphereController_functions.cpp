#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AtmosphereController.BP_AtmosphereController_C
// (Actor)

class UClass* ABP_AtmosphereController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AtmosphereController_C");

	return Clss;
}


// BP_AtmosphereController_C BP_AtmosphereController.Default__BP_AtmosphereController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AtmosphereController_C* ABP_AtmosphereController_C::GetDefaultObj()
{
	static class ABP_AtmosphereController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AtmosphereController_C*>(ABP_AtmosphereController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AtmosphereController.BP_AtmosphereController_C.CheckShadowQualitySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::CheckShadowQualitySetting(class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "CheckShadowQualitySetting");

	Params::ABP_AtmosphereController_C_CheckShadowQualitySetting_Params Parms{};

	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetFogTintPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetFogTintPerBiome(struct FLinearColor* Out, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_5, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_5, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_6, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetFogTintPerBiome");

	Params::ABP_AtmosphereController_C_GetFogTintPerBiome_Params Parms{};

	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_3 = CallFunc_GetLinearColorValue_ReturnValue_3;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_4 = CallFunc_GetLinearColorValue_ReturnValue_4;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_5 = CallFunc_GetLinearColorValue_ReturnValue_5;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_6 = CallFunc_GetLinearColorValue_ReturnValue_6;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_4 = CallFunc_Multiply_LinearColorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_5 = CallFunc_Multiply_LinearColorFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_6 = CallFunc_Multiply_LinearColorFloat_ReturnValue_6;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_1 = CallFunc_Add_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_2 = CallFunc_Add_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_3 = CallFunc_Add_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_4 = CallFunc_Add_LinearColorLinearColor_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetBloomSettingsPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorValue_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_AtmosphereController_C::GetBloomSettingsPerBiome(const struct FVector& CallFunc_GetVectorValue_ReturnValue, const struct FVector& CallFunc_GetVectorValue_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetVectorValue_ReturnValue_2, const struct FVector& CallFunc_GetVectorValue_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_GetVectorValue_ReturnValue_4, const struct FVector& CallFunc_GetVectorValue_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_GetVectorValue_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetBloomSettingsPerBiome");

	Params::ABP_AtmosphereController_C_GetBloomSettingsPerBiome_Params Parms{};

	Parms.CallFunc_GetVectorValue_ReturnValue = CallFunc_GetVectorValue_ReturnValue;
	Parms.CallFunc_GetVectorValue_ReturnValue_1 = CallFunc_GetVectorValue_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetVectorValue_ReturnValue_2 = CallFunc_GetVectorValue_ReturnValue_2;
	Parms.CallFunc_GetVectorValue_ReturnValue_3 = CallFunc_GetVectorValue_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_GetVectorValue_ReturnValue_4 = CallFunc_GetVectorValue_ReturnValue_4;
	Parms.CallFunc_GetVectorValue_ReturnValue_5 = CallFunc_GetVectorValue_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_GetVectorValue_ReturnValue_6 = CallFunc_GetVectorValue_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetAtmosSunColorPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetAtmosSunColorPerBiome(struct FLinearColor* Out, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_5, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_5, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetAtmosSunColorPerBiome");

	Params::ABP_AtmosphereController_C_GetAtmosSunColorPerBiome_Params Parms{};

	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_3 = CallFunc_GetLinearColorValue_ReturnValue_3;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_4 = CallFunc_GetLinearColorValue_ReturnValue_4;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_5 = CallFunc_GetLinearColorValue_ReturnValue_5;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_6 = CallFunc_GetLinearColorValue_ReturnValue_6;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_4 = CallFunc_Multiply_LinearColorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_5 = CallFunc_Multiply_LinearColorFloat_ReturnValue_5;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_1 = CallFunc_Add_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_2 = CallFunc_Add_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_3 = CallFunc_Add_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_4 = CallFunc_Add_LinearColorLinearColor_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetMoonBrightnessPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetMoonBrightnessPerBiome(float* Out, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetMoonBrightnessPerBiome");

	Params::ABP_AtmosphereController_C_GetMoonBrightnessPerBiome_Params Parms{};

	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetSunBrightnessPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              OutBrightness                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetSunBrightnessPerBiome(float* OutBrightness, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetSunBrightnessPerBiome");

	Params::ABP_AtmosphereController_C_GetSunBrightnessPerBiome_Params Parms{};

	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBrightness != nullptr)
		*OutBrightness = Parms.OutBrightness;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetSunColorPerBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetSunColorPerBiome(struct FLinearColor* OutColor, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_5, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_5, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetSunColorPerBiome");

	Params::ABP_AtmosphereController_C_GetSunColorPerBiome_Params Parms{};

	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_1 = CallFunc_GetLinearColorValue_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_2 = CallFunc_GetLinearColorValue_ReturnValue_2;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_3 = CallFunc_GetLinearColorValue_ReturnValue_3;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_4 = CallFunc_GetLinearColorValue_ReturnValue_4;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_5 = CallFunc_GetLinearColorValue_ReturnValue_5;
	Parms.CallFunc_GetLinearColorValue_ReturnValue_6 = CallFunc_GetLinearColorValue_ReturnValue_6;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_2 = CallFunc_Multiply_LinearColorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_3 = CallFunc_Multiply_LinearColorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_4 = CallFunc_Multiply_LinearColorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_5 = CallFunc_Multiply_LinearColorFloat_ReturnValue_5;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_1 = CallFunc_Add_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_2 = CallFunc_Add_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_3 = CallFunc_Add_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue_4 = CallFunc_Add_LinearColorLinearColor_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateBloomSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetBloomSettingsPerBiome_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::UpdateBloomSettings(const struct FVector& CallFunc_GetBloomSettingsPerBiome_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdateBloomSettings");

	Params::ABP_AtmosphereController_C_UpdateBloomSettings_Params Parms{};

	Parms.CallFunc_GetBloomSettingsPerBiome_ReturnValue = CallFunc_GetBloomSettingsPerBiome_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetAtmosphereType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FAtmospheresEnum            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAtmospheresEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)

struct FAtmospheresEnum ABP_AtmosphereController_C::GetAtmosphereType(const struct FBiomesEnum& Biome, const struct FBiomesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAtmospheresEnum& CallFunc_RowHandleToStruct_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetAtmosphereType");

	Params::ABP_AtmosphereController_C_GetAtmosphereType_Params Parms{};

	Parms.Biome = Biome;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetCurrentTimeRealTime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeRealtime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeTotal_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AtmosphereController_C::GetCurrentTimeRealTime(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTimeRealtime_ReturnValue, float CallFunc_GetCurrentTimeTotal_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetCurrentTimeRealTime");

	Params::ABP_AtmosphereController_C_GetCurrentTimeRealTime_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTimeRealtime_ReturnValue = CallFunc_GetTimeRealtime_ReturnValue;
	Parms.CallFunc_GetCurrentTimeTotal_ReturnValue = CallFunc_GetCurrentTimeTotal_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetCurrentTimeNormalized
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeTotal_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeNormalized_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AtmosphereController_C::GetCurrentTimeNormalized(float CallFunc_GetCurrentTimeTotal_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_GetTimeNormalized_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetCurrentTimeNormalized");

	Params::ABP_AtmosphereController_C_GetCurrentTimeNormalized_Params Parms{};

	Parms.CallFunc_GetCurrentTimeTotal_ReturnValue = CallFunc_GetCurrentTimeTotal_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetTimeNormalized_ReturnValue = CallFunc_GetTimeNormalized_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetCurrentTimeTotal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeTotal_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float ABP_AtmosphereController_C::GetCurrentTimeTotal(float CallFunc_Multiply_IntFloat_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimeTotal_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetCurrentTimeTotal");

	Params::ABP_AtmosphereController_C_GetCurrentTimeTotal_Params Parms{};

	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimeTotal_ReturnValue = CallFunc_GetTimeTotal_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.FogTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::FogTimeOfDay(const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "FogTimeOfDay");

	Params::ABP_AtmosphereController_C_FogTimeOfDay_Params Parms{};

	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.RemoveCaveVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWT_CaveVolume_C*            Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::RemoveCaveVolume(class AWT_CaveVolume_C* Volume, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "RemoveCaveVolume");

	Params::ABP_AtmosphereController_C_RemoveCaveVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.AddCaveVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWT_CaveVolume_C*            Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::AddCaveVolume(class AWT_CaveVolume_C* Volume, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "AddCaveVolume");

	Params::ABP_AtmosphereController_C_AddCaveVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.WeatherVisualUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::WeatherVisualUpdated(bool CallFunc_NotEqual_EnumEnum_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "WeatherVisualUpdated");

	Params::ABP_AtmosphereController_C_WeatherVisualUpdated_Params Parms{};

	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.LinearBiomeTransition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 PlayerNewBiome                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              CurrentValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::LinearBiomeTransition(const struct FBiomesEnum& PlayerNewBiome, float CurrentValue, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "LinearBiomeTransition");

	Params::ABP_AtmosphereController_C_LinearBiomeTransition_Params Parms{};

	Parms.PlayerNewBiome = PlayerNewBiome;
	Parms.CurrentValue = CurrentValue;
	Parms.CallFunc_GetAtmosphereType_ReturnValue = CallFunc_GetAtmosphereType_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.TransitionWeather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 FromBiome                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FBiomesEnum                 ToBiome                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherVisualData          FromVisuals                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FWeatherVisualData          ToVisuals                                                        (Edit, BlueprintVisible, NoDestructor)
// float                              Alpha                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_12                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_13                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_14                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherVisualData          K2Node_MakeStruct_WeatherVisualData                              (NoDestructor)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherVisualData          CallFunc_GetVisualWeather_ReturnValue                            (NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherVisualData          CallFunc_GetVisualWeather_ReturnValue_1                          (NoDestructor)

void ABP_AtmosphereController_C::TransitionWeather(const struct FBiomesEnum& FromBiome, const struct FBiomesEnum& ToBiome, float Amount, const struct FWeatherVisualData& FromVisuals, const struct FWeatherVisualData& ToVisuals, float Alpha, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10, float CallFunc_Lerp_ReturnValue_11, float CallFunc_Lerp_ReturnValue_12, float CallFunc_Lerp_ReturnValue_13, float CallFunc_Lerp_ReturnValue_14, const struct FWeatherVisualData& K2Node_MakeStruct_WeatherVisualData, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, const struct FWeatherVisualData& CallFunc_GetVisualWeather_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FWeatherVisualData& CallFunc_GetVisualWeather_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "TransitionWeather");

	Params::ABP_AtmosphereController_C_TransitionWeather_Params Parms{};

	Parms.FromBiome = FromBiome;
	Parms.ToBiome = ToBiome;
	Parms.Amount = Amount;
	Parms.FromVisuals = FromVisuals;
	Parms.ToVisuals = ToVisuals;
	Parms.Alpha = Alpha;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;
	Parms.CallFunc_Lerp_ReturnValue_12 = CallFunc_Lerp_ReturnValue_12;
	Parms.CallFunc_Lerp_ReturnValue_13 = CallFunc_Lerp_ReturnValue_13;
	Parms.CallFunc_Lerp_ReturnValue_14 = CallFunc_Lerp_ReturnValue_14;
	Parms.K2Node_MakeStruct_WeatherVisualData = K2Node_MakeStruct_WeatherVisualData;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.CallFunc_GetVisualWeather_ReturnValue = CallFunc_GetVisualWeather_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_GetVisualWeather_ReturnValue_1 = CallFunc_GetVisualWeather_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetDistFogScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetDistFogScale(struct FVector* Scale, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetDistFogScale");

	Params::ABP_AtmosphereController_C_GetDistFogScale_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetCloudCoverage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Coverage                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CoverageNoClamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetCloudCoverage(float* Coverage, float* CoverageNoClamp, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMax_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetCloudCoverage");

	Params::ABP_AtmosphereController_C_GetCloudCoverage_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Coverage != nullptr)
		*Coverage = Parms.Coverage;

	if (CoverageNoClamp != nullptr)
		*CoverageNoClamp = Parms.CoverageNoClamp;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateCloudCoverage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CloudCoverage                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameModeSurvival*     K2Node_DynamicCast_AsIcarus_Game_Mode_Survival                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCloudCoverage_Coverage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_CoverageNoClamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::UpdateCloudCoverage(float CloudCoverage, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, float CallFunc_Lerp_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCloudCoverage_Coverage, float CallFunc_GetCloudCoverage_CoverageNoClamp, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdateCloudCoverage");

	Params::ABP_AtmosphereController_C_UpdateCloudCoverage_Params Parms{};

	Parms.CloudCoverage = CloudCoverage;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Survival = K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCloudCoverage_Coverage = CallFunc_GetCloudCoverage_Coverage;
	Parms.CallFunc_GetCloudCoverage_CoverageNoClamp = CallFunc_GetCloudCoverage_CoverageNoClamp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.MoonSetRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetMoonBrightnessPerBiome_Out                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetAtmosSunColorPerBiome_Out                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_Coverage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_CoverageNoClamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AtmosphereController_C::MoonSetRotation(float CallFunc_GetMoonBrightnessPerBiome_Out, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetAtmosSunColorPerBiome_Out, float CallFunc_GetCloudCoverage_Coverage, float CallFunc_GetCloudCoverage_CoverageNoClamp, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "MoonSetRotation");

	Params::ABP_AtmosphereController_C_MoonSetRotation_Params Parms{};

	Parms.CallFunc_GetMoonBrightnessPerBiome_Out = CallFunc_GetMoonBrightnessPerBiome_Out;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAtmosSunColorPerBiome_Out = CallFunc_GetAtmosSunColorPerBiome_Out;
	Parms.CallFunc_GetCloudCoverage_Coverage = CallFunc_GetCloudCoverage_Coverage;
	Parms.CallFunc_GetCloudCoverage_CoverageNoClamp = CallFunc_GetCloudCoverage_CoverageNoClamp;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateBiomeMPCs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::UpdateBiomeMPCs(float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdateBiomeMPCs");

	Params::ABP_AtmosphereController_C_UpdateBiomeMPCs_Params Parms{};

	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateWeatherMPCs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::UpdateWeatherMPCs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdateWeatherMPCs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SkylightSetProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_Coverage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_CoverageNoClamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::SkylightSetProperties(float CallFunc_Lerp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue_6, float CallFunc_GetFloatValue_ReturnValue_7, float K2Node_MathExpression_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_8, float CallFunc_Lerp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_9, float CallFunc_GetFloatValue_ReturnValue_10, float CallFunc_GetFloatValue_ReturnValue_11, float CallFunc_GetFloatValue_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_13, float CallFunc_GetCloudCoverage_Coverage, float CallFunc_GetCloudCoverage_CoverageNoClamp, float K2Node_MathExpression_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SkylightSetProperties");

	Params::ABP_AtmosphereController_C_SkylightSetProperties_Params Parms{};

	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue_6 = CallFunc_GetFloatValue_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_7 = CallFunc_GetFloatValue_ReturnValue_7;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_8 = CallFunc_GetFloatValue_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_9 = CallFunc_GetFloatValue_ReturnValue_9;
	Parms.CallFunc_GetFloatValue_ReturnValue_10 = CallFunc_GetFloatValue_ReturnValue_10;
	Parms.CallFunc_GetFloatValue_ReturnValue_11 = CallFunc_GetFloatValue_ReturnValue_11;
	Parms.CallFunc_GetFloatValue_ReturnValue_12 = CallFunc_GetFloatValue_ReturnValue_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_13 = CallFunc_GetFloatValue_ReturnValue_13;
	Parms.CallFunc_GetCloudCoverage_Coverage = CallFunc_GetCloudCoverage_Coverage;
	Parms.CallFunc_GetCloudCoverage_CoverageNoClamp = CallFunc_GetCloudCoverage_CoverageNoClamp;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.FogSetProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FogExtDefault                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ResolvedFogColour                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetFogTintPerBiome_Out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_Coverage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_CoverageNoClamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFogDensity_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFogExtinction_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::FogSetProperties(float FogExtDefault, const struct FLinearColor& ResolvedFogColour, const struct FLinearColor& CallFunc_GetFogTintPerBiome_Out, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_GetCloudCoverage_Coverage, float CallFunc_GetCloudCoverage_CoverageNoClamp, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFogDensity_ReturnValue, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue_1, float CallFunc_GetFogExtinction_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "FogSetProperties");

	Params::ABP_AtmosphereController_C_FogSetProperties_Params Parms{};

	Parms.FogExtDefault = FogExtDefault;
	Parms.ResolvedFogColour = ResolvedFogColour;
	Parms.CallFunc_GetFogTintPerBiome_Out = CallFunc_GetFogTintPerBiome_Out;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetCloudCoverage_Coverage = CallFunc_GetCloudCoverage_Coverage;
	Parms.CallFunc_GetCloudCoverage_CoverageNoClamp = CallFunc_GetCloudCoverage_CoverageNoClamp;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFogDensity_ReturnValue = CallFunc_GetFogDensity_ReturnValue;
	Parms.CallFunc_GetWeatherManager_ReturnValue_1 = CallFunc_GetWeatherManager_ReturnValue_1;
	Parms.CallFunc_GetFogExtinction_ReturnValue = CallFunc_GetFogExtinction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SunSetProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetSunColorPerBiome_OutColor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSunBrightnessPerBiome_OutBrightness                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_Coverage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCloudCoverage_CoverageNoClamp                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::SunSetProperties(float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_GetSunColorPerBiome_OutColor, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetSunBrightnessPerBiome_OutBrightness, float CallFunc_GetFloatValue_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetCloudCoverage_Coverage, float CallFunc_GetCloudCoverage_CoverageNoClamp, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SunSetProperties");

	Params::ABP_AtmosphereController_C_SunSetProperties_Params Parms{};

	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetSunColorPerBiome_OutColor = CallFunc_GetSunColorPerBiome_OutColor;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetSunBrightnessPerBiome_OutBrightness = CallFunc_GetSunBrightnessPerBiome_OutBrightness;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCloudCoverage_Coverage = CallFunc_GetCloudCoverage_Coverage;
	Parms.CallFunc_GetCloudCoverage_CoverageNoClamp = CallFunc_GetCloudCoverage_CoverageNoClamp;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SunSetRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentTimeNormalized_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AtmosphereController_C::SunSetRotation(float CallFunc_GetCurrentTimeNormalized_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SunSetRotation");

	Params::ABP_AtmosphereController_C_SunSetRotation_Params Parms{};

	Parms.CallFunc_GetCurrentTimeNormalized_ReturnValue = CallFunc_GetCurrentTimeNormalized_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_4 = CallFunc_MakeRotator_ReturnValue_4;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetBiomeInfluence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue                           (HasGetValueTypeHash)
// int32                              CallFunc_StructToInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AtmosphereController_C::GetBiomeInfluence(const struct FBiomesEnum& Biome, int32 Temp_int_Variable, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue, int32 CallFunc_StructToInt_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetBiomeInfluence");

	Params::ABP_AtmosphereController_C_GetBiomeInfluence_Params Parms{};

	Parms.Biome = Biome;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAtmosphereType_ReturnValue = CallFunc_GetAtmosphereType_ReturnValue;
	Parms.CallFunc_StructToInt_ReturnValue = CallFunc_StructToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.Transition Biome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 FromBiome                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FBiomesEnum                 ToBiome                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue                           (HasGetValueTypeHash)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue_1                         (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue_2                         (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAtmospheresEnum            CallFunc_GetAtmosphereType_ReturnValue_3                         (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::Transition_Biome(const struct FBiomesEnum& FromBiome, const struct FBiomesEnum& ToBiome, float Amount, float Temp_wildcard_Variable, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue_1, bool CallFunc_NotEqual_EnumEnum_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue_2, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FAtmospheresEnum& CallFunc_GetAtmosphereType_ReturnValue_3, bool K2Node_SwitchRowEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "Transition Biome");

	Params::ABP_AtmosphereController_C_Transition_Biome_Params Parms{};

	Parms.FromBiome = FromBiome;
	Parms.ToBiome = ToBiome;
	Parms.Amount = Amount;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetAtmosphereType_ReturnValue = CallFunc_GetAtmosphereType_ReturnValue;
	Parms.CallFunc_GetAtmosphereType_ReturnValue_1 = CallFunc_GetAtmosphereType_ReturnValue_1;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAtmosphereType_ReturnValue_2 = CallFunc_GetAtmosphereType_ReturnValue_2;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_GetAtmosphereType_ReturnValue_3 = CallFunc_GetAtmosphereType_ReturnValue_3;
	Parms.K2Node_SwitchRowEnum_CmpSuccess_1 = K2Node_SwitchRowEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.CycleBiome
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::CycleBiome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "CycleBiome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.ForceSetBiome
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesEnum                 Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AtmosphereController_C::ForceSetBiome(const struct FBiomesEnum& Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "ForceSetBiome");

	Params::ABP_AtmosphereController_C_ForceSetBiome_Params Parms{};

	Parms.Biome = Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.Fog Track Player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AtmosphereController_C::Fog_Track_Player(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "Fog Track Player");

	Params::ABP_AtmosphereController_C_Fog_Track_Player_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdatePostProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetBiomeInfo_CF                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBiomeInfo_LC                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBiomeInfo_DC                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBiomeInfo_AC                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBiomeInfo_WL                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBiomeInfo_GL                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::UpdatePostProcessing(float CallFunc_GetBiomeInfo_CF, float CallFunc_GetBiomeInfo_LC, float CallFunc_GetBiomeInfo_DC, float CallFunc_GetBiomeInfo_AC, float CallFunc_GetBiomeInfo_WL, float CallFunc_GetBiomeInfo_GL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdatePostProcessing");

	Params::ABP_AtmosphereController_C_UpdatePostProcessing_Params Parms{};

	Parms.CallFunc_GetBiomeInfo_CF = CallFunc_GetBiomeInfo_CF;
	Parms.CallFunc_GetBiomeInfo_LC = CallFunc_GetBiomeInfo_LC;
	Parms.CallFunc_GetBiomeInfo_DC = CallFunc_GetBiomeInfo_DC;
	Parms.CallFunc_GetBiomeInfo_AC = CallFunc_GetBiomeInfo_AC;
	Parms.CallFunc_GetBiomeInfo_WL = CallFunc_GetBiomeInfo_WL;
	Parms.CallFunc_GetBiomeInfo_GL = CallFunc_GetBiomeInfo_GL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetBiomeInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              CF                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LC                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DC                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AC                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WL                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GL                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetBiomeInfo(float* CF, float* LC, float* DC, float* AC, float* WL, float* GL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetBiomeInfo");

	Params::ABP_AtmosphereController_C_GetBiomeInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CF != nullptr)
		*CF = Parms.CF;

	if (LC != nullptr)
		*LC = Parms.LC;

	if (DC != nullptr)
		*DC = Parms.DC;

	if (AC != nullptr)
		*AC = Parms.AC;

	if (WL != nullptr)
		*WL = Parms.WL;

	if (GL != nullptr)
		*GL = Parms.GL;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateWind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetChildComponent_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UWindDirectionalSourceComponent*K2Node_DynamicCast_AsWind_Directional_Source_Component           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetWindDirection_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetChildComponent_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWindDirectionalSourceComponent*K2Node_DynamicCast_AsWind_Directional_Source_Component_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::UpdateWind(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_GetChildComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UWindDirectionalSourceComponent* K2Node_DynamicCast_AsWind_Directional_Source_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetWindDirection_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class USceneComponent* CallFunc_GetChildComponent_ReturnValue_1, class UWindDirectionalSourceComponent* K2Node_DynamicCast_AsWind_Directional_Source_Component_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UpdateWind");

	Params::ABP_AtmosphereController_C_UpdateWind_Params Parms{};

	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildComponent_ReturnValue = CallFunc_GetChildComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.K2Node_DynamicCast_AsWind_Directional_Source_Component = K2Node_DynamicCast_AsWind_Directional_Source_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWindDirection_ReturnValue = CallFunc_GetWindDirection_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetChildComponent_ReturnValue_1 = CallFunc_GetChildComponent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWind_Directional_Source_Component_1 = K2Node_DynamicCast_AsWind_Directional_Source_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SetTerrainDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::SetTerrainDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SetTerrainDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.EditorReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::EditorReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "EditorReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.Update Atmosphere Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentTimeRealTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeTotal_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::Update_Atmosphere_Settings(float CallFunc_GetCurrentTimeRealTime_ReturnValue, float CallFunc_GetCurrentTimeTotal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "Update Atmosphere Settings");

	Params::ABP_AtmosphereController_C_Update_Atmosphere_Settings_Params Parms{};

	Parms.CallFunc_GetCurrentTimeRealTime_ReturnValue = CallFunc_GetCurrentTimeRealTime_ReturnValue;
	Parms.CallFunc_GetCurrentTimeTotal_ReturnValue = CallFunc_GetCurrentTimeTotal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.GetCurrentTimeOfDay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Total                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Normalized                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Realtime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeRealTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeNormalized_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeTotal_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::GetCurrentTimeOfDay(float* Total, float* Normalized, float* Realtime, float CallFunc_GetCurrentTimeRealTime_ReturnValue, float CallFunc_GetCurrentTimeNormalized_ReturnValue, float CallFunc_GetCurrentTimeTotal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "GetCurrentTimeOfDay");

	Params::ABP_AtmosphereController_C_GetCurrentTimeOfDay_Params Parms{};

	Parms.CallFunc_GetCurrentTimeRealTime_ReturnValue = CallFunc_GetCurrentTimeRealTime_ReturnValue;
	Parms.CallFunc_GetCurrentTimeNormalized_ReturnValue = CallFunc_GetCurrentTimeNormalized_ReturnValue;
	Parms.CallFunc_GetCurrentTimeTotal_ReturnValue = CallFunc_GetCurrentTimeTotal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Total != nullptr)
		*Total = Parms.Total;

	if (Normalized != nullptr)
		*Normalized = Parms.Normalized;

	if (Realtime != nullptr)
		*Realtime = Parms.Realtime;

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AtmosphereController_C::UserConstructionScript(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "UserConstructionScript");

	Params::ABP_AtmosphereController_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.CheckBiome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::CheckBiome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "CheckBiome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "ReceiveTick");

	Params::ABP_AtmosphereController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SlowTickUpdates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AtmosphereController_C::SlowTickUpdates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SlowTickUpdates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.ExecuteUbergraph_BP_AtmosphereController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeatherManagerComponent*    CallFunc_GetWeatherManager_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusWorldSettings_C*   K2Node_DynamicCast_AsBP_Icarus_World_Settings                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::ExecuteUbergraph_BP_AtmosphereController(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWeatherManagerComponent* CallFunc_GetWeatherManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_EnumEnum_ReturnValue_1, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class ABP_IcarusWorldSettings_C* K2Node_DynamicCast_AsBP_Icarus_World_Settings, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "ExecuteUbergraph_BP_AtmosphereController");

	Params::ABP_AtmosphereController_C_ExecuteUbergraph_BP_AtmosphereController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetWeatherManager_ReturnValue = CallFunc_GetWeatherManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue_1 = CallFunc_NotEqual_EnumEnum_ReturnValue_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_World_Settings = K2Node_DynamicCast_AsBP_Icarus_World_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue_2 = CallFunc_NotEqual_EnumEnum_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SunLightColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CaveCover                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AtmosphereController_C::SunLightColor__DelegateSignature(const struct FLinearColor& Color, float Intensity, float CaveCover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SunLightColor__DelegateSignature");

	Params::ABP_AtmosphereController_C_SunLightColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;
	Parms.Intensity = Intensity;
	Parms.CaveCover = CaveCover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AtmosphereController.BP_AtmosphereController_C.SunLightDirection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    SunDirection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AtmosphereController_C::SunLightDirection__DelegateSignature(const struct FRotator& SunDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereController_C", "SunLightDirection__DelegateSignature");

	Params::ABP_AtmosphereController_C_SunLightDirection__DelegateSignature_Params Parms{};

	Parms.SunDirection = SunDirection;

	UObject::ProcessEvent(Func, &Parms);

}

}


