#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C
// (None)

class UClass* Ubc_LightingElement_01_PostProcess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_LightingElement_01_PostProcess_C");

	return Clss;
}


// bc_LightingElement_01_PostProcess_C bc_LightingElement_01_PostProcess.Default__bc_LightingElement_01_PostProcess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_LightingElement_01_PostProcess_C* Ubc_LightingElement_01_PostProcess_C::GetDefaultObj()
{
	static class Ubc_LightingElement_01_PostProcess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_LightingElement_01_PostProcess_C*>(Ubc_LightingElement_01_PostProcess_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.OverwriteCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_LightingSetup_01_C*      Setup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_PostProcess_C::OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_PostProcess_C", "OverwriteCheck");

	Params::Ubc_LightingElement_01_PostProcess_C_OverwriteCheck_Params Parms{};

	Parms.Setup = Setup;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.Backup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Backup_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_PostProcess_C::Backup(bool* Success, bool CallFunc_Backup_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_PostProcess_C", "Backup");

	Params::Ubc_LightingElement_01_PostProcess_C_Backup_Params Parms{};

	Parms.CallFunc_Backup_Success = CallFunc_Backup_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipAnyTimeCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Update_Success                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_LightingElement_01_PostProcess_C::Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, bool CallFunc_IsInEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_LightingElement_01_PostProcess_C", "Update");

	Params::Ubc_LightingElement_01_PostProcess_C_Update_Params Parms{};

	Parms.ChangeProgress = ChangeProgress;
	Parms.SkipAnyTimeCheck = SkipAnyTimeCheck;
	Parms.CallFunc_Update_Success = CallFunc_Update_Success;
	Parms.CallFunc_IsInEditor_ReturnValue = CallFunc_IsInEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


