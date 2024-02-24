#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Inflammation.Ability_Inflammation_C
// (None)

class UClass* UAbility_Inflammation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Inflammation_C");

	return Clss;
}


// Ability_Inflammation_C Ability_Inflammation.Default__Ability_Inflammation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Inflammation_C* UAbility_Inflammation_C::GetDefaultObj()
{
	static class UAbility_Inflammation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Inflammation_C*>(UAbility_Inflammation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Inflammation.Ability_Inflammation_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Inflammation_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Inflammation.Ability_Inflammation_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Inflammation_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Inflammation.Ability_Inflammation_C.KilledEnemy
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Inflammation_C::KilledEnemy(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "KilledEnemy");

	Params::UAbility_Inflammation_C_KilledEnemy_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Inflammation.Ability_Inflammation_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Inflammation_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "CausedDamage");

	Params::UAbility_Inflammation_C_CausedDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Inflammation.Ability_Inflammation_C.RemoveStatusOnCloak
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Inflammation_C::RemoveStatusOnCloak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "RemoveStatusOnCloak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Inflammation.Ability_Inflammation_C.CheckStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Inflammation_C::CheckStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "CheckStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Inflammation.Ability_Inflammation_C.ExecuteUbergraph_Ability_Inflammation
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_DynamicCast_AsGrenade_Mod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details1                                      (ConstParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpellModDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// class UAICloakComponent*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetSpellStatusEffectDamage_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class UAICloakComponent*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsCloaked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery                              (NoDestructor)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue                           (NoDestructor)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery1                             (NoDestructor)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue1                          (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Inflammation_C::ExecuteUbergraph_Ability_Inflammation(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details1, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_K2_EvaluateConditionType_ReturnValue, float CallFunc_GetSpellModDamage_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class UAICloakComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class AActor* CallFunc_Array_Get_Item, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UAICloakComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_IsCloaked_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_RemoveStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery1, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Inflammation_C", "ExecuteUbergraph_Ability_Inflammation");

	Params::UAbility_Inflammation_C_ExecuteUbergraph_Ability_Inflammation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityOwner_ReturnValue2 = CallFunc_GetAbilityOwner_ReturnValue2;
	Parms.K2Node_DynamicCast_AsGrenade_Mod = K2Node_DynamicCast_AsGrenade_Mod;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details1 = K2Node_CustomEvent_Details1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
	Parms.CallFunc_GetSpellModDamage_ReturnValue = CallFunc_GetSpellModDamage_ReturnValue;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue1 = CallFunc_K2_EvaluateConditionType_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Compare_Damage_Source_Equal1 = CallFunc_Compare_Damage_Source_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal1 = CallFunc_Compare_Damage_Source_Not_Equal1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetSpellStatusEffectDamage_ReturnValue = CallFunc_GetSpellStatusEffectDamage_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_IsCloaked_ReturnValue = CallFunc_IsCloaked_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectQuery = K2Node_MakeStruct_StatusEffectQuery;
	Parms.CallFunc_QueryStatusEffect_ReturnValue = CallFunc_QueryStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectQuery1 = K2Node_MakeStruct_StatusEffectQuery1;
	Parms.CallFunc_QueryStatusEffect_ReturnValue1 = CallFunc_QueryStatusEffect_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


