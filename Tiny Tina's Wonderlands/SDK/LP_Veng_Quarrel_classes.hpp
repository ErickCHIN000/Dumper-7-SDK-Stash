#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x384 - 0x378)
// BlueprintGeneratedClass LP_Veng_Quarrel.LP_Veng_Quarrel_C
class ULP_Veng_Quarrel_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_4205[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BonusVengeanceDuration;                            // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULP_Veng_Quarrel_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, TArray<struct FGbxActionRegister>& K2Node_MakeArray_Array, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


