#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C
// (None)

class UClass* UAbility_Ring_Cond_LowAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_LowAmmo_C");

	return Clss;
}


// Ability_Ring_Cond_LowAmmo_C Ability_Ring_Cond_LowAmmo.Default__Ability_Ring_Cond_LowAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_LowAmmo_C* UAbility_Ring_Cond_LowAmmo_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_LowAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_LowAmmo_C*>(UAbility_Ring_Cond_LowAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.QueryRingStatusEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasStatusEffect                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery                              (NoDestructor)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue                           (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Ring_Cond_LowAmmo_C::QueryRingStatusEffect(bool* HasStatusEffect, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "QueryRingStatusEffect");

	Params::UAbility_Ring_Cond_LowAmmo_C_QueryRingStatusEffect_Params Parms{};

	Parms.K2Node_MakeStruct_StatusEffectQuery = K2Node_MakeStruct_StatusEffectQuery;
	Parms.CallFunc_QueryStatusEffect_ReturnValue = CallFunc_QueryStatusEffect_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasStatusEffect != nullptr)
		*HasStatusEffect = Parms.HasStatusEffect;

}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowAmmo_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.CheckPlayerLowAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowAmmo_C::CheckPlayerLowAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "CheckPlayerLowAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowAmmo_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.QueryAndRemoveStatusEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowAmmo_C::QueryAndRemoveStatusEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "QueryAndRemoveStatusEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.ExecuteUbergraph_Ability_Ring_Cond_LowAmmo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class AWeapon*                     CallFunc_GetActiveWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_QueryRingStatusEffect_HasStatusEffect                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_QueryRingStatusEffect_HasStatusEffect1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Ring_Cond_LowAmmo_C::ExecuteUbergraph_Ability_Ring_Cond_LowAmmo(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_QueryRingStatusEffect_HasStatusEffect, bool CallFunc_QueryRingStatusEffect_HasStatusEffect1, bool CallFunc_Not_PreBool_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowAmmo_C", "ExecuteUbergraph_Ability_Ring_Cond_LowAmmo");

	Params::UAbility_Ring_Cond_LowAmmo_C_ExecuteUbergraph_Ability_Ring_Cond_LowAmmo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetActiveWeapon_ReturnValue = CallFunc_GetActiveWeapon_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_QueryRingStatusEffect_HasStatusEffect = CallFunc_QueryRingStatusEffect_HasStatusEffect;
	Parms.CallFunc_QueryRingStatusEffect_HasStatusEffect1 = CallFunc_QueryRingStatusEffect_HasStatusEffect1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


