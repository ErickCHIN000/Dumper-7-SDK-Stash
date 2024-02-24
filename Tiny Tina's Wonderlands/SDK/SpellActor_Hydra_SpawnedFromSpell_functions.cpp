#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C
// (Actor)

class UClass* ASpellActor_Hydra_SpawnedFromSpell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Hydra_SpawnedFromSpell_C");

	return Clss;
}


// SpellActor_Hydra_SpawnedFromSpell_C SpellActor_Hydra_SpawnedFromSpell.Default__SpellActor_Hydra_SpawnedFromSpell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Hydra_SpawnedFromSpell_C* ASpellActor_Hydra_SpawnedFromSpell_C::GetDefaultObj()
{
	static class ASpellActor_Hydra_SpawnedFromSpell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Hydra_SpawnedFromSpell_C*>(ASpellActor_Hydra_SpawnedFromSpell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C.SetHydraFromSpellDuration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DurationToUse                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ASpellActor_Hydra_SpawnedFromSpell_C::SetHydraFromSpellDuration(float DurationToUse, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_SpawnedFromSpell_C", "SetHydraFromSpellDuration");

	Params::ASpellActor_Hydra_SpawnedFromSpell_C_SetHydraFromSpellDuration_Params Parms{};

	Parms.DurationToUse = DurationToUse;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_SpawnedFromSpell_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_SpawnedFromSpell_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C.CacheHydraDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_SpawnedFromSpell_C::CacheHydraDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_SpawnedFromSpell_C", "CacheHydraDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C.SetHydraLifetime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_SpawnedFromSpell_C::SetHydraLifetime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_SpawnedFromSpell_C", "SetHydraLifetime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C.ExecuteUbergraph_SpellActor_Hydra_SpawnedFromSpell
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Hydra_SpawnedFromSpell_C::ExecuteUbergraph_SpellActor_Hydra_SpawnedFromSpell(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_SpawnedFromSpell_C", "ExecuteUbergraph_SpellActor_Hydra_SpawnedFromSpell");

	Params::ASpellActor_Hydra_SpawnedFromSpell_C_ExecuteUbergraph_SpellActor_Hydra_SpawnedFromSpell_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


