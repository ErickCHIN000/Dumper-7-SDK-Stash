#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x1188 - 0x1108)
// BlueprintGeneratedClass BP_UnderdogBase.BP_UnderdogBase_C
class ABP_UnderdogBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  CryptLightRig;                                     // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sphere;                                            // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InterpPhysics_Interp_A75234574B7BB68CD7EB698D9C4FC76E; // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                InterpPhysics__Direction_A75234574B7BB68CD7EB698D9C4FC76E; // 0x1124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    InterpPhysics;                                     // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMelee_;                                          // 0x1130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AttackingWithRightHand_;                           // 0x1131(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HitCounter;                                        // 0x1134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FellToDeath_;                                      // 0x1138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingHeavyReaction_;                           // 0x1139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        AlreadyHit;                                        // 0x1140(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UParticleSystemComponent*              GroundPoisonEmitter;                               // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BodyPoisonEmitter;                                 // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PoisonCloudDuration;                               // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThrowRange;                                        // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalPreDeathPosition;                             // 0x1168(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WillChangeToMeleeAfterAnim;                        // 0x1174(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHeadIsOff;                                        // 0x1175(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSuicideToDeath_;                                  // 0x1176(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsPlayingSuicideAnim_;                            // 0x1177(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bRangeCheckFailed;                                 // 0x1178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAdvancedEnemySpawner_C*               EnemySpawner;                                      // 0x1180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_UnderdogBase_C* GetDefaultObj();

	void Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HideSwords();
	void SwordThrowLineOfSightCheck(bool* bClear, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_CalcRangeAttackTargetLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SpawnPoisonDecal(const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default);
	void ExecuteAttack(float* AI_WaitTime);
	void InterpPhysics__FinishedFunc();
	void InterpPhysics__UpdateFunc();
	void OnNotifyEnd_F30E7AB24A9457B6394DF2AFB5C9ECAD(class FName NotifyName);
	void OnNotifyBegin_F30E7AB24A9457B6394DF2AFB5C9ECAD(class FName NotifyName);
	void OnInterrupted_F30E7AB24A9457B6394DF2AFB5C9ECAD(class FName NotifyName);
	void OnBlendOut_F30E7AB24A9457B6394DF2AFB5C9ECAD(class FName NotifyName);
	void OnCompleted_F30E7AB24A9457B6394DF2AFB5C9ECAD(class FName NotifyName);
	void OnNotifyEnd_1C7338A444F018DF6BB9C492F1D1044E(class FName NotifyName);
	void OnNotifyBegin_1C7338A444F018DF6BB9C492F1D1044E(class FName NotifyName);
	void OnInterrupted_1C7338A444F018DF6BB9C492F1D1044E(class FName NotifyName);
	void OnBlendOut_1C7338A444F018DF6BB9C492F1D1044E(class FName NotifyName);
	void OnCompleted_1C7338A444F018DF6BB9C492F1D1044E(class FName NotifyName);
	void OnNotifyEnd_C6B1E73E465994FB344CFCB4BC853B85(class FName NotifyName);
	void OnNotifyBegin_C6B1E73E465994FB344CFCB4BC853B85(class FName NotifyName);
	void OnInterrupted_C6B1E73E465994FB344CFCB4BC853B85(class FName NotifyName);
	void OnBlendOut_C6B1E73E465994FB344CFCB4BC853B85(class FName NotifyName);
	void OnCompleted_C6B1E73E465994FB344CFCB4BC853B85(class FName NotifyName);
	void OnNotifyEnd_903961DA4A9402266AA17DBCE0BDDA5B(class FName NotifyName);
	void OnNotifyBegin_903961DA4A9402266AA17DBCE0BDDA5B(class FName NotifyName);
	void OnInterrupted_903961DA4A9402266AA17DBCE0BDDA5B(class FName NotifyName);
	void OnBlendOut_903961DA4A9402266AA17DBCE0BDDA5B(class FName NotifyName);
	void OnCompleted_903961DA4A9402266AA17DBCE0BDDA5B(class FName NotifyName);
	void OnNotifyEnd_9EE371B7424FC3C1CA8897B8DAB64E85(class FName NotifyName);
	void OnNotifyBegin_9EE371B7424FC3C1CA8897B8DAB64E85(class FName NotifyName);
	void OnInterrupted_9EE371B7424FC3C1CA8897B8DAB64E85(class FName NotifyName);
	void OnBlendOut_9EE371B7424FC3C1CA8897B8DAB64E85(class FName NotifyName);
	void OnCompleted_9EE371B7424FC3C1CA8897B8DAB64E85(class FName NotifyName);
	void OnStoneStunOver();
	void DH_SimUnderdogSwords();
	void StartSuicideAttack();
	void Spawn_Head_VfX();
	void Throw_Sword();
	void ThrowHeadAndPoisonCloud();
	void MeleeAttack();
	void SwitchToMelee();
	void RangedAttack(float Distance_From_player);
	void SwitchToRanged();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayMicroHitReaction();
	void PlayLightHitReaction();
	void ResetHitCounter();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayHitReactionMontage();
	void RagdollAfterDeath();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EnableFrozenRiverLightRig(bool Enable_);
	void DeathStuff();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_UnderdogBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, bool Temp_bool_Variable_2, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, bool Temp_bool_Variable_3, class UAnimMontage* Temp_object_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_3, bool Temp_bool_Variable_4, class UAnimMontage* Temp_object_Variable_7, class UAnimMontage* Temp_object_Variable_8, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName Temp_name_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SwordThrowLineOfSightCheck_bClear, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_SwordThrowLineOfSightCheck_bClear_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUnderDog_AnimBlueprint_C* K2Node_DynamicCast_AsUnder_Dog_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SwordThrowLineOfSightCheck_bClear_2, bool CallFunc_Not_PreBool_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_22, class AAdvancedEnemySpawner_StormMode_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_23, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AUnderdogSpawner_C* K2Node_DynamicCast_AsUnderdog_Spawner, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABPPoisonCloud_C* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_Variable_5, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_CalcRangeAttackTargetLocation_ReturnValue, class ABP_UnderdogThrownHead_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class ABP_UnderdogThrownSword_C* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_Distance_From_player, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, bool CallFunc_BooleanOR_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_DistanceFromPlayer, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UUnderDog_AnimBlueprint_C* K2Node_DynamicCast_AsUnder_Dog_Anim_Blueprint_1, bool K2Node_DynamicCast_bSuccess_4, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UAnimMontage* K2Node_Select_Default_1, class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_5, class UDHCharacterMovementComponent* K2Node_DynamicCast_AsDHCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_6, class UAnimMontage* K2Node_Select_Default_2, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, class UAnimMontage* K2Node_Select_Default_3, class UAnimMontage* K2Node_Select_Default_4, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, float CallFunc_Add_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& K2Node_Event_DirectionToSource, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class UAnimMontage* Temp_object_Variable_9, class FName K2Node_CustomEvent_NotifyName_24, class UAnimMontage* Temp_object_Variable_10, class UAnimMontage* K2Node_Select_Default_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UUnderDog_AnimBlueprint_C* K2Node_DynamicCast_AsUnder_Dog_Anim_Blueprint_2, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_IsSimulatingPhysics_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class UClass* CallFunc_GetObjectClass_ReturnValue, bool K2Node_Event_Enable_, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, bool Temp_bool_Variable_6, class UAnimMontage* K2Node_Select_Default_6, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10);
};

}

