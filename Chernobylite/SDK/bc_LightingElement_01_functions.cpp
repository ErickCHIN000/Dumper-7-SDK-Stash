#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01.bc_LightingElement_01_C
// (None)

class UClass* Ubc_LightingElement_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_C");

	return Clss;
}


// bc_LightingElement_01_C bc_LightingElement_01.Default__bc_LightingElement_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_C* Ubc_LightingElement_01_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_C*>(Ubc_LightingElement_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01.bc_LightingElement_01_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function bc_LightingElement_01.bc_LightingElement_01_C.Backup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_C::Backup(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_C", "Backup");

	Params::Ubc_LightingElement_01_C_Backup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01.bc_LightingElement_01_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_C", "Update");

	Params::Ubc_LightingElement_01_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


