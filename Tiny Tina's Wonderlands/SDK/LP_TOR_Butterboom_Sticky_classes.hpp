#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x384 - 0x380)
// BlueprintGeneratedClass LP_TOR_Butterboom_Sticky.LP_TOR_Butterboom_Sticky_C
class ULP_TOR_Butterboom_Sticky_C : public ULightProjectile_TOR_PS_GyroJet_Sticky_C
{
public:
	int32                                        ChildProjNum;                                      // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULP_TOR_Butterboom_Sticky_C* GetDefaultObj();

	void SpawnBombKernals(class ULightProjectile* Projectile, float CallFunc_RandomFloatInRange_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, int32 Temp_int_Array_Index_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_RandomFloatInRange_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue4, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void OnExplode(class ULightProjectile* Projectile, bool AttachedToEnemy);
};

}


