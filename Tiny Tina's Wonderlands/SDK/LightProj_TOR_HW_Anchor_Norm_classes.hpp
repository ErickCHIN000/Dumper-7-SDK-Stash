#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_TOR_HW_Anchor_Norm.LightProj_TOR_HW_Anchor_Norm_C
class ULightProj_TOR_HW_Anchor_Norm_C : public ULightProjectile_TOR_SG_Grenade_Normal_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_TOR_HW_Anchor_Norm_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, const struct FTransform& CallFunc_TransformSplat_SplatTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FTransform& CallFunc_TransformSplat_SplatTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


