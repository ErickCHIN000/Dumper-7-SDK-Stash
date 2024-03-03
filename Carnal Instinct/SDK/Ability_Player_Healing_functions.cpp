#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_Healing.Ability_Player_Healing_C
// (Actor)

class UClass* AAbility_Player_Healing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_Healing_C");

	return Clss;
}


// Ability_Player_Healing_C Ability_Player_Healing.Default__Ability_Player_Healing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Player_Healing_C* AAbility_Player_Healing_C::GetDefaultObj()
{
	static class AAbility_Player_Healing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Player_Healing_C*>(AAbility_Player_Healing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Player_Healing.Ability_Player_Healing_C.AttemptToCast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAbility_Player_Healing_C::AttemptToCast(bool* Result, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "AttemptToCast");

	Params::AAbility_Player_Healing_C_AttemptToCast_Params Parms{};

	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.AttempToCastEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::AttempToCastEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "AttempToCastEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.ClearAttemptToCastTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::ClearAttemptToCastTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "ClearAttemptToCastTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.SpawnParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::SpawnParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "SpawnParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.DeactivateParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::DeactivateParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "DeactivateParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_Healing_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "ReceiveTick");

	Params::AAbility_Player_Healing_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.Heal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::Heal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "Heal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.Ended
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AbilityEndResult      Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_Healing_C::Ended(enum class E_AbilityEndResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "Ended");

	Params::AAbility_Player_Healing_C_Ended_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.StopSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Healing_C::StopSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "StopSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Healing.Ability_Player_Healing_C.ExecuteUbergraph_Ability_Player_Healing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttemptToCast_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttemptToCast_Result_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtendedStatComponent_C*    CallFunc_GetExtendedStatComponent_Comp                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AbilityEndResult      K2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_Healing_C::ExecuteUbergraph_Ability_Player_Healing(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_AttemptToCast_Result, bool CallFunc_AttemptToCast_Result_1, float K2Node_Event_DeltaSeconds, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsCasting_Result, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, enum class E_AbilityEndResult K2Node_Event_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage_1, float CallFunc_PlayAbilityMontage_Duration_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Healing_C", "ExecuteUbergraph_Ability_Player_Healing");

	Params::AAbility_Player_Healing_C_ExecuteUbergraph_Ability_Player_Healing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AttemptToCast_Result = CallFunc_AttemptToCast_Result;
	Parms.CallFunc_AttemptToCast_Result_1 = CallFunc_AttemptToCast_Result_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetIsCasting_Result = CallFunc_GetIsCasting_Result;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetExtendedStatComponent_Comp = CallFunc_GetExtendedStatComponent_Comp;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAbilityMontage_Montage_1 = CallFunc_GetAbilityMontage_Montage_1;
	Parms.CallFunc_PlayAbilityMontage_Duration_1 = CallFunc_PlayAbilityMontage_Duration_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


