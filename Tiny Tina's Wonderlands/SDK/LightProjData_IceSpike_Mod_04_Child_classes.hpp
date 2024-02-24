#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4F0 - 0x4F0)
// BlueprintGeneratedClass LightProjData_IceSpike_Mod_04_Child.LightProjData_IceSpike_Mod_04_Child_C
class ULightProjData_IceSpike_Mod_04_Child_C : public ULightProjData_IceSpike_Mod_04_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjData_IceSpike_Mod_04_Child_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, bool HitEnemy, const struct FVector& TargetLocation, class AActor* TargetActor, const struct FVector& HitNormal, const struct FVector& HitLoc, class AActor* HitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, uint8 CallFunc_GetFiringPatternID_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess1, class FName CallFunc_GetCompanionTargetingSocket_Socket1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue1, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue1, uint8 CallFunc_Add_ByteByte_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1);
	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


