#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Amulet_OverflowBloodbag.Ability_All_Amulet_OverflowBloodbag_C
// (None)

class UClass* UAbility_All_Amulet_OverflowBloodbag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Amulet_OverflowBloodbag_C");

	return Clss;
}


// Ability_All_Amulet_OverflowBloodbag_C Ability_All_Amulet_OverflowBloodbag.Default__Ability_All_Amulet_OverflowBloodbag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Amulet_OverflowBloodbag_C* UAbility_All_Amulet_OverflowBloodbag_C::GetDefaultObj()
{
	static class UAbility_All_Amulet_OverflowBloodbag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Amulet_OverflowBloodbag_C*>(UAbility_All_Amulet_OverflowBloodbag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Amulet_OverflowBloodbag.Ability_All_Amulet_OverflowBloodbag_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Amulet_OverflowBloodbag_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Amulet_OverflowBloodbag_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Amulet_OverflowBloodbag.Ability_All_Amulet_OverflowBloodbag_C.CE_TookHealing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HealReceiver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Healing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HealInstigator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Amulet_OverflowBloodbag_C::CE_TookHealing(class AActor* HealReceiver, float Healing, class AActor* HealInstigator, class UDamageSource* DamageSource, class UDamageType* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Amulet_OverflowBloodbag_C", "CE_TookHealing");

	Params::UAbility_All_Amulet_OverflowBloodbag_C_CE_TookHealing_Params Parms{};

	Parms.HealReceiver = HealReceiver;
	Parms.Healing = Healing;
	Parms.HealInstigator = HealInstigator;
	Parms.DamageSource = DamageSource;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Amulet_OverflowBloodbag.Ability_All_Amulet_OverflowBloodbag_C.ExecuteUbergraph_Ability_All_Amulet_OverflowBloodbag
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_Player_C*            K2Node_DynamicCast_AsBPChar_Player                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_HealReceiver                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Healing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HealInstigator                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_All_Amulet_OverflowBloodbag_C::ExecuteUbergraph_Ability_All_Amulet_OverflowBloodbag(int32 EntryPoint, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_HealReceiver, float K2Node_CustomEvent_Healing, class AActor* K2Node_CustomEvent_HealInstigator, class UDamageSource* K2Node_CustomEvent_DamageSource, class UDamageType* K2Node_CustomEvent_DamageType, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Amulet_OverflowBloodbag_C", "ExecuteUbergraph_Ability_All_Amulet_OverflowBloodbag");

	Params::UAbility_All_Amulet_OverflowBloodbag_C_ExecuteUbergraph_Ability_All_Amulet_OverflowBloodbag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPChar_Player = K2Node_DynamicCast_AsBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_HealReceiver = K2Node_CustomEvent_HealReceiver;
	Parms.K2Node_CustomEvent_Healing = K2Node_CustomEvent_Healing;
	Parms.K2Node_CustomEvent_HealInstigator = K2Node_CustomEvent_HealInstigator;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


