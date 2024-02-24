#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ApplyEffects.BPI_ApplyEffects_C
// (None)

class UClass* IBPI_ApplyEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ApplyEffects_C");

	return Clss;
}


// BPI_ApplyEffects_C BPI_ApplyEffects.Default__BPI_ApplyEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ApplyEffects_C* IBPI_ApplyEffects_C::GetDefaultObj()
{
	static class IBPI_ApplyEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ApplyEffects_C*>(IBPI_ApplyEffects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ApplyEffects.BPI_ApplyEffects_C.ApplyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EffectType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ApplyEffects_C::ApplyEffect(double Duration, int32 EffectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ApplyEffects_C", "ApplyEffect");

	Params::IBPI_ApplyEffects_C_ApplyEffect_Params Parms{};

	Parms.Duration = Duration;
	Parms.EffectType = EffectType;

	UObject::ProcessEvent(Func, &Parms);

}

}


