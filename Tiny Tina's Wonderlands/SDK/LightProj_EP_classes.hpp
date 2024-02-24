#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x458 - 0x380)
// BlueprintGeneratedClass LightProj_EP.LightProj_EP_C
class ULightProj_EP_C : public ULightProjectile_Crossbow_Bolt_AR_C
{
public:
	bool                                         ShouldChain;                                       // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       FindChainTargetEQS;                                // 0x388(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                ChainProjectile;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CritChainProjectile;                               // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_Chain_Proj;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_EP_C* GetDefaultObj();

	void InitializeChainProjectile(class UClass* Chain_Projectile_Class, const struct FVector& Start_Location, const struct FVector& End_Location, const struct FHitResult& HitResult, class ULightProjectile* Parent_Projectile, float Chain_Projectile_Damage_Scalar, class AActor* Chain_Target, struct FLightProjectileInitializationData* LightProjectileInitializationData, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetModifierValue_ReturnValue, enum class EWeaponShotModifierType CallFunc_GetModifierType_ReturnValue, class UImpactData* CallFunc_GetImpactData_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical);
	void ChainProjectileToTarget(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool Crit, class AActor* ChainTarget, const struct FVector& EndLoc, const struct FVector& StartLoc, const struct FVector& CallFunc_GetHitNormal_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FLightProjectileInitializationData& CallFunc_InitializeChainProjectile_LightProjectileInitializationData, class AActor* CallFunc_GetHitActor_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, bool Temp_bool_IsClosed_Variable, const struct FLightProjectileInitializationData& CallFunc_InitializeChainProjectile_LightProjectileInitializationData1, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


