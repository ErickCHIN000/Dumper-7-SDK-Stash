#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C
// (None)

class UClass* IBPI_SpellActor_Hydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SpellActor_Hydra_C");

	return Clss;
}


// BPI_SpellActor_Hydra_C BPI_SpellActor_Hydra.Default__BPI_SpellActor_Hydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SpellActor_Hydra_C* IBPI_SpellActor_Hydra_C::GetDefaultObj()
{
	static class IBPI_SpellActor_Hydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SpellActor_Hydra_C*>(IBPI_SpellActor_Hydra_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C.HydraSpellActor_Audio_SpawnAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SpellActor_Hydra_C::HydraSpellActor_Audio_SpawnAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpellActor_Hydra_C", "HydraSpellActor_Audio_SpawnAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C.HydraSpellActor_FinishDespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SpellActor_Hydra_C::HydraSpellActor_FinishDespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpellActor_Hydra_C", "HydraSpellActor_FinishDespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C.HydraSpellActor_BeginAttacking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SpellActor_Hydra_C::HydraSpellActor_BeginAttacking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpellActor_Hydra_C", "HydraSpellActor_BeginAttacking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C.HydraSpellActor_FireProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SpellActor_Hydra_C::HydraSpellActor_FireProjectile(enum class EHydraHeads Head)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpellActor_Hydra_C", "HydraSpellActor_FireProjectile");

	Params::IBPI_SpellActor_Hydra_C_HydraSpellActor_FireProjectile_Params Parms{};

	Parms.Head = Head;

	UObject::ProcessEvent(Func, &Parms);

}

}


