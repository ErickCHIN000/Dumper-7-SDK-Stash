#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x590 - 0x4D0)
// BlueprintGeneratedClass LightProjectile_ReignOfArrows.LightProjectile_ReignOfArrows_C
class ULightProjectile_ReignOfArrows_C : public ULightProjectile_JAK_CrossbowBolt_Base_C
{
public:
	struct FEnvQueryParams                       EQS_ArrowSpawnLoc;                                 // 0x4D0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FRandomStream                         RandIntStream;                                     // 0x588(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_ReignOfArrows_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile, const struct FVector& InitLocation, bool Temp_bool_Variable, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, bool CallFunc_RandomBoolWithWeight_ReturnValue, float K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<struct FVector>& CallFunc_RunEnvQueryForAllLocations_ResultLocations, bool CallFunc_RunEnvQueryForAllLocations_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& K2Node_Select1_Default, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& InitLocation, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetSource_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FHitResult& Temp_struct_Variable);
};

}


