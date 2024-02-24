#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01_SkySphere.bc_LightingElement_01_SkySphere_C
// (None)

class UClass* Ubc_LightingElement_01_SkySphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_SkySphere_C");

	return Clss;
}


// bc_LightingElement_01_SkySphere_C bc_LightingElement_01_SkySphere.Default__bc_LightingElement_01_SkySphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_SkySphere_C* Ubc_LightingElement_01_SkySphere_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_SkySphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_SkySphere_C*>(Ubc_LightingElement_01_SkySphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01_SkySphere.bc_LightingElement_01_SkySphere_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_SkySphere_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkySphere_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_SkySphere_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function bc_LightingElement_01_SkySphere.bc_LightingElement_01_SkySphere_C.Backup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LightingSetup_01_SkySphereK2Node_MakeStruct_st_LightingSetup_01_SkySphere                  (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Ubc_LightingElement_01_SkySphere_C::Backup(bool* Success, const struct FSt_LightingSetup_01_SkySphere& K2Node_MakeStruct_st_LightingSetup_01_SkySphere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkySphere_C", "Backup");

	Params::Ubc_LightingElement_01_SkySphere_C_Backup_Params Parms{};

	Parms.K2Node_MakeStruct_st_LightingSetup_01_SkySphere = K2Node_MakeStruct_st_LightingSetup_01_SkySphere;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_SkySphere.bc_LightingElement_01_SkySphere_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_LightingElement_01_SkySphere_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10, float CallFunc_Lerp_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_SkySphere_C", "Update");

	Params::Ubc_LightingElement_01_SkySphere_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_LinearColorLerp_ReturnValue_3 = CallFunc_LinearColorLerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_10 = CallFunc_Lerp_ReturnValue_10;
	Parms.CallFunc_Lerp_ReturnValue_11 = CallFunc_Lerp_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


