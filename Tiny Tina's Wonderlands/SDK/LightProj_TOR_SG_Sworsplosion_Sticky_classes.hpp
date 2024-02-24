#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_TOR_SG_Sworsplosion_Sticky.LightProj_TOR_SG_Sworsplosion_Sticky_C
class ULightProj_TOR_SG_Sworsplosion_Sticky_C : public ULightProjectile_TOR_SG_Grenade_Sticky_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_TOR_SG_Sworsplosion_Sticky_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, class AActor* CallFunc_GetAssociatedActor_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IInterface_Swordsplosion_C> K2Node_DynamicCast_AsInterface_Swordsplosion, bool K2Node_DynamicCast_bSuccess);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, class AActor* CallFunc_GetAssociatedActor_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_Swordsplosion_C> K2Node_DynamicCast_AsInterface_Swordsplosion, bool K2Node_DynamicCast_bSuccess1);
};

}


