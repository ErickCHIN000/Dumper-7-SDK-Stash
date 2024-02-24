#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x4B0 - 0x380)
// BlueprintGeneratedClass LightProj_BL.LightProj_BL_C
class ULightProj_BL_C : public ULightProjectile_Crossbow_Sawblade_Base_C
{
public:
	struct FEnvQueryParams                       FindChainTargetEQS;                                // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                ChainProjectile;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ChainTargets;                                      // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Chain;                                             // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, class UParticleSystem*>  ExplosionEffectCollection;                         // 0x458(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        ChildProjDMGScalar;                                // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionDMGScalar;                                // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_BL_C* GetDefaultObj();

	void ManageBoltlashBehavior(class ULightProjectile* Projectile, const struct FHitResult& Hit, int32 ArrowsUntilExplode, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetDamageCauser_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsOak_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetHitLocation_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue1, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile1, bool K2Node_DynamicCast_bSuccess1, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsOak_Damage_Type1, bool K2Node_ClassDynamicCast_bSuccess1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetHitActor_ReturnValue2, class AActor* CallFunc_GetHitActor_ReturnValue3, class AActor* CallFunc_GetHitActor_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetHitLocation_ReturnValue1, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& Temp_struct_Variable, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, float CallFunc_BreakHitResult_Distance2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool Temp_bool_IsClosed_Variable, const struct FCriticalHitDamageOverrides& K2Node_MakeStruct_CriticalHitDamageOverrides, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}

