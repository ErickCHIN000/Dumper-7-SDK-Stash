#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_VLA_AR_UnderbarrelGrenade.LightProjectile_VLA_AR_UnderbarrelGrenade_C
class ULightProjectile_VLA_AR_UnderbarrelGrenade_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3EB6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_VLA_AR_UnderbarrelGrenade_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


