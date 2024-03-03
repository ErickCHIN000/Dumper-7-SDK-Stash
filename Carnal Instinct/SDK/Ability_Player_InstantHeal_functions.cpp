#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_InstantHeal.Ability_Player_InstantHeal_C
// (Actor)

class UClass* AAbility_Player_InstantHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_InstantHeal_C");

	return Clss;
}


// Ability_Player_InstantHeal_C Ability_Player_InstantHeal.Default__Ability_Player_InstantHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Player_InstantHeal_C* AAbility_Player_InstantHeal_C::GetDefaultObj()
{
	static class AAbility_Player_InstantHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Player_InstantHeal_C*>(AAbility_Player_InstantHeal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.SpawnParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::SpawnParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "SpawnParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.Heal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::Heal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "Heal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_InstantHeal_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_InstantHeal.Ability_Player_InstantHeal_C.ExecuteUbergraph_Ability_Player_InstantHeal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtendedStatComponent_C*    CallFunc_GetExtendedStatComponent_Comp                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_InstantHeal_C::ExecuteUbergraph_Ability_Player_InstantHeal(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAbilityMontage_Duration, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, bool CallFunc_StartAbility_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_InstantHeal_C", "ExecuteUbergraph_Ability_Player_InstantHeal");

	Params::AAbility_Player_InstantHeal_C_ExecuteUbergraph_Ability_Player_InstantHeal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetExtendedStatComponent_Comp = CallFunc_GetExtendedStatComponent_Comp;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


