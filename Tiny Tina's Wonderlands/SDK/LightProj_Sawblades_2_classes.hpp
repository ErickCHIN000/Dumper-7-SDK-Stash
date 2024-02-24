#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_Sawblades_2.LightProj_Sawblades_2_C
class ULightProj_Sawblades_2_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_1864[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_Sawblades_2_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile);
	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


