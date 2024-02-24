#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_FrozenOrb.LightProj_FrozenOrb_C
class ULightProj_FrozenOrb_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3C8A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_FrozenOrb_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, class AActor* CallFunc_GetSource_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue);
};

}


