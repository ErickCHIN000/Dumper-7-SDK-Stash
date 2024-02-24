#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Damageable.BPI_Damageable_C
// (None)

class UClass* IBPI_Damageable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Damageable_C");

	return Clss;
}


// BPI_Damageable_C BPI_Damageable.Default__BPI_Damageable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Damageable_C* IBPI_Damageable_C::GetDefaultObj()
{
	static class IBPI_Damageable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Damageable_C*>(IBPI_Damageable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Damageable.BPI_Damageable_C.GetRedirectedTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRedirect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      RedirectedTarget                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Damageable_C::GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Damageable_C", "GetRedirectedTarget");

	Params::IBPI_Damageable_C_GetRedirectedTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRedirect != nullptr)
		*ShouldRedirect = Parms.ShouldRedirect;

	if (RedirectedTarget != nullptr)
		*RedirectedTarget = Parms.RedirectedTarget;

}


// Function BPI_Damageable.BPI_Damageable_C.GetDamageEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageEffect                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Damageable_C::GetDamageEffect(class UClass** DamageEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Damageable_C", "GetDamageEffect");

	Params::IBPI_Damageable_C_GetDamageEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageEffect != nullptr)
		*DamageEffect = Parms.DamageEffect;

}

}


