#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_MineHail_MIRV.LightProj_MineHail_MIRV_C
class ULightProj_MineHail_MIRV_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_4036[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_MineHail_MIRV_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


