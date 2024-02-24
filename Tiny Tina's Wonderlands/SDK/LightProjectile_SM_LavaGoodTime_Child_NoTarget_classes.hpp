#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x438 - 0x438)
// BlueprintGeneratedClass LightProjectile_SM_LavaGoodTime_Child_NoTarget.LightProjectile_SM_LavaGoodTime_Child_NoTarget_C
class ULightProjectile_SM_LavaGoodTime_Child_NoTarget_C : public ULightProjectile_SM_LavaGoodTime_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_SM_LavaGoodTime_Child_NoTarget_C* GetDefaultObj();

	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
	void FireProj(class ULightProjectile* Projectile, class AActor* TargetActor, const struct FVector& EndLoc, class AActor* AttachedActor, bool AttachedActorIsValid, bool Temp_bool_Variable, class AActor* CallFunc_GetAttachedDamageReceiverActor_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, class AActor* K2Node_Select1_Default, uint8 CallFunc_GetFiringPatternID_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


