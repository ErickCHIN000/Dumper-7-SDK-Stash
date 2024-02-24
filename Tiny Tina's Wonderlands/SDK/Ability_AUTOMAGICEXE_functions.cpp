#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C
// (None)

class UClass* UAbility_AUTOMAGICEXE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_AUTOMAGICEXE_C");

	return Clss;
}


// Ability_AUTOMAGICEXE_C Ability_AUTOMAGICEXE.Default__Ability_AUTOMAGICEXE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_AUTOMAGICEXE_C* UAbility_AUTOMAGICEXE_C::GetDefaultObj()
{
	static class UAbility_AUTOMAGICEXE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_AUTOMAGICEXE_C*>(UAbility_AUTOMAGICEXE_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C.RemoveMissileTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_AUTOMAGICEXE_C::RemoveMissileTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AUTOMAGICEXE_C", "RemoveMissileTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C.SetMagicMissileTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAbility_AUTOMAGICEXE_C::SetMagicMissileTarget(class AActor* NewTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AUTOMAGICEXE_C", "SetMagicMissileTarget");

	Params::UAbility_AUTOMAGICEXE_C_SetMagicMissileTarget_Params Parms{};

	Parms.NewTarget = NewTarget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C.GetMagicMissileTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_AUTOMAGICEXE_C::GetMagicMissileTarget(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AUTOMAGICEXE_C", "GetMagicMissileTarget");

	Params::UAbility_AUTOMAGICEXE_C_GetMagicMissileTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


