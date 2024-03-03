#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x348 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_DrainHealth.Ability_Player_DrainHealth_C
class AAbility_Player_DrainHealth_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_29BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Range;                                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              BeamParticle;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectEnabled;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SpawnSocket;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GoesThroughObjects;                                // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrainScalar;                                       // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SparksParticle;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExtendedStatComponent_C*              HealthComponent;                                   // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DrainBeamParticle;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DrainHitParticle;                                  // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SoundComponent;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_DrainHealth_C* GetDefaultObj();

	void AttemptToCast(bool* Result, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result);
	void CheckForEnemies(const TArray<class AActor*>& L_HitActors, float CallFunc_GetDamage_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FF_HitData& K2Node_MakeStruct_F_HitData, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType);
	void ClearAttemptToCastTimer();
	void AttempToCastEvent();
	void SpawnBeamParticle();
	void DestroyBeamParticle();
	void ReceiveTick(float DeltaSeconds);
	void DrainHealth();
	void UpdateSparksParticle(class USceneComponent* AttachToComponent);
	void DeactivateSparksParticle();
	void ReceiveBeginPlay();
	void UpdateEffect();
	void Pressed();
	void Released();
	void Effect();
	void Ended(enum class E_AbilityEndResult Result);
	void PlaySound();
	void StopSound();
	void ExecuteUbergraph_Ability_Player_DrainHealth(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AttemptToCast_Result, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_DeltaSeconds, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, bool CallFunc_AttemptToCast_Result_1, float CallFunc_PlayAbilityMontage_Duration, float CallFunc_GetDamage_ReturnValue, class USceneComponent* K2Node_CustomEvent_AttachToComponent, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, const struct FVector& CallFunc_GetEffectLocation_Location, bool CallFunc_GetIsCasting_Result, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_GetBeamTransform_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, enum class E_AbilityEndResult K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage_1, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_PlayAbilityMontage_Duration_1, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


