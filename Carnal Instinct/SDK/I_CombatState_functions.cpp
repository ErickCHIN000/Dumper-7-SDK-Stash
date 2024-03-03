#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_CombatState.I_CombatState_C
// (None)

class UClass* II_CombatState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_CombatState_C");

	return Clss;
}


// I_CombatState_C I_CombatState.Default__I_CombatState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_CombatState_C* II_CombatState_C::GetDefaultObj()
{
	static class II_CombatState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_CombatState_C*>(II_CombatState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_CombatState.I_CombatState_C.ToggleIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dummy                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_CombatState_C::ToggleIsInCombat(bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CombatState_C", "ToggleIsInCombat");

	Params::II_CombatState_C_ToggleIsInCombat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;

}


// Function I_CombatState.I_CombatState_C.SetIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Dummy                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_CombatState_C::SetIsInCombat(bool Value, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CombatState_C", "SetIsInCombat");

	Params::II_CombatState_C_SetIsInCombat_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;

}


// Function I_CombatState.I_CombatState_C.GetCombatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CombatType            Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CombatState_C::GetCombatType(enum class E_CombatType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CombatState_C", "GetCombatType");

	Params::II_CombatState_C_GetCombatType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function I_CombatState.I_CombatState_C.GetIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_CombatState_C::GetIsInCombat(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CombatState_C", "GetIsInCombat");

	Params::II_CombatState_C_GetIsInCombat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}

}


