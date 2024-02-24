#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_IceSpike_Mod_03.LightProjData_IceSpike_Mod_03_C
// (None)

class UClass* ULightProjData_IceSpike_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_IceSpike_Mod_03_C");

	return Clss;
}


// LightProjData_IceSpike_Mod_03_C LightProjData_IceSpike_Mod_03.Default__LightProjData_IceSpike_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_IceSpike_Mod_03_C* ULightProjData_IceSpike_Mod_03_C::GetDefaultObj()
{
	static class ULightProjData_IceSpike_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_IceSpike_Mod_03_C*>(ULightProjData_IceSpike_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjData_IceSpike_Mod_03.LightProjData_IceSpike_Mod_03_C.OnAttached
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpellLightProjectile*       K2Node_DynamicCast_AsSpell_Light_Projectile                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetSource_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTagContainerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_IceSpike_Mod_03_C*  K2Node_DynamicCast_AsAbility_Ice_Spike_Mod_03                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void ULightProjData_IceSpike_Mod_03_C::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, bool CallFunc_K2_EvaluateConditionType_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetSource_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UAbility_IceSpike_Mod_03_C* K2Node_DynamicCast_AsAbility_Ice_Spike_Mod_03, bool K2Node_DynamicCast_bSuccess1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_IceSpike_Mod_03_C", "OnAttached");

	Params::ULightProjData_IceSpike_Mod_03_C_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpell_Light_Projectile = K2Node_DynamicCast_AsSpell_Light_Projectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSource_ReturnValue = CallFunc_GetSource_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAbility_Ice_Spike_Mod_03 = K2Node_DynamicCast_AsAbility_Ice_Spike_Mod_03;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProjData_IceSpike_Mod_03.LightProjData_IceSpike_Mod_03_C.OnLifetimeExpired
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTagContainerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData                       (NoDestructor)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProjData_IceSpike_Mod_03_C::OnLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData, bool CallFunc_RemoveGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjData_IceSpike_Mod_03_C", "OnLifetimeExpired");

	Params::ULightProjData_IceSpike_Mod_03_C_OnLifetimeExpired_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetAttachedActor_ReturnValue = CallFunc_GetAttachedActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileQueryData = K2Node_MakeStruct_LightProjectileQueryData;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


