#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x438 - 0x380)
// BlueprintGeneratedClass LightProjectile_Crossbow_Apex.LightProjectile_Crossbow_Apex_C
class ULightProjectile_Crossbow_Apex_C : public ULightProjectile_Crossbow_Bolt_PS_DAL_C
{
public:
	struct FEnvQueryParams                       HomingTargetSearch;                                // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProjectile_Crossbow_Apex_C* GetDefaultObj();

	void TryEnableHoming(class ULightProjectile* Projectile, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


