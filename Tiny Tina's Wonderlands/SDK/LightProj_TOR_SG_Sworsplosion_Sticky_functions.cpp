#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TOR_SG_Sworsplosion_Sticky.LightProj_TOR_SG_Sworsplosion_Sticky_C
// (None)

class UClass* ULightProj_TOR_SG_Sworsplosion_Sticky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TOR_SG_Sworsplosion_Sticky_C");

	return Clss;
}


// LightProj_TOR_SG_Sworsplosion_Sticky_C LightProj_TOR_SG_Sworsplosion_Sticky.Default__LightProj_TOR_SG_Sworsplosion_Sticky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TOR_SG_Sworsplosion_Sticky_C* ULightProj_TOR_SG_Sworsplosion_Sticky_C::GetDefaultObj()
{
	static class ULightProj_TOR_SG_Sworsplosion_Sticky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TOR_SG_Sworsplosion_Sticky_C*>(ULightProj_TOR_SG_Sworsplosion_Sticky_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProj_TOR_SG_Sworsplosion_Sticky.LightProj_TOR_SG_Sworsplosion_Sticky_C.OnExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAssociatedActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_Swordsplosion_C>K2Node_DynamicCast_AsInterface_Swordsplosion                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_TOR_SG_Sworsplosion_Sticky_C::OnExplode(class ULightProjectile* Projectile, class AActor* CallFunc_GetAssociatedActor_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IInterface_Swordsplosion_C> K2Node_DynamicCast_AsInterface_Swordsplosion, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TOR_SG_Sworsplosion_Sticky_C", "OnExplode");

	Params::ULightProj_TOR_SG_Sworsplosion_Sticky_C_OnExplode_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_GetAssociatedActor_ReturnValue = CallFunc_GetAssociatedActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Swordsplosion = K2Node_DynamicCast_AsInterface_Swordsplosion;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightProj_TOR_SG_Sworsplosion_Sticky.LightProj_TOR_SG_Sworsplosion_Sticky_C.OnAttached
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAssociatedActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_Swordsplosion_C>K2Node_DynamicCast_AsInterface_Swordsplosion                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightProj_TOR_SG_Sworsplosion_Sticky_C::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, class AActor* CallFunc_GetAssociatedActor_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_Swordsplosion_C> K2Node_DynamicCast_AsInterface_Swordsplosion, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProj_TOR_SG_Sworsplosion_Sticky_C", "OnAttached");

	Params::ULightProj_TOR_SG_Sworsplosion_Sticky_C_OnAttached_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.AttachedActor = AttachedActor;
	Parms.CallFunc_GetAssociatedActor_ReturnValue = CallFunc_GetAssociatedActor_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInterface_Swordsplosion = K2Node_DynamicCast_AsInterface_Swordsplosion;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


