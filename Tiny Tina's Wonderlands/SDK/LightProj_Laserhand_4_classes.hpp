#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_Laserhand_4.LightProj_Laserhand_4_C
class ULightProj_Laserhand_4_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_22B3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_Laserhand_4_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


