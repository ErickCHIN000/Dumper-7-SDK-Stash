#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_AI_InstantHeal.Ability_AI_InstantHeal_C
// (Actor)

class UClass* AAbility_AI_InstantHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_AI_InstantHeal_C");

	return Clss;
}


// Ability_AI_InstantHeal_C Ability_AI_InstantHeal.Default__Ability_AI_InstantHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_AI_InstantHeal_C* AAbility_AI_InstantHeal_C::GetDefaultObj()
{
	static class AAbility_AI_InstantHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_AI_InstantHeal_C*>(AAbility_AI_InstantHeal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.Heal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     L_AdjustedLocation                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AI_InstantHeal_C::Heal(const struct FVector& L_AdjustedLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "Heal");

	Params::AAbility_AI_InstantHeal_C_Heal_Params Parms{};

	Parms.L_AdjustedLocation = L_AdjustedLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.SpawnParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_InstantHeal_C::SpawnParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "SpawnParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_InstantHeal_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_InstantHeal_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_InstantHeal_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_InstantHeal.Ability_AI_InstantHeal_C.ExecuteUbergraph_Ability_AI_InstantHeal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AI_InstantHeal_C::ExecuteUbergraph_Ability_AI_InstantHeal(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_InstantHeal_C", "ExecuteUbergraph_Ability_AI_InstantHeal");

	Params::AAbility_AI_InstantHeal_C_ExecuteUbergraph_Ability_AI_InstantHeal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


