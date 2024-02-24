#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_HammerQuake_ProxMine.LightProj_HammerQuake_ProxMine_C
class ULightProj_HammerQuake_ProxMine_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3E01[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_HammerQuake_ProxMine_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


