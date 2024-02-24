#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01_AtmosphericFog.bc_LightingElement_01_AtmosphericFog_C
// (None)

class UClass* Ubc_LightingElement_01_AtmosphericFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_AtmosphericFog_C");

	return Clss;
}


// bc_LightingElement_01_AtmosphericFog_C bc_LightingElement_01_AtmosphericFog.Default__bc_LightingElement_01_AtmosphericFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_AtmosphericFog_C* Ubc_LightingElement_01_AtmosphericFog_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_AtmosphericFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_AtmosphericFog_C*>(Ubc_LightingElement_01_AtmosphericFog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01_AtmosphericFog.bc_LightingElement_01_AtmosphericFog_C.Backup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LightingSetup_01_AtmosphericFogK2Node_MakeStruct_st_LightingSetup_01_AtmosphericFog             (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Ubc_LightingElement_01_AtmosphericFog_C::Backup(bool* Success, const struct FSt_LightingSetup_01_AtmosphericFog& K2Node_MakeStruct_st_LightingSetup_01_AtmosphericFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_AtmosphericFog_C", "Backup");

	Params::Ubc_LightingElement_01_AtmosphericFog_C_Backup_Params Parms{};

	Parms.K2Node_MakeStruct_st_LightingSetup_01_AtmosphericFog = K2Node_MakeStruct_st_LightingSetup_01_AtmosphericFog;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_AtmosphericFog.bc_LightingElement_01_AtmosphericFog_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void Ubc_LightingElement_01_AtmosphericFog_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_AtmosphericFog_C", "Update");

	Params::Ubc_LightingElement_01_AtmosphericFog_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
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

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_AtmosphericFog.bc_LightingElement_01_AtmosphericFog_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_AtmosphericFog_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_AtmosphericFog_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_AtmosphericFog_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


