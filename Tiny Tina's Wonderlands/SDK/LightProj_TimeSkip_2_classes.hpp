#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_TimeSkip_2.LightProj_TimeSkip_2_C
class ULightProj_TimeSkip_2_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2350[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_TimeSkip_2_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


