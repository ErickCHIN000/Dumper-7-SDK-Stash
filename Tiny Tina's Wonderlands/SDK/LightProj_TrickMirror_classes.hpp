#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_TrickMirror.LightProj_TrickMirror_C
class ULightProj_TrickMirror_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3C64[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_TrickMirror_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void EnableHoming(class ULightProjectile* Projectile);
};

}


