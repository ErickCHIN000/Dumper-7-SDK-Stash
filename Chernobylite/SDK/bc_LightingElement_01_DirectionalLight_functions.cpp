#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01_DirectionalLight.bc_LightingElement_01_DirectionalLight_C
// (None)

class UClass* Ubc_LightingElement_01_DirectionalLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_DirectionalLight_C");

	return Clss;
}


// bc_LightingElement_01_DirectionalLight_C bc_LightingElement_01_DirectionalLight.Default__bc_LightingElement_01_DirectionalLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_DirectionalLight_C* Ubc_LightingElement_01_DirectionalLight_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_DirectionalLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_DirectionalLight_C*>(Ubc_LightingElement_01_DirectionalLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01_DirectionalLight.bc_LightingElement_01_DirectionalLight_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_DirectionalLight_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_DirectionalLight_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_DirectionalLight_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function bc_LightingElement_01_DirectionalLight.bc_LightingElement_01_DirectionalLight_C.Backup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_LightingSetup_01_DirectionalLightK2Node_MakeStruct_st_LightingSetup_01_DirectionalLight           (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Ubc_LightingElement_01_DirectionalLight_C::Backup(bool* Success, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FSt_LightingSetup_01_DirectionalLight& K2Node_MakeStruct_st_LightingSetup_01_DirectionalLight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_DirectionalLight_C", "Backup");

	Params::Ubc_LightingElement_01_DirectionalLight_C_Backup_Params Parms{};

	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.K2Node_MakeStruct_st_LightingSetup_01_DirectionalLight = K2Node_MakeStruct_st_LightingSetup_01_DirectionalLight;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_DirectionalLight.bc_LightingElement_01_DirectionalLight_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LightingSetup_01_DirectionalLightSetupNew                                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_LightingElement_01_DirectionalLight_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, const struct FSt_LightingSetup_01_DirectionalLight& SetupNew, bool CallFunc_Update_Success, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_DirectionalLight_C", "Update");

	Params::Ubc_LightingElement_01_DirectionalLight_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.SetupNew = SetupNew;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


