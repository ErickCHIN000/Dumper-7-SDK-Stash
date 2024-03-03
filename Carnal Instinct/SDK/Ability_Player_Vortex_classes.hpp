#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x33C - 0x2E4)
// BlueprintGeneratedClass Ability_Player_Vortex.Ability_Player_Vortex_C
class AAbility_Player_Vortex_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_2979[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Range;                                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2982[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleComponent;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectEnabled;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2987[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSurfaceAngle;                                   // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VortexSpeed;                                       // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CollisionHeight;                                   // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstUseManaCost;                                  // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       VortexParticle;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SoundComponent;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexLocation;                                    // 0x330(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_Vortex_C* GetDefaultObj();

	void AttemptToCast(bool* Result, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result);
	void CheckForEnemies(const TArray<class AActor*>& L_HitActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetDamage_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FF_HitData& K2Node_MakeStruct_F_HitData, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_CapsuleTraceMultiForObjects_OutHits, bool CallFunc_CapsuleTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void AttempToCastEvent();
	void ClearAttemptToCastTimer();
	void SpawnParticle();
	void DeactivateParticle();
	void ReceiveTick(float DeltaSeconds);
	void Pressed();
	void Released();
	void Ended(enum class E_AbilityEndResult Result);
	void PlaySound();
	void StopSound();
	void Effect();
	void UpdateVortex();
	void ExecuteUbergraph_Ability_Player_Vortex(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_AttemptToCast_Result, bool CallFunc_AttemptToCast_Result_1, float K2Node_Event_DeltaSeconds, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_IsUsingAbility_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location, const struct FVector& CallFunc_GetEffectLocation_Location_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsCasting_Result, const struct FTransform& CallFunc_GetSurfaceTransform_Transform, enum class E_AbilityEndResult K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage_1, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_PlayAbilityMontage_Duration_1, const struct FVector& CallFunc_GetEffectLocation_Location_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location_3, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
};

}


