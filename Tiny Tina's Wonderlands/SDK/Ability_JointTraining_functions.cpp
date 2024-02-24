#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_JointTraining.Ability_JointTraining_C
// (None)

class UClass* UAbility_JointTraining_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_JointTraining_C");

	return Clss;
}


// Ability_JointTraining_C Ability_JointTraining.Default__Ability_JointTraining_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_JointTraining_C* UAbility_JointTraining_C::GetDefaultObj()
{
	static class UAbility_JointTraining_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_JointTraining_C*>(UAbility_JointTraining_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_JointTraining.Ability_JointTraining_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_JointTraining_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_JointTraining_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_JointTraining.Ability_JointTraining_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_JointTraining_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_JointTraining_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_JointTraining.Ability_JointTraining_C.OnDamageDealt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_JointTraining_C::OnDamageDealt(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_JointTraining_C", "OnDamageDealt");

	Params::UAbility_JointTraining_C_OnDamageDealt_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_JointTraining.Ability_JointTraining_C.ExecuteUbergraph_Ability_JointTraining
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)

void UAbility_JointTraining_C::ExecuteUbergraph_Ability_JointTraining(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_Compare_Damage_Source_Equal2, bool CallFunc_Compare_Damage_Source_Not_Equal2, bool CallFunc_Compare_Damage_Source_Equal3, bool CallFunc_Compare_Damage_Source_Not_Equal3, bool CallFunc_Compare_Damage_Source_Equal4, bool CallFunc_Compare_Damage_Source_Not_Equal4, bool CallFunc_Compare_Damage_Source_Equal5, bool CallFunc_Compare_Damage_Source_Not_Equal5, bool CallFunc_Compare_Damage_Source_Equal6, bool CallFunc_Compare_Damage_Source_Not_Equal6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_JointTraining_C", "ExecuteUbergraph_Ability_JointTraining");

	Params::UAbility_JointTraining_C_ExecuteUbergraph_Ability_JointTraining_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.CallFunc_Compare_Damage_Source_Equal1 = CallFunc_Compare_Damage_Source_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal1 = CallFunc_Compare_Damage_Source_Not_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Equal2 = CallFunc_Compare_Damage_Source_Equal2;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal2 = CallFunc_Compare_Damage_Source_Not_Equal2;
	Parms.CallFunc_Compare_Damage_Source_Equal3 = CallFunc_Compare_Damage_Source_Equal3;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal3 = CallFunc_Compare_Damage_Source_Not_Equal3;
	Parms.CallFunc_Compare_Damage_Source_Equal4 = CallFunc_Compare_Damage_Source_Equal4;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal4 = CallFunc_Compare_Damage_Source_Not_Equal4;
	Parms.CallFunc_Compare_Damage_Source_Equal5 = CallFunc_Compare_Damage_Source_Equal5;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal5 = CallFunc_Compare_Damage_Source_Not_Equal5;
	Parms.CallFunc_Compare_Damage_Source_Equal6 = CallFunc_Compare_Damage_Source_Equal6;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal6 = CallFunc_Compare_Damage_Source_Not_Equal6;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


