#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x112A - 0x1108)
// BlueprintGeneratedClass BP_SesterCrossbowBase.BP_SesterCrossbowBase_C
class ABP_SesterCrossbowBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Candle;                                            // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Crossbow_low;                                      // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMelee_;                                          // 0x1128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Shoot_In_Place;                                    // 0x1129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SesterCrossbowBase_C* GetDefaultObj();

	void TraceBehind(TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName);
	void OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName);
	void OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName);
	void OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName);
	void OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB(class FName NotifyName);
	void OnNotifyEnd_AD966C164EF3767F28A521933537316C(class FName NotifyName);
	void OnNotifyBegin_AD966C164EF3767F28A521933537316C(class FName NotifyName);
	void OnInterrupted_AD966C164EF3767F28A521933537316C(class FName NotifyName);
	void OnBlendOut_AD966C164EF3767F28A521933537316C(class FName NotifyName);
	void OnCompleted_AD966C164EF3767F28A521933537316C(class FName NotifyName);
	void OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName);
	void OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName);
	void OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName);
	void OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName);
	void OnCompleted_C454EFBC424D25F96F1EF2809C2F4343(class FName NotifyName);
	void OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName);
	void OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName);
	void OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName);
	void OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName);
	void OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B(class FName NotifyName);
	void OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName);
	void OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName);
	void OnInterrupted_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName);
	void OnBlendOut_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName);
	void OnCompleted_6AB0A1014188C0DAC083139FC2477174(class FName NotifyName);
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void OnWasAggroed();
	void TransitionToMelee();
	void ClientPlayImpactSound(const struct FVector& ImpactLocation, class AActor* HitActor);
	void ShootCrossbow();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_SesterCrossbowBase(int32 EntryPoint, bool Temp_bool_Variable, class FName K2Node_CustomEvent_NotifyName_20, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class ASesterCrossbow_C* K2Node_DynamicCast_AsSester_Crossbow, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_22, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_LineOfSightTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1, bool K2Node_DynamicCast_bSuccess_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_Event_ImpactLocation, class AActor* K2Node_Event_HitActor, class FName K2Node_CustomEvent_NotifyName_21, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_CalcRangeAttackTargetLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class ABP_CrossbowProjectile_Sesters_C* CallFunc_FinishSpawningActor_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_DistanceFromPlayer, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_23, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& K2Node_Event_DirectionToSource, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class FName K2Node_CustomEvent_NotifyName_24, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9);
};

}


