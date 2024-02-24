#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x960 - 0x898)
// BlueprintGeneratedClass Projectile_TED_SaltNBattery_Daggerstorm.Projectile_TED_SaltNBattery_Daggerstorm_C
class AProjectile_TED_SaltNBattery_Daggerstorm_C : public AProjectile_TED_Daggerstorm_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       TargetQuery;                                       // 0x8A0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        AoeDmgScalar;                                      // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HomingWeight;                                      // 0x95C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_TED_SaltNBattery_Daggerstorm_C* GetDefaultObj();

	void UserConstructionScript();
	void CacheDamageValues();
	void SpawnNewDagger();
	void ExecuteUbergraph_Projectile_TED_SaltNBattery_Daggerstorm(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USocketComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_RandomIntegerInRange_ReturnValue1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class AActor* CallFunc_Array_Get_Item1, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_RandomIntegerInRange_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTransform& CallFunc_Array_Get_Item2, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
};

}


