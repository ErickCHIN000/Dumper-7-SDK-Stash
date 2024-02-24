#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Poisoning.LostControl_Poisoning_C
// (Actor)

class UClass* ALostControl_Poisoning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Poisoning_C");

	return Clss;
}


// LostControl_Poisoning_C LostControl_Poisoning.Default__LostControl_Poisoning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Poisoning_C* ALostControl_Poisoning_C::GetDefaultObj()
{
	static class ALostControl_Poisoning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Poisoning_C*>(ALostControl_Poisoning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LostControl_Poisoning.LostControl_Poisoning_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Poisoning_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "OnApply");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.DealDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Poisoning_C::DealDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "DealDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.OnStartQTE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Poisoning_C::OnStartQTE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "OnStartQTE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.OnStopQTE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Poisoning_C::OnStopQTE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "OnStopQTE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.OnFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasInterruptedByQTE                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALostControl_Poisoning_C::OnFinish(bool bWasInterruptedByQTE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "OnFinish");

	Params::ALostControl_Poisoning_C_OnFinish_Params Parms{};

	Parms.bWasInterruptedByQTE = bWasInterruptedByQTE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALostControl_Poisoning_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "ReceiveEndPlay");

	Params::ALostControl_Poisoning_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LostControl_Poisoning.LostControl_Poisoning_C.ExecuteUbergraph_LostControl_Poisoning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FWeaponAnimMontageInfo      CallFunc_GetCurrentWeaponMontage_ReturnValue                     (ConstParm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInFirstPerson_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasInterruptedByQTE                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponAnimMontageInfo      CallFunc_GetCurrentWeaponMontage_ReturnValue_1                   (ConstParm, NoDestructor)
// bool                               CallFunc_InDyingState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALostControl_Poisoning_C::ExecuteUbergraph_LostControl_Poisoning(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsInFirstPerson_ReturnValue, bool K2Node_Event_bWasInterruptedByQTE, class USceneComponent* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue_1, bool CallFunc_InDyingState_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Poisoning_C", "ExecuteUbergraph_LostControl_Poisoning");

	Params::ALostControl_Poisoning_C_ExecuteUbergraph_LostControl_Poisoning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrentWeaponMontage_ReturnValue = CallFunc_GetCurrentWeaponMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_IsInFirstPerson_ReturnValue = CallFunc_IsInFirstPerson_ReturnValue;
	Parms.K2Node_Event_bWasInterruptedByQTE = K2Node_Event_bWasInterruptedByQTE;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetCurrentWeaponMontage_ReturnValue_1 = CallFunc_GetCurrentWeaponMontage_ReturnValue_1;
	Parms.CallFunc_InDyingState_ReturnValue = CallFunc_InDyingState_ReturnValue;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue = CallFunc_PlayWeaponAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue_1 = CallFunc_PlayWeaponAnimation_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue_2 = CallFunc_PlayWeaponAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


