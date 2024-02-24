#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC9 (0x11D1 - 0x1108)
// BlueprintGeneratedClass BP_BladeSlaveBase.BP_BladeSlaveBase_C
class ABP_BladeSlaveBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       BodyAudio;                                         // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MouthAudio;                                        // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LeftHandAudio;                                     // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       RightHandAudio;                                    // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       WalkingSoundLoop;                                  // 0x1130(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CryptLightRig;                                     // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sphere;                                            // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Cloth_Jiggle__Direction_9CE0438C4940B23D9DCEB9AC34A1F837; // 0x1148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Cloth_Jiggle;                                      // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_6_Jiggle_4B95935B473DCB6D53AC818336FDBF1E; // 0x1158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_6__Direction_4B95935B473DCB6D53AC818336FDBF1E; // 0x115C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_6;                                        // 0x1160(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_5_Jiggle_7CDACD0D4B7C68C0F53E589B0F56F04B; // 0x1168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_5__Direction_7CDACD0D4B7C68C0F53E589B0F56F04B; // 0x116C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_5;                                        // 0x1170(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_4_Jiggle_011709DF4083FAEA08D06E82E618A53D; // 0x1178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_4__Direction_011709DF4083FAEA08D06E82E618A53D; // 0x117C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_4;                                        // 0x1180(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Jiggle_553F4DD14B875514872A29AF5ABEB21A; // 0x1188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_553F4DD14B875514872A29AF5ABEB21A; // 0x118C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x1190(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_Wheel;                                      // 0x1198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_Scissors;                                   // 0x11A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_Heavy_Close;                                // 0x11A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttackingWithRightHand_;                           // 0x11B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HitCounter;                                        // 0x11B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ScissorTraceTimer;                                 // 0x11B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LeftHipJiggleAlpha;                                // 0x11C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightHipJiggleAlpha;                               // 0x11C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightElbowJiggleAlpha;                             // 0x11C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftElbowJiggleAlpha;                              // 0x11CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayingHeadBobble;                              // 0x11D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_BladeSlaveBase_C* GetDefaultObj();

	void GetEyesComponent(class UStaticMeshComponent** Mesh);
	void GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default);
	void Cloth_Jiggle__FinishedFunc();
	void Cloth_Jiggle__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void OnNotifyEnd_DA980BB0426A2B414C26C79DD8045245(class FName NotifyName);
	void OnNotifyBegin_DA980BB0426A2B414C26C79DD8045245(class FName NotifyName);
	void OnInterrupted_DA980BB0426A2B414C26C79DD8045245(class FName NotifyName);
	void OnBlendOut_DA980BB0426A2B414C26C79DD8045245(class FName NotifyName);
	void OnCompleted_DA980BB0426A2B414C26C79DD8045245(class FName NotifyName);
	void OnNotifyEnd_60B0EF9449947AB0D9173EA1301AF14B(class FName NotifyName);
	void OnNotifyBegin_60B0EF9449947AB0D9173EA1301AF14B(class FName NotifyName);
	void OnInterrupted_60B0EF9449947AB0D9173EA1301AF14B(class FName NotifyName);
	void OnBlendOut_60B0EF9449947AB0D9173EA1301AF14B(class FName NotifyName);
	void OnCompleted_60B0EF9449947AB0D9173EA1301AF14B(class FName NotifyName);
	void OnNotifyEnd_D663696C41D7416ABF593B9FD7DC59B8(class FName NotifyName);
	void OnNotifyBegin_D663696C41D7416ABF593B9FD7DC59B8(class FName NotifyName);
	void OnInterrupted_D663696C41D7416ABF593B9FD7DC59B8(class FName NotifyName);
	void OnBlendOut_D663696C41D7416ABF593B9FD7DC59B8(class FName NotifyName);
	void OnCompleted_D663696C41D7416ABF593B9FD7DC59B8(class FName NotifyName);
	void OnNotifyEnd_3BDEA23D465624FABCFA1295746457E9(class FName NotifyName);
	void OnNotifyBegin_3BDEA23D465624FABCFA1295746457E9(class FName NotifyName);
	void OnInterrupted_3BDEA23D465624FABCFA1295746457E9(class FName NotifyName);
	void OnBlendOut_3BDEA23D465624FABCFA1295746457E9(class FName NotifyName);
	void OnCompleted_3BDEA23D465624FABCFA1295746457E9(class FName NotifyName);
	void ScissorTrace();
	void EndScissorTrace();
	void StartScissorTrace();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void ReceiveTick(float DeltaSeconds);
	void SelectAttack(float DistanceFromPlayer);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void PlayLightHitReaction();
	void ResetHitCounter();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void PlayHitReactionMontage();
	void RagdollAfterDeath();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void EnableFrozenRiverLightRig(bool Enable_);
	void TickMovementSoundLoop();
	void ExecuteUbergraph_BP_BladeSlaveBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DeltaSeconds, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_DistanceFromPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, class FName K2Node_CustomEvent_NotifyName_19, bool K2Node_SwitchInteger_CmpSuccess, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FVector& K2Node_Event_DirectionToSource, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class FName K2Node_CustomEvent_NotifyName_18, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, bool K2Node_Event_Enable_, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9);
};

}


