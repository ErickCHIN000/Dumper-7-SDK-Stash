#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x438 - 0x380)
// BlueprintGeneratedClass LightProj_ElementalHawk_Child.LightProj_ElementalHawk_Child_C
class ULightProj_ElementalHawk_Child_C : public ULightProjectile_ATL_SmartBullet_C
{
public:
	struct FEnvQueryParams                       Query;                                             // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProj_ElementalHawk_Child_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void HomeTo(class UOakLightProjectile* Projectile);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, class AActor* Target, const struct FVector& EndLocation, const struct FVector& StartLocation, class ULightProjectile* MyProjectile, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue1, enum class EWeaponShotModifierType CallFunc_GetModifierType_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
};

}


