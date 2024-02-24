#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C
// (None)

class UClass* UAbility_Ring_Cond_LowShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_LowShield_C");

	return Clss;
}


// Ability_Ring_Cond_LowShield_C Ability_Ring_Cond_LowShield.Default__Ability_Ring_Cond_LowShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_LowShield_C* UAbility_Ring_Cond_LowShield_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_LowShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_LowShield_C*>(UAbility_Ring_Cond_LowShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowShield_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowShield_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.CE_ShieldNowNotFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_Ring_Cond_LowShield_C::CE_ShieldNowNotFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowShield_C", "CE_ShieldNowNotFilled");

	Params::UAbility_Ring_Cond_LowShield_C_CE_ShieldNowNotFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.CE_ShieldNowFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_Ring_Cond_LowShield_C::CE_ShieldNowFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowShield_C", "CE_ShieldNowFilled");

	Params::UAbility_Ring_Cond_LowShield_C_CE_ShieldNowFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.ExecuteUbergraph_Ability_Ring_Cond_LowShield
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool1                                 (NoDestructor, ContainsInstancedReference)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool                                  (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate    (NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1   (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Ring_Cond_LowShield_C::ExecuteUbergraph_Ability_Ring_Cond_LowShield(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowShield_C", "ExecuteUbergraph_Ability_Ring_Cond_LowShield");

	Params::UAbility_Ring_Cond_LowShield_C_ExecuteUbergraph_Ability_Ring_Cond_LowShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CustomEvent_ResourcePool1 = K2Node_CustomEvent_ResourcePool1;
	Parms.K2Node_CustomEvent_ResourcePool = K2Node_CustomEvent_ResourcePool;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


