#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C
// (None)

class UClass* UAbility_All_Melee_Legendary_FryingPan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Melee_Legendary_FryingPan_C");

	return Clss;
}


// Ability_All_Melee_Legendary_FryingPan_C Ability_All_Melee_Legendary_FryingPan.Default__Ability_All_Melee_Legendary_FryingPan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Melee_Legendary_FryingPan_C* UAbility_All_Melee_Legendary_FryingPan_C::GetDefaultObj()
{
	static class UAbility_All_Melee_Legendary_FryingPan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Melee_Legendary_FryingPan_C*>(UAbility_All_Melee_Legendary_FryingPan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C.CE_FryingPan_MeleeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerMeleeData*            MeleeData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      MeleeTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Melee_Legendary_FryingPan_C::CE_FryingPan_MeleeStart(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_Legendary_FryingPan_C", "CE_FryingPan_MeleeStart");

	Params::UAbility_All_Melee_Legendary_FryingPan_C_CE_FryingPan_MeleeStart_Params Parms{};

	Parms.MeleeData = MeleeData;
	Parms.bSuccess = bSuccess;
	Parms.MeleeTarget = MeleeTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Melee_Legendary_FryingPan_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_Legendary_FryingPan_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Melee_Legendary_FryingPan_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_Legendary_FryingPan_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C.CE_FryingPan_MeleeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerMeleeData*            MeleeData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      MeleeTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Melee_Legendary_FryingPan_C::CE_FryingPan_MeleeEnd(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_Legendary_FryingPan_C", "CE_FryingPan_MeleeEnd");

	Params::UAbility_All_Melee_Legendary_FryingPan_C_CE_FryingPan_MeleeEnd_Params Parms{};

	Parms.MeleeData = MeleeData;
	Parms.bSuccess = bSuccess;
	Parms.MeleeTarget = MeleeTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C.ExecuteUbergraph_Ability_All_Melee_Legendary_FryingPan
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerMeleeData*            K2Node_CustomEvent_MeleeData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_MeleeTarget                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerMeleeData*            K2Node_CustomEvent_MeleeData1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_MeleeTarget1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPlayerMeleeStateComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)

void UAbility_All_Melee_Legendary_FryingPan_C::ExecuteUbergraph_Ability_All_Melee_Legendary_FryingPan(int32 EntryPoint, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData, bool K2Node_CustomEvent_bSuccess, class AActor* K2Node_CustomEvent_MeleeTarget, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData1, bool K2Node_CustomEvent_bSuccess1, class AActor* K2Node_CustomEvent_MeleeTarget1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_Legendary_FryingPan_C", "ExecuteUbergraph_Ability_All_Melee_Legendary_FryingPan");

	Params::UAbility_All_Melee_Legendary_FryingPan_C_ExecuteUbergraph_Ability_All_Melee_Legendary_FryingPan_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MeleeData = K2Node_CustomEvent_MeleeData;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_MeleeTarget = K2Node_CustomEvent_MeleeTarget;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CustomEvent_MeleeData1 = K2Node_CustomEvent_MeleeData1;
	Parms.K2Node_CustomEvent_bSuccess1 = K2Node_CustomEvent_bSuccess1;
	Parms.K2Node_CustomEvent_MeleeTarget1 = K2Node_CustomEvent_MeleeTarget1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;

	UObject::ProcessEvent(Func, &Parms);

}

}


