#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_DriftwoodRing.Ability_DriftwoodRing_C
// (None)

class UClass* UAbility_DriftwoodRing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_DriftwoodRing_C");

	return Clss;
}


// Ability_DriftwoodRing_C Ability_DriftwoodRing.Default__Ability_DriftwoodRing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_DriftwoodRing_C* UAbility_DriftwoodRing_C::GetDefaultObj()
{
	static class UAbility_DriftwoodRing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_DriftwoodRing_C*>(UAbility_DriftwoodRing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_DriftwoodRing_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_DriftwoodRing_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.Check_Buff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_DriftwoodRing_C::Check_Buff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "Check_Buff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.AddBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_DriftwoodRing_C::AddBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "AddBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.RemoveBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_DriftwoodRing_C::RemoveBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "RemoveBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_DriftwoodRing.Ability_DriftwoodRing_C.ExecuteUbergraph_Ability_DriftwoodRing
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_DriftwoodRing_C::ExecuteUbergraph_Ability_DriftwoodRing(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DriftwoodRing_C", "ExecuteUbergraph_Ability_DriftwoodRing");

	Params::UAbility_DriftwoodRing_C_ExecuteUbergraph_Ability_DriftwoodRing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


