#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_AI_CursedShield.Ability_AI_CursedShield_C
// (Actor)

class UClass* AAbility_AI_CursedShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_AI_CursedShield_C");

	return Clss;
}


// Ability_AI_CursedShield_C Ability_AI_CursedShield.Default__Ability_AI_CursedShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_AI_CursedShield_C* AAbility_AI_CursedShield_C::GetDefaultObj()
{
	static class AAbility_AI_CursedShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_AI_CursedShield_C*>(AAbility_AI_CursedShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_AI_CursedShield.Ability_AI_CursedShield_C.SpawnTrap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_CursedShield_C::SpawnTrap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_CursedShield_C", "SpawnTrap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_CursedShield.Ability_AI_CursedShield_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_CursedShield_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_CursedShield_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_CursedShield.Ability_AI_CursedShield_C.PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_CursedShield_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_CursedShield_C", "PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_CursedShield.Ability_AI_CursedShield_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_CursedShield_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_CursedShield_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_CursedShield.Ability_AI_CursedShield_C.ExecuteUbergraph_Ability_AI_CursedShield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAE_DamageSphere_CursedShield_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSurfaceTargetTransform_Result                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectLocation_Location                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AI_CursedShield_C::ExecuteUbergraph_Ability_AI_CursedShield(int32 EntryPoint, float CallFunc_GetDamage_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AAE_DamageSphere_CursedShield_C* CallFunc_FinishSpawningActor_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result, const struct FTransform& CallFunc_GetSurfaceTargetTransform_Result, const struct FVector& CallFunc_GetEffectLocation_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_CursedShield_C", "ExecuteUbergraph_Ability_AI_CursedShield");

	Params::AAbility_AI_CursedShield_C_ExecuteUbergraph_Ability_AI_CursedShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDamage_ReturnValue = CallFunc_GetDamage_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_GetSurfaceTargetTransform_Result = CallFunc_GetSurfaceTargetTransform_Result;
	Parms.CallFunc_GetEffectLocation_Location = CallFunc_GetEffectLocation_Location;

	UObject::ProcessEvent(Func, &Parms);

}

}


