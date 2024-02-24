#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1178 - 0x1120)
// BlueprintGeneratedClass RangedLightBrigand.RangedLightBrigand_C
class ARangedLightBrigand_C : public ARangedEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  CryptLightRig;                                     // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x1130(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Brigand_Club;                                      // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Crossbow_low_0;                                    // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LavaBlade_LP_01_rig;                               // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_0_NewTrack_0_257CD6574AF15F9578F1A5B6435E851F; // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2_0__Direction_257CD6574AF15F9578F1A5B6435E851F; // 0x1154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3983[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2_0;                                      // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ReloadInterruptTimerhandle;                        // 0x1160(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedAggroMontage_;                               // 0x1168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingDamagedAnim_;                             // 0x1169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRunningAway_;                                    // 0x116A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3990[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SwitchToMeleeDistance;                             // 0x116C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MeleeCheckTimer;                                   // 0x1170(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARangedLightBrigand_C* GetDefaultObj();

	void Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AI_SetBlackBoardSwitchToMelee(class AController* CallFunc_GetController_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent);
	void GetRangedAtkComponent(class USkeletalMeshComponent** WeaponSkMesh);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void Timeline_2_0__FinishedFunc();
	void Timeline_2_0__UpdateFunc();
	void OnNotifyEnd_7D44997046C55BA52D9193AED1257F02(class FName NotifyName);
	void OnNotifyBegin_7D44997046C55BA52D9193AED1257F02(class FName NotifyName);
	void OnInterrupted_7D44997046C55BA52D9193AED1257F02(class FName NotifyName);
	void OnBlendOut_7D44997046C55BA52D9193AED1257F02(class FName NotifyName);
	void OnCompleted_7D44997046C55BA52D9193AED1257F02(class FName NotifyName);
	void OnNotifyEnd_C57EB6F547BD03B96317DFA2E1ADF445(class FName NotifyName);
	void OnNotifyBegin_C57EB6F547BD03B96317DFA2E1ADF445(class FName NotifyName);
	void OnInterrupted_C57EB6F547BD03B96317DFA2E1ADF445(class FName NotifyName);
	void OnBlendOut_C57EB6F547BD03B96317DFA2E1ADF445(class FName NotifyName);
	void OnCompleted_C57EB6F547BD03B96317DFA2E1ADF445(class FName NotifyName);
	void OnNotifyEnd_5C1FD55E4D1AEF521C34B49D49E23279(class FName NotifyName);
	void OnNotifyBegin_5C1FD55E4D1AEF521C34B49D49E23279(class FName NotifyName);
	void OnInterrupted_5C1FD55E4D1AEF521C34B49D49E23279(class FName NotifyName);
	void OnBlendOut_5C1FD55E4D1AEF521C34B49D49E23279(class FName NotifyName);
	void OnCompleted_5C1FD55E4D1AEF521C34B49D49E23279(class FName NotifyName);
	void OnNotifyEnd_ED7BBD694FF77EF65BE0ED9FEE79705D(class FName NotifyName);
	void OnNotifyBegin_ED7BBD694FF77EF65BE0ED9FEE79705D(class FName NotifyName);
	void OnInterrupted_ED7BBD694FF77EF65BE0ED9FEE79705D(class FName NotifyName);
	void OnBlendOut_ED7BBD694FF77EF65BE0ED9FEE79705D(class FName NotifyName);
	void OnCompleted_ED7BBD694FF77EF65BE0ED9FEE79705D(class FName NotifyName);
	void OnNotifyEnd_6322298C4740FE601F80268FE7C94615(class FName NotifyName);
	void OnNotifyBegin_6322298C4740FE601F80268FE7C94615(class FName NotifyName);
	void OnInterrupted_6322298C4740FE601F80268FE7C94615(class FName NotifyName);
	void OnBlendOut_6322298C4740FE601F80268FE7C94615(class FName NotifyName);
	void OnCompleted_6322298C4740FE601F80268FE7C94615(class FName NotifyName);
	void OnNotifyEnd_C50320A94DBEDBBDD2B82DAC5FF548EF(class FName NotifyName);
	void OnNotifyBegin_C50320A94DBEDBBDD2B82DAC5FF548EF(class FName NotifyName);
	void OnInterrupted_C50320A94DBEDBBDD2B82DAC5FF548EF(class FName NotifyName);
	void OnBlendOut_C50320A94DBEDBBDD2B82DAC5FF548EF(class FName NotifyName);
	void OnCompleted_C50320A94DBEDBBDD2B82DAC5FF548EF(class FName NotifyName);
	void OnNotifyEnd_5784AB594CAEB578378432B898B0CF8E(class FName NotifyName);
	void OnNotifyBegin_5784AB594CAEB578378432B898B0CF8E(class FName NotifyName);
	void OnInterrupted_5784AB594CAEB578378432B898B0CF8E(class FName NotifyName);
	void OnBlendOut_5784AB594CAEB578378432B898B0CF8E(class FName NotifyName);
	void OnCompleted_5784AB594CAEB578378432B898B0CF8E(class FName NotifyName);
	void OnNotifyEnd_1525C9054A60E8C68FBCEEA12F0C6A38(class FName NotifyName);
	void OnNotifyBegin_1525C9054A60E8C68FBCEEA12F0C6A38(class FName NotifyName);
	void OnInterrupted_1525C9054A60E8C68FBCEEA12F0C6A38(class FName NotifyName);
	void OnBlendOut_1525C9054A60E8C68FBCEEA12F0C6A38(class FName NotifyName);
	void OnCompleted_1525C9054A60E8C68FBCEEA12F0C6A38(class FName NotifyName);
	void OnNotifyEnd_134DC93C409ACDF9C0C705BFC494BF90(class FName NotifyName);
	void OnNotifyBegin_134DC93C409ACDF9C0C705BFC494BF90(class FName NotifyName);
	void OnInterrupted_134DC93C409ACDF9C0C705BFC494BF90(class FName NotifyName);
	void OnBlendOut_134DC93C409ACDF9C0C705BFC494BF90(class FName NotifyName);
	void OnCompleted_134DC93C409ACDF9C0C705BFC494BF90(class FName NotifyName);
	void OnNotifyEnd_BDE2537941E3AF9AD94A83AF88FDF753(class FName NotifyName);
	void OnNotifyBegin_BDE2537941E3AF9AD94A83AF88FDF753(class FName NotifyName);
	void OnInterrupted_BDE2537941E3AF9AD94A83AF88FDF753(class FName NotifyName);
	void OnBlendOut_BDE2537941E3AF9AD94A83AF88FDF753(class FName NotifyName);
	void OnCompleted_BDE2537941E3AF9AD94A83AF88FDF753(class FName NotifyName);
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void RangedRetreatAnimSequence();
	void CheckForReloadInterrupt();
	void MeleeBasicAttackAnimSequence();
	void SwitchToMeleeMode();
	void PlayHitReactionMontage();
	void PlayRunAwayMontage();
	void FadeOnDeath();
	void LaunchProjectile();
	void RangedAttackAnimSequence();
	void SwitchWeapons();
	void ReceiveBeginPlay();
	void SetMeleeModeOnAnimBP();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void DropWeapon();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void OnFinishTetherSystemWalkBack();
	void PlayLightHitReaction();
	void SelectAttack(float DistanceFromPlayer);
	void CheckShouldSwitchToMelee();
	void EnableFrozenRiverLightRig(bool Enable_);
	void ExecuteUbergraph_RangedLightBrigand(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_47, class FName K2Node_CustomEvent_NotifyName_46, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_45, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_44, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_43, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_42, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_41, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_40, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_39, class FName K2Node_CustomEvent_NotifyName_38, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_37, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_36, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_35, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_34, class FName K2Node_CustomEvent_NotifyName_33, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_29, class FName K2Node_CustomEvent_NotifyName_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName Temp_name_Variable_5, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class FName Temp_name_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, class FName Temp_name_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, class FName Temp_name_Variable_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, class FName Temp_name_Variable_9, int32 Temp_int_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, bool Temp_bool_Variable_1, class UAnimMontage* Temp_object_Variable_5, class UAnimMontage* Temp_object_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_49, bool CallFunc_IsValid_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_48, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_50, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class FName K2Node_CustomEvent_NotifyName_49, float CallFunc_GetActiveProjectileGravityScale_GravityScale, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetActiveProjectileLaunchVelocity_Velocity, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_CalcRangeAttackVelocityFlexible_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARockProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_51, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMediumRangedBrigandAnimBP_C* K2Node_DynamicCast_AsMedium_Ranged_Brigand_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& K2Node_Event_DirectionToSource, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_11, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class ARangedBrigandSpawner_C* K2Node_DynamicCast_AsRanged_Brigand_Spawner, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_2, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Not_PreBool_ReturnValue_1, class UAnimMontage* K2Node_Select_Default_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8, class UAnimMontage* K2Node_Select_Default_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, float K2Node_Event_DistanceFromPlayer, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool K2Node_Event_Enable_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


