#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x4F0 - 0x380)
// BlueprintGeneratedClass LightProj_TOR_HawkinsWrath_Sticky.LightProj_TOR_HawkinsWrath_Sticky_C
class ULightProj_TOR_HawkinsWrath_Sticky_C : public ULightProjectile_TOR_PS_GyroJet_Sticky_C
{
public:
	struct FEnvQueryParams                       HomingHawkEQS;                                     // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EnemyAttachedEQS;                                  // 0x438(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProj_TOR_HawkinsWrath_Sticky_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, bool AttachedToEnemy, bool TargetFound, const TArray<class AActor*>& FoundTargets, bool Temp_bool_Variable, class AActor* CallFunc_GetAttachedActor_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetAttachedImpactNormal_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, class AActor* CallFunc_GetAttachedActor_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Max_ReturnValue, bool Temp_bool_Variable1, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, class AActor* K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& Temp_struct_Variable, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors1, bool CallFunc_RunEnvQueryForAllActors_ReturnValue1, const struct FVector& K2Node_Select1_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


