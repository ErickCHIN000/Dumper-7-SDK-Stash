#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01_SkyLight.bc_LightingElement_01_SkyLight_C
// (None)

class UClass* Ubc_LightingElement_01_SkyLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_SkyLight_C");

	return Clss;
}


// bc_LightingElement_01_SkyLight_C bc_LightingElement_01_SkyLight.Default__bc_LightingElement_01_SkyLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_SkyLight_C* Ubc_LightingElement_01_SkyLight_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_SkyLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_SkyLight_C*>(Ubc_LightingElement_01_SkyLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01_SkyLight.bc_LightingElement_01_SkyLight_C.Backup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_LightingSetup_01_SkyLightK2Node_MakeStruct_st_LightingSetup_01_SkyLight                   (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Ubc_LightingElement_01_SkyLight_C::Backup(bool* Success, float CallFunc_GetTimeSeconds_ReturnValue, const struct FSt_LightingSetup_01_SkyLight& K2Node_MakeStruct_st_LightingSetup_01_SkyLight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkyLight_C", "Backup");

	Params::Ubc_LightingElement_01_SkyLight_C_Backup_Params Parms{};

	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.K2Node_MakeStruct_st_LightingSetup_01_SkyLight = K2Node_MakeStruct_st_LightingSetup_01_SkyLight;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_SkyLight.bc_LightingElement_01_SkyLight_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LightingSetup_01_SkyLightSetupNew                                                         (Edit, BlueprintVisible, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_LightingElement_01_SkyLight_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, const struct FSt_LightingSetup_01_SkyLight& SetupNew, bool CallFunc_Update_Success, float CallFunc_GetTimeSeconds_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_3, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkyLight_C", "Update");

	Params::Ubc_LightingElement_01_SkyLight_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.SetupNew = SetupNew;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_2 = CallFunc_Conv_ColorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_3 = CallFunc_Conv_ColorToLinearColor_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_SkyLight.bc_LightingElement_01_SkyLight_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_SkyLight_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkyLight_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_SkyLight_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


