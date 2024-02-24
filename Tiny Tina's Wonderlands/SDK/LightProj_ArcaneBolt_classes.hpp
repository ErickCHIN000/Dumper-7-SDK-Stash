#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_ArcaneBolt.LightProj_ArcaneBolt_C
class ULightProj_ArcaneBolt_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3CB6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_ArcaneBolt_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool Temp_bool_Variable, class UExplosionData* Temp_object_Variable, class UExplosionData* Temp_object_Variable1, class UExplosionData* K2Node_Select_Default, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


