#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Ignition.LostControl_Ignition_C
// (Actor)

class UClass* ALostControl_Ignition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Ignition_C");

	return Clss;
}


// LostControl_Ignition_C LostControl_Ignition.Default__LostControl_Ignition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Ignition_C* ALostControl_Ignition_C::GetDefaultObj()
{
	static class ALostControl_Ignition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Ignition_C*>(ALostControl_Ignition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LostControl_Ignition.LostControl_Ignition_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Ignition_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "OnApply");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Ignition.LostControl_Ignition_C.DealDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Ignition_C::DealDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "DealDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Ignition.LostControl_Ignition_C.OnStartQTE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Ignition_C::OnStartQTE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "OnStartQTE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Ignition.LostControl_Ignition_C.OnStopQTE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_Ignition_C::OnStopQTE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "OnStopQTE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_Ignition.LostControl_Ignition_C.OnFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasInterruptedByQTE                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALostControl_Ignition_C::OnFinish(bool bWasInterruptedByQTE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "OnFinish");

	Params::ALostControl_Ignition_C_OnFinish_Params Parms{};

	Parms.bWasInterruptedByQTE = bWasInterruptedByQTE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LostControl_Ignition.LostControl_Ignition_C.ExecuteUbergraph_LostControl_Ignition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FWeaponAnimMontageInfo      CallFunc_GetCurrentWeaponMontage_ReturnValue                     (ConstParm, NoDestructor)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasInterruptedByQTE                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInFirstPerson_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALostControl_Ignition_C::ExecuteUbergraph_LostControl_Ignition(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasInterruptedByQTE, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInFirstPerson_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class USceneComponent* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_Ignition_C", "ExecuteUbergraph_LostControl_Ignition");

	Params::ALostControl_Ignition_C_ExecuteUbergraph_LostControl_Ignition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrentWeaponMontage_ReturnValue = CallFunc_GetCurrentWeaponMontage_ReturnValue;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue = CallFunc_PlayWeaponAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bWasInterruptedByQTE = K2Node_Event_bWasInterruptedByQTE;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInFirstPerson_ReturnValue = CallFunc_IsInFirstPerson_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


