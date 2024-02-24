#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_Curse.LightProj_Curse_C
class ULightProj_Curse_C : public ULightProjectile_Crossbow_Sawblade_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Curse_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetDamageCauser_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Curse_C* K2Node_DynamicCast_AsAbility_Curse, bool K2Node_DynamicCast_bSuccess);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetDamageCauser_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Curse_C* K2Node_DynamicCast_AsAbility_Curse, bool K2Node_DynamicCast_bSuccess);
};

}


