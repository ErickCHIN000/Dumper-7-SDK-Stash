#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3B0 - 0x378)
// BlueprintGeneratedClass LightProjectile_HW_COV_Love.LightProjectile_HW_COV_Love_C
class ULightProjectile_HW_COV_Love_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2D1E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProjDmgScaleHandle;                                // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 ProjRadiusScaleHandle;                             // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_HW_COV_Love_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool Temp_bool_Variable, class AActor* CallFunc_GetHitActor_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 K2Node_Select_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void CheckSpawnShrapnel(class ULightProjectile* Projectile, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, bool Temp_bool_Variable, class AActor* CallFunc_GetHitActor_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_RandomBoolWithWeight_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


