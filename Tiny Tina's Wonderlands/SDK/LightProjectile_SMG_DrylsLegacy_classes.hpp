#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_SMG_DrylsLegacy.LightProjectile_SMG_DrylsLegacy_C
class ULightProjectile_SMG_DrylsLegacy_C : public ULightProjectile_SMG_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_SMG_DrylsLegacy_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void EnableHoming(class ULightProjectile* Projectile);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetSource_ReturnValue);
};

}


