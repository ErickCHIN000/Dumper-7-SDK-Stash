#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C
class ULightProjectile_HW_COV_Flakshot_AI_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3E89[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_HW_COV_Flakshot_AI_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


