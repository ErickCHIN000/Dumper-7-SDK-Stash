#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_Hydra_Spit.LightProj_Hydra_Spit_C
class ULightProj_Hydra_Spit_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_FE2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_Hydra_Spit_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


