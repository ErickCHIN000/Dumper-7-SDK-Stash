#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1C8 - 0x110)
// BlueprintGeneratedClass ShieldAug_UndeadPact.ShieldAug_UndeadPact_C
class UShieldAug_UndeadPact_C : public UShieldAugment_Triggerable
{
public:
	struct FEnvQueryParams                       EQS;                                               // 0x110(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UShieldAug_UndeadPact_C* GetDefaultObj();

	void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, const TArray<class AActor*>& TargetActors, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Length_ReturnValue1, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


