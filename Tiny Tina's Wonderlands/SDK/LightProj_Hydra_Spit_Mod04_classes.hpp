#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3A8 - 0x380)
// BlueprintGeneratedClass LightProj_Hydra_Spit_Mod04.LightProj_Hydra_Spit_Mod04_C
class ULightProj_Hydra_Spit_Mod04_C : public ULightProj_Hydra_Spit_C
{
public:
	struct FGameplayTagContainer                 BossTags;                                          // 0x380(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                         RandIntStream;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProj_Hydra_Spit_Mod04_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetSource_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool Temp_bool_Variable, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, class ASpellActor_Hydra_Base_C* K2Node_DynamicCast_AsSpell_Actor_Hydra_Base, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_FindNavMeshPoint_Result, bool CallFunc_FindNavMeshPoint_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool Temp_bool_Variable1, class AActor* CallFunc_GetSource_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FTransform& K2Node_Select_Default, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}


