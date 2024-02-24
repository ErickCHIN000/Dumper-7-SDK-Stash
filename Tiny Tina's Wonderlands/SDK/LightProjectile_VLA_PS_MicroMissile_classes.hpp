#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_VLA_PS_MicroMissile.LightProjectile_VLA_PS_MicroMissile_C
class ULightProjectile_VLA_PS_MicroMissile_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3EC1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_VLA_PS_MicroMissile_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


