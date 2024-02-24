#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C
// (None)

class UClass* UAbility_Mage_Guns_Polymorph_DamageAmp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Mage_Guns_Polymorph_DamageAmp_C");

	return Clss;
}


// Ability_Mage_Guns_Polymorph_DamageAmp_C Ability_Mage_Guns_Polymorph_DamageAmp.Default__Ability_Mage_Guns_Polymorph_DamageAmp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Mage_Guns_Polymorph_DamageAmp_C* UAbility_Mage_Guns_Polymorph_DamageAmp_C::GetDefaultObj()
{
	static class UAbility_Mage_Guns_Polymorph_DamageAmp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Mage_Guns_Polymorph_DamageAmp_C*>(UAbility_Mage_Guns_Polymorph_DamageAmp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Mage_Guns_Polymorph_DamageAmp_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Guns_Polymorph_DamageAmp_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C.CE_Ench_PolymorphedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymorphedActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasImmune                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      PolymorphDrone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Mage_Guns_Polymorph_DamageAmp_C::CE_Ench_PolymorphedTarget(class AActor* PolymorphedActor, bool WasImmune, class AActor* PolymorphDrone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Guns_Polymorph_DamageAmp_C", "CE_Ench_PolymorphedTarget");

	Params::UAbility_Mage_Guns_Polymorph_DamageAmp_C_CE_Ench_PolymorphedTarget_Params Parms{};

	Parms.PolymorphedActor = PolymorphedActor;
	Parms.WasImmune = WasImmune;
	Parms.PolymorphDrone = PolymorphDrone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C.CE_Ench_PolymorphEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymorphedTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               KilledTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      PolymorphDrone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Mage_Guns_Polymorph_DamageAmp_C::CE_Ench_PolymorphEnded(class AActor* PolymorphedTarget, bool KilledTarget, class AActor* PolymorphDrone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Guns_Polymorph_DamageAmp_C", "CE_Ench_PolymorphEnded");

	Params::UAbility_Mage_Guns_Polymorph_DamageAmp_C_CE_Ench_PolymorphEnded_Params Parms{};

	Parms.PolymorphedTarget = PolymorphedTarget;
	Parms.KilledTarget = KilledTarget;
	Parms.PolymorphDrone = PolymorphDrone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Mage_Guns_Polymorph_DamageAmp_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Guns_Polymorph_DamageAmp_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C.ExecuteUbergraph_Ability_Mage_Guns_Polymorph_DamageAmp
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_PolymorphedActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasImmune                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_PolymorphDrone1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_CustomEvent_PolymorphedTarget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KilledTarget                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_PolymorphDrone                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)

void UAbility_Mage_Guns_Polymorph_DamageAmp_C::ExecuteUbergraph_Ability_Mage_Guns_Polymorph_DamageAmp(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_PolymorphedActor, bool K2Node_CustomEvent_WasImmune, class AActor* K2Node_CustomEvent_PolymorphDrone1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, class AActor* K2Node_CustomEvent_PolymorphedTarget, bool K2Node_CustomEvent_KilledTarget, class AActor* K2Node_CustomEvent_PolymorphDrone, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Guns_Polymorph_DamageAmp_C", "ExecuteUbergraph_Ability_Mage_Guns_Polymorph_DamageAmp");

	Params::UAbility_Mage_Guns_Polymorph_DamageAmp_C_ExecuteUbergraph_Ability_Mage_Guns_Polymorph_DamageAmp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PolymorphedActor = K2Node_CustomEvent_PolymorphedActor;
	Parms.K2Node_CustomEvent_WasImmune = K2Node_CustomEvent_WasImmune;
	Parms.K2Node_CustomEvent_PolymorphDrone1 = K2Node_CustomEvent_PolymorphDrone1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_CustomEvent_PolymorphedTarget = K2Node_CustomEvent_PolymorphedTarget;
	Parms.K2Node_CustomEvent_KilledTarget = K2Node_CustomEvent_KilledTarget;
	Parms.K2Node_CustomEvent_PolymorphDrone = K2Node_CustomEvent_PolymorphDrone;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}


