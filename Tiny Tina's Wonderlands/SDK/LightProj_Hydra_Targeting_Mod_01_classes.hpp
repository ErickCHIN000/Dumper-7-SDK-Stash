#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x468 - 0x468)
// BlueprintGeneratedClass LightProj_Hydra_Targeting_Mod_01.LightProj_Hydra_Targeting_Mod_01_C
class ULightProj_Hydra_Targeting_Mod_01_C : public ULightProj_Hydra_Targeting_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Hydra_Targeting_Mod_01_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnExplode(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FTransform& CallFunc_MakeHydraSpawnTransform_Transform, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
	void MakeHydraSpawnTransform(class ULightProjectile* Projectile, const struct FHitResult& HitInfo, struct FTransform* Transform, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


