#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_KotC24.LightProjectile_KotC24_C
class ULightProjectile_KotC24_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2823[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_KotC24_C* GetDefaultObj();

	void StartHoming(class ULightProjectile* Projectile);
};

}


