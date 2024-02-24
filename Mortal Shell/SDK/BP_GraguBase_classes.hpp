#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x1238 - 0x1108)
// BlueprintGeneratedClass BP_GraguBase.BP_GraguBase_C
class ABP_GraguBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Gragu_GroundSnowContinous;                       // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ShieldAudio;                                       // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MorningstarAudio;                                  // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BodyAudio;                                         // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MouthAudio;                                        // 0x1130(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       FootAudio;                                         // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Gragu_Walk_Loop_01_Cue;                            // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Gragu_IdleSounds;                                  // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CryptLightRig;                                     // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Gragu_Shield;                                      // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_Shield_Slam;                                // 0x1160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Atttack_Shield_Punch;                              // 0x1168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_Uppercut;                                   // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Attack_TopDown;                                    // 0x1178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShieldSlamTimer;                                   // 0x1180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShieldPunchTimer;                                  // 0x1188(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        HitCounter;                                        // 0x1190(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1046[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ChainTraceTimer;                                   // 0x1198(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WalkLoopTimer;                                     // 0x11A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ShieldSlamCounter;                                 // 0x11A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxShieldSlamsUntilBreaks;                         // 0x11AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            ShieldSlam_Hit;                                    // 0x11B0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_GraguBase_C* GetDefaultObj();

	void EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip);
	void GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	bool HasShield(bool CallFunc_Less_IntInt_ReturnValue);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void OnNotifyEnd_4D5F3DA942D1898C58926F8A7DD49A73(class FName NotifyName);
	void OnNotifyBegin_4D5F3DA942D1898C58926F8A7DD49A73(class FName NotifyName);
	void OnInterrupted_4D5F3DA942D1898C58926F8A7DD49A73(class FName NotifyName);
	void OnBlendOut_4D5F3DA942D1898C58926F8A7DD49A73(class FName NotifyName);
	void OnCompleted_4D5F3DA942D1898C58926F8A7DD49A73(class FName NotifyName);
	void OnNotifyEnd_AFDF9D6640CE0FC751E823BD2391DC67(class FName NotifyName);
	void OnNotifyBegin_AFDF9D6640CE0FC751E823BD2391DC67(class FName NotifyName);
	void OnInterrupted_AFDF9D6640CE0FC751E823BD2391DC67(class FName NotifyName);
	void OnBlendOut_AFDF9D6640CE0FC751E823BD2391DC67(class FName NotifyName);
	void OnCompleted_AFDF9D6640CE0FC751E823BD2391DC67(class FName NotifyName);
	void OnNotifyEnd_50A285CA4620CB79EE3225AEC9D348EA(class FName NotifyName);
	void OnNotifyBegin_50A285CA4620CB79EE3225AEC9D348EA(class FName NotifyName);
	void OnInterrupted_50A285CA4620CB79EE3225AEC9D348EA(class FName NotifyName);
	void OnBlendOut_50A285CA4620CB79EE3225AEC9D348EA(class FName NotifyName);
	void OnCompleted_50A285CA4620CB79EE3225AEC9D348EA(class FName NotifyName);
	void OnNotifyEnd_A2D64A064D4AF95D6FBFF49F21BE3654(class FName NotifyName);
	void OnNotifyBegin_A2D64A064D4AF95D6FBFF49F21BE3654(class FName NotifyName);
	void OnInterrupted_A2D64A064D4AF95D6FBFF49F21BE3654(class FName NotifyName);
	void OnBlendOut_A2D64A064D4AF95D6FBFF49F21BE3654(class FName NotifyName);
	void OnCompleted_A2D64A064D4AF95D6FBFF49F21BE3654(class FName NotifyName);
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void ShieldSlam();
	void ShieldPunch();
	void ClearTraceTimers();
	void EnableFrozenRiverLightRig(bool Enable_);
	void StartChainTrace();
	void ChainTrace();
	void OnWasAggroed();
	void WalkingLoop();
	void ReceiveBeginPlay();
	void FlyingRagdoll();
	void TakeImpactToShield();
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ResetHitCounter();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayHitReactionMontage();
	void RagdollAfterDeath();
	void DropWeapon();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_GraguBase(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_16, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit_1, bool CallFunc_SphereTraceSingleForObjects_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool K2Node_Event_Enable_, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit_2, bool CallFunc_SphereTraceSingleForObjects_ReturnValue_2, TArray<struct FHitResult>& K2Node_MakeArray_Array_3, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, int32 CallFunc_Array_Add_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, TArray<struct FHitResult>& K2Node_MakeArray_Array_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, class UAnimMontage* K2Node_Select_Default, class FName Temp_name_Variable_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_HasShield_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_17, float K2Node_Event_DistanceFromPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_15, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, const struct FVector& K2Node_Event_DirectionToSource, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_18, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, int32 Temp_int_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class FName K2Node_CustomEvent_NotifyName_19, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23);
};

}


