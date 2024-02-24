#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_Damage_Base.MMC_Damage_Base_C
class UMMC_Damage_Base_C : public UNWXDamageModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UMMC_Damage_Base_C* GetDefaultObj();

	void OneShotProtection_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, struct FTagValueContainer& MMCIntermediateOutputs, double* OutDamage, double LDamage, class UNWXAbilitySystemComponent* LAbilitySystem, class AActor* LHitActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Get_Accessibility_Zone__Realm_Power, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 CallFunc_GetCurrentRealmPower_RealmPower, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void Min1Health_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, struct FTagValueContainer& MMCIntermediateOutputs, double* OutDamage, double LDamage, class UNWXAbilitySystemComponent* LAbilitySystem, class AActor* LHitActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void Blocking_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, struct FTagValueContainer& MMCIntermediateOutputs, double* OutDamage, const struct FHitResult& HitResult, const struct FGameplayEffectContextHandle& EffectContext, double ImpactBlockingAngle, double CreatureBlockingAngle, class AActor* HitActor, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, const struct FRotator& CallFunc_FindRelativeLookAtRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindRelativeLookAtRotation_ReturnValue_1, double CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Abs_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_BlockingTag_BlockingTag, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTargetAggregatedTags_ReturnValue, bool CallFunc_HasTag_ReturnValue_2, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const struct FGameplayTag& CallFunc_MeleeDamageTag_MeleeTag, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Abs_ReturnValue_2, const struct FGameplayTag& CallFunc_DamageBlockedAmountTag_BlockingTag, bool CallFunc_IsValid_ReturnValue, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1, float CallFunc_Add_Value_ImplicitCast);
	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, float CallFunc_NWXCalculateBaseMagnitude_ReturnValue, double CallFunc_Blocking_Modify_OutDamage, double CallFunc_Min1Health_Modify_OutDamage, double CallFunc_OneShotProtection_Modify_OutDamage, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Blocking_Modify_InDamage_ImplicitCast);
};

}


