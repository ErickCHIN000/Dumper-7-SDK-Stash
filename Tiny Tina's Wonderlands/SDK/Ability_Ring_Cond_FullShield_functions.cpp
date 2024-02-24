#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C
// (None)

class UClass* UAbility_Ring_Cond_FullShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_FullShield_C");

	return Clss;
}


// Ability_Ring_Cond_FullShield_C Ability_Ring_Cond_FullShield.Default__Ability_Ring_Cond_FullShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_FullShield_C* UAbility_Ring_Cond_FullShield_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_FullShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_FullShield_C*>(UAbility_Ring_Cond_FullShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.CE_ShieldNowNotFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_Ring_Cond_FullShield_C::CE_ShieldNowNotFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "CE_ShieldNowNotFilled");

	Params::UAbility_Ring_Cond_FullShield_C_CE_ShieldNowNotFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.CE_ShieldNowFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_Ring_Cond_FullShield_C::CE_ShieldNowFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "CE_ShieldNowFilled");

	Params::UAbility_Ring_Cond_FullShield_C_CE_ShieldNowFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_FullShield_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_FullShield_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.RemoveRingEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_FullShield_C::RemoveRingEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "RemoveRingEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.RingUser_ShieldUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_FullShield_C::RingUser_ShieldUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "RingUser_ShieldUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C.ExecuteUbergraph_Ability_Ring_Cond_FullShield
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool1                                 (NoDestructor, ContainsInstancedReference)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool                                  (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate    (NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1   (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetMaxShield_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentShield_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasShieldEquipped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasShieldEquipped_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)

void UAbility_Ring_Cond_FullShield_C::ExecuteUbergraph_Ability_Ring_Cond_FullShield(int32 EntryPoint, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetCurrentShield_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_HasShieldEquipped_ReturnValue, bool CallFunc_HasShieldEquipped_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_FullShield_C", "ExecuteUbergraph_Ability_Ring_Cond_FullShield");

	Params::UAbility_Ring_Cond_FullShield_C_ExecuteUbergraph_Ability_Ring_Cond_FullShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ResourcePool1 = K2Node_CustomEvent_ResourcePool1;
	Parms.K2Node_CustomEvent_ResourcePool = K2Node_CustomEvent_ResourcePool;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.CallFunc_GetMaxShield_ReturnValue = CallFunc_GetMaxShield_ReturnValue;
	Parms.CallFunc_GetCurrentShield_ReturnValue = CallFunc_GetCurrentShield_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_HasShieldEquipped_ReturnValue = CallFunc_HasShieldEquipped_ReturnValue;
	Parms.CallFunc_HasShieldEquipped_ReturnValue1 = CallFunc_HasShieldEquipped_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


