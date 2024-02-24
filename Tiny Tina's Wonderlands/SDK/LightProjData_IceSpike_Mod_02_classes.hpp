#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x388 - 0x378)
// BlueprintGeneratedClass LightProjData_IceSpike_Mod_02.LightProjData_IceSpike_Mod_02_C
class ULightProjData_IceSpike_Mod_02_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_26E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           Audio_GroundSpike;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProjData_IceSpike_Mod_02_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactNormal, const struct FVector& HitLocation, class AActor* HitActor, const struct FRotator& DamageRot, const struct FVector& DamageLoc, bool Temp_bool_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, bool Temp_bool_Variable2, const struct FRotator& Temp_struct_Variable, bool Temp_bool_Variable3, const struct FHitResult& Temp_struct_Variable1, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_FindNavMeshPoint_Result, bool CallFunc_FindNavMeshPoint_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FVector& CallFunc_FindNavMeshPoint_Result1, bool CallFunc_FindNavMeshPoint_ReturnValue1, const struct FVector& CallFunc_FindNavMeshPoint_Result2, bool CallFunc_FindNavMeshPoint_ReturnValue2, const struct FVector& K2Node_Select_Default, const struct FRotator& K2Node_Select1_Default, const struct FVector& K2Node_Select2_Default, class UGbxDestructibleComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_FindNavMeshPoint_Result3, bool CallFunc_FindNavMeshPoint_ReturnValue3, bool CallFunc_K2_EvaluateConditionType_ReturnValue, const struct FVector& K2Node_Select3_Default, bool Temp_bool_Variable4, const struct FVector& K2Node_Select4_Default, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
};

}


