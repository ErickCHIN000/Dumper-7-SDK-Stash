#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x11C0 - 0x1108)
// BlueprintGeneratedClass BP_ShadowKnightNew.BP_ShadowKnightNew_C
class ABP_ShadowKnightNew_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Eye_Right;                                      // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Eye_Left;                                       // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Eye_Right;                                       // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Eye_Left;                                        // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Body_Shadow;                                     // 0x1130(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sword;                                             // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_StoneForm_Mat_Reverse_Alpha_072960824CDDD49A7AF06DA6E40638DA; // 0x1140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_StoneForm_Mat_Reverse__Direction_072960824CDDD49A7AF06DA6E40638DA; // 0x1144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_StoneForm_Mat_Reverse;                    // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_StoneForm_Mat_Play_Alpha_84E4D6F747D12E27B8A2A4A26A96808A; // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_StoneForm_Mat_Play__Direction_84E4D6F747D12E27B8A2A4A26A96808A; // 0x1154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_StoneForm_Mat_Play;                       // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Heavy_hit_1;                                       // 0x1160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Heavy_hit_2;                                       // 0x1168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TeleportDestination;                               // 0x1170(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TeleportRadius;                                    // 0x117C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TeleporBackTimer;                                  // 0x1180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OriginLocation;                                    // 0x1188(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeInAir;                                         // 0x1194(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitReaction_Lenght;                                // 0x1198(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          LightHit_1;                                        // 0x11A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightHit_2;                                        // 0x11A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwordDetached_;                                    // 0x11B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttackDistanceScale;                               // 0x11B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShadow_knight_teleport_dash_C*        BP_ShadowKnightTeleportVFX;                        // 0x11B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ShadowKnightNew_C* GetDefaultObj();

	void CustomOnEnemyFadeOut(float Opacity, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void DropWeapon();
	void SaveSpawnLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void InitializeShadowBodyParticle(const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue);
	void DetachSword(bool CallFunc_Not_PreBool_ReturnValue);
	void EnableRagdollPhysics(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	bool IsInTeleportBackRange(bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void CalcTimeInAir(float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsFalling_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	bool GetPreviousMovementWasAborted(class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue);
	void TeleportVFX(const struct FVector& Destination, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AShadow_knight_teleport_dash_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SetShouldTeleport(bool BoolValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void Timeline_StoneForm_Mat_Play__FinishedFunc();
	void Timeline_StoneForm_Mat_Play__UpdateFunc();
	void Timeline_StoneForm_Mat_Reverse__FinishedFunc();
	void Timeline_StoneForm_Mat_Reverse__UpdateFunc();
	void OnNotifyEnd_08782FF140BE45FD1B77A78E463E83AB(class FName NotifyName);
	void OnNotifyBegin_08782FF140BE45FD1B77A78E463E83AB(class FName NotifyName);
	void OnInterrupted_08782FF140BE45FD1B77A78E463E83AB(class FName NotifyName);
	void OnBlendOut_08782FF140BE45FD1B77A78E463E83AB(class FName NotifyName);
	void OnCompleted_08782FF140BE45FD1B77A78E463E83AB(class FName NotifyName);
	void OnNotifyEnd_BA2A35BE43AFE5C46FA444AB3AE75ACB(class FName NotifyName);
	void OnNotifyBegin_BA2A35BE43AFE5C46FA444AB3AE75ACB(class FName NotifyName);
	void OnInterrupted_BA2A35BE43AFE5C46FA444AB3AE75ACB(class FName NotifyName);
	void OnBlendOut_BA2A35BE43AFE5C46FA444AB3AE75ACB(class FName NotifyName);
	void OnCompleted_BA2A35BE43AFE5C46FA444AB3AE75ACB(class FName NotifyName);
	void OnNotifyEnd_DF73FF244D9343FDCB9518A62F7CC143(class FName NotifyName);
	void OnNotifyBegin_DF73FF244D9343FDCB9518A62F7CC143(class FName NotifyName);
	void OnInterrupted_DF73FF244D9343FDCB9518A62F7CC143(class FName NotifyName);
	void OnBlendOut_DF73FF244D9343FDCB9518A62F7CC143(class FName NotifyName);
	void OnCompleted_DF73FF244D9343FDCB9518A62F7CC143(class FName NotifyName);
	void OnNotifyEnd_9755B61F4D4887D3C33D208D9592763D(class FName NotifyName);
	void OnNotifyBegin_9755B61F4D4887D3C33D208D9592763D(class FName NotifyName);
	void OnInterrupted_9755B61F4D4887D3C33D208D9592763D(class FName NotifyName);
	void OnBlendOut_9755B61F4D4887D3C33D208D9592763D(class FName NotifyName);
	void OnCompleted_9755B61F4D4887D3C33D208D9592763D(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReturnToOriginCheck();
	void ReceiveTick(float DeltaSeconds);
	void Enemy_DeAggro_Start();
	void RunStoneFormValueTimeline();
	void ReverseStoneValueTimeline();
	void Freeze_Start();
	void Freeze_End();
	void Teleport_ReturnBack();
	void Teleport(class AActor* Char);
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void RagdollAfterDeath();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_ShadowKnightNew(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, int32 Temp_int_Variable, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, int32 Temp_int_Variable_1, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float K2Node_Event_DeltaSeconds, bool CallFunc_IsInTeleportBackRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_17, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_7, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, bool CallFunc_GetPreviousMovementWasAborted_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, class AActor* K2Node_CustomEvent_Char, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_SelectRandomAttack_SelectedAttack_1, bool K2Node_SwitchInteger_CmpSuccess_1, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DistanceFromPlayer, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_19, class UAnimMontage* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UAnimMontage* K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_6, class UAnimMontage* K2Node_Select_Default_2, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& K2Node_Event_DirectionToSource, class FName CallFunc_MakeLiteralName_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_8, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, bool CallFunc_IsValid_ReturnValue_11, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, bool CallFunc_Not_PreBool_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14);
};

}


