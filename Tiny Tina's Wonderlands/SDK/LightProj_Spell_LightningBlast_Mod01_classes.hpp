#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17C (0x5B4 - 0x438)
// BlueprintGeneratedClass LightProj_Spell_LightningBlast_Mod01.LightProj_Spell_LightningBlast_Mod01_C
class ULightProj_Spell_LightningBlast_Mod01_C : public ULightProj_Spell_LightningBlast_Base_C
{
public:
	struct FEnvQueryParams                       EQS_FindNextTarget;                                // 0x438(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FRandomStream                         RandStream;                                        // 0x4F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       HitWorldEQS;                                       // 0x4F8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        BounceChance;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_Spell_LightningBlast_Mod01_C* GetDefaultObj();

	struct FVector GenerateEndLocation(struct FHitResult& Hit, class ULightProjectile* Projectile, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void GetTargetLocation(class AActor* Target, struct FVector* Location, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void GetRandomNearbyEnemy(TArray<class AActor*>& TargetArray, class AActor** Output, const struct FRandomStream& RandStream, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class AActor* CallFunc_Array_Get_Item);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& EndLocation, class AActor* NewTarget, const struct FSpawnableSpellBasicData& InSpellData, bool HitEnemy_, class AActor* HitActor, const struct FVector& StartLocation, const struct FVector& CallFunc_GenerateEndLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_K2_EvaluateConditionType_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_Location, const struct FVector& CallFunc_GetTargetLocation_Location1, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, class AActor* Temp_object_Variable, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_GetRandomNearbyEnemy_Output, bool Temp_bool_Variable, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_Select_Default, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
};

}


