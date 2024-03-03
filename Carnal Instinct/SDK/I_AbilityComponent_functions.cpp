#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_AbilityComponent.I_AbilityComponent_C
// (None)

class UClass* II_AbilityComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_AbilityComponent_C");

	return Clss;
}


// I_AbilityComponent_C I_AbilityComponent.Default__I_AbilityComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_AbilityComponent_C* II_AbilityComponent_C::GetDefaultObj()
{
	static class II_AbilityComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_AbilityComponent_C*>(II_AbilityComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_AbilityComponent.I_AbilityComponent_C.GetCastingSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_AbilityComponent_C::GetCastingSpeed(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_AbilityComponent_C", "GetCastingSpeed");

	Params::II_AbilityComponent_C_GetCastingSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function I_AbilityComponent.I_AbilityComponent_C.GetMagicDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_AbilityComponent_C::GetMagicDamage(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_AbilityComponent_C", "GetMagicDamage");

	Params::II_AbilityComponent_C_GetMagicDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function I_AbilityComponent.I_AbilityComponent_C.CanCastAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_AbilityComponent_C::CanCastAbility(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_AbilityComponent_C", "CanCastAbility");

	Params::II_AbilityComponent_C_CanCastAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


