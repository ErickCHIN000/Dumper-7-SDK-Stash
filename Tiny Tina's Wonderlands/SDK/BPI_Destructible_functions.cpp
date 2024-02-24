#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Destructible.BPI_Destructible_C
// (None)

class UClass* IBPI_Destructible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Destructible_C");

	return Clss;
}


// BPI_Destructible_C BPI_Destructible.Default__BPI_Destructible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Destructible_C* IBPI_Destructible_C::GetDefaultObj()
{
	static class IBPI_Destructible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Destructible_C*>(IBPI_Destructible_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Destructible.BPI_Destructible_C.BPI_SetFracturable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fracturable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Destructible_C::BPI_SetFracturable(bool Fracturable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Destructible_C", "BPI_SetFracturable");

	Params::IBPI_Destructible_C_BPI_SetFracturable_Params Parms{};

	Parms.Fracturable = Fracturable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Destructible.BPI_Destructible_C.BPI_SkipToDestroyedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Destructible_C::BPI_SkipToDestroyedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Destructible_C", "BPI_SkipToDestroyedState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Destructible.BPI_Destructible_C.BPI_ScriptedTotalDestruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageRadius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImpulseStrength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Destructible_C::BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Destructible_C", "BPI_ScriptedTotalDestruction");

	Params::IBPI_Destructible_C_BPI_ScriptedTotalDestruction_Params Parms{};

	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;

	UObject::ProcessEvent(Func, &Parms);

}

}


