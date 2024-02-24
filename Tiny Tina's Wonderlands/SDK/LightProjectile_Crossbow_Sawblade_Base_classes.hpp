#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_Crossbow_Sawblade_Base.LightProjectile_Crossbow_Sawblade_Base_C
class ULightProjectile_Crossbow_Sawblade_Base_C : public ULightProjectile_AssaultRifle_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_Crossbow_Sawblade_Base_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, class UStatusEffectData* Temp_object_Variable, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class UStatusEffectData* Temp_object_Variable1, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class UStatusEffectData* Temp_object_Variable2, int32 CallFunc_Round_ReturnValue, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, int32 Temp_int_Variable, class UStatusEffectData* K2Node_Select_Default, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


