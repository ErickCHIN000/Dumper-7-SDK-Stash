#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x438 - 0x378)
// BlueprintGeneratedClass LightProjectile_SM_LavaGoodTime.LightProjectile_SM_LavaGoodTime_C
class ULightProjectile_SM_LavaGoodTime_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_12AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       LavaEQS;                                           // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProjectile_SM_LavaGoodTime_C* GetDefaultObj();

	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
	void OnExplode(class ULightProjectile* Projectile);
	void FireProj(class ULightProjectile* Projectile, class AActor* AttachedActor, const struct FVector& EndLoc, class AActor* TargetActor, bool AttachedActorIsValid, bool Temp_bool_Variable, class AActor* CallFunc_GetAttachedDamageReceiverActor_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, class AActor* K2Node_Select1_Default, uint8 CallFunc_GetFiringPatternID_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


