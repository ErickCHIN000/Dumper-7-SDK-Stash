#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x11A1 - 0x1108)
// BlueprintGeneratedClass HeavyEnemy.HeavyEnemy_C
class AHeavyEnemy_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SHIELD;                                            // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         DashBox;                                           // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sword;                                             // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeavyMeleeAtk_;                                  // 0x1130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentTarget_0;                                   // 0x1138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsComboAtk_;                                       // 0x1140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DashMinimumDistance;                               // 0x1144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashCooldown;                                      // 0x1148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GameTimeOfLastDash;                                // 0x114C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashWalkSpeed;                                     // 0x1150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDashing_;                                        // 0x1154(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DashLocationLockDistance;                          // 0x1158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DashHitPlayer_;                                    // 0x115C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasDashAbility_;                                   // 0x115D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         LoadBehaviorTree__0;                               // 0x115E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1B93[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CircleStrafeDirection;                             // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldDashDisarmPlayerWeapon_;                     // 0x1164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsThrusting;                                       // 0x1165(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAtk3;                                            // 0x1166(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShieldBlock;                                       // 0x1167(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBehaviorTree*                         BehaviorTreeToLoad_0;                              // 0x1168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsShieldBroken_;                                   // 0x1170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitNormal;                                         // 0x1174(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x1180(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          NextAttackMontage_0;                               // 0x1190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StrafeTimer;                                       // 0x1198(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanShieldBreak;                                    // 0x11A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AHeavyEnemy_C* GetDefaultObj();

	void HandleDashAttack(bool* WasHandled);
	void GetOffHandComponent(class UStaticMeshComponent** OffhandComponent);
	void AddImpulseToRagdoll(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, class FName CallFunc_GetBoneName_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1);
	void EnableRagdollPhysics(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void SwordOffset_Kubold_Anims(const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
	void SwordOffset_A_SW_Anims(const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
	void OnDmgAttractToPoint();
	void OnDeathAttractToPoint();
	void AdjustDashLocBasedOnPlayerDistance(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_GetValueAsVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void OnNotifyEnd_35990A3544652C0C80BCA8941A7035BB(class FName NotifyName);
	void OnNotifyBegin_35990A3544652C0C80BCA8941A7035BB(class FName NotifyName);
	void OnInterrupted_35990A3544652C0C80BCA8941A7035BB(class FName NotifyName);
	void OnBlendOut_35990A3544652C0C80BCA8941A7035BB(class FName NotifyName);
	void OnCompleted_35990A3544652C0C80BCA8941A7035BB(class FName NotifyName);
	void OnNotifyEnd_10AF5D7846FF710B460A8AB514F3DDD9(class FName NotifyName);
	void OnNotifyBegin_10AF5D7846FF710B460A8AB514F3DDD9(class FName NotifyName);
	void OnInterrupted_10AF5D7846FF710B460A8AB514F3DDD9(class FName NotifyName);
	void OnBlendOut_10AF5D7846FF710B460A8AB514F3DDD9(class FName NotifyName);
	void OnCompleted_10AF5D7846FF710B460A8AB514F3DDD9(class FName NotifyName);
	void OnNotifyEnd_32C95EBE47D81C55CD4EC092F8F9D90D(class FName NotifyName);
	void OnNotifyBegin_32C95EBE47D81C55CD4EC092F8F9D90D(class FName NotifyName);
	void OnInterrupted_32C95EBE47D81C55CD4EC092F8F9D90D(class FName NotifyName);
	void OnBlendOut_32C95EBE47D81C55CD4EC092F8F9D90D(class FName NotifyName);
	void OnCompleted_32C95EBE47D81C55CD4EC092F8F9D90D(class FName NotifyName);
	void OnNotifyEnd_23C08C964E0C6B4855C1938D2AEAD8EF(class FName NotifyName);
	void OnNotifyBegin_23C08C964E0C6B4855C1938D2AEAD8EF(class FName NotifyName);
	void OnInterrupted_23C08C964E0C6B4855C1938D2AEAD8EF(class FName NotifyName);
	void OnBlendOut_23C08C964E0C6B4855C1938D2AEAD8EF(class FName NotifyName);
	void OnCompleted_23C08C964E0C6B4855C1938D2AEAD8EF(class FName NotifyName);
	void OnNotifyEnd_1C85EFE449EBA028A0BF0491F8F8A01A(class FName NotifyName);
	void OnNotifyBegin_1C85EFE449EBA028A0BF0491F8F8A01A(class FName NotifyName);
	void OnInterrupted_1C85EFE449EBA028A0BF0491F8F8A01A(class FName NotifyName);
	void OnBlendOut_1C85EFE449EBA028A0BF0491F8F8A01A(class FName NotifyName);
	void OnCompleted_1C85EFE449EBA028A0BF0491F8F8A01A(class FName NotifyName);
	void ReceiveBeginPlay();
	void PlayWasHitSound(const struct FVector& HitLocation);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ForceEnemyAttack();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void EnemyBlock();
	void CheckDistanceToPlayer();
	void SetStrafeDistanceCheckTimer();
	void EnemyHitDeflected();
	void BlockWhenShieldBreaks();
	void BreakEnemyShield();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayLightHitReaction();
	void BndEvt__DashBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void SpawnDeathBloodFX();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_HeavyEnemy(int32 EntryPoint, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_4, bool Temp_bool_Variable, float Temp_float_Variable, const struct FVector& K2Node_Event_HitLocation_1, bool CallFunc_K2_AttachToComponent_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DistanceFromPlayer, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_IsValid_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_22, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abroken_shield_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, bool CallFunc_IsValid_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, bool CallFunc_IsValid_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_23, bool CallFunc_IsValid_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, bool CallFunc_IsValid_ReturnValue_8, const struct FVector& K2Node_Event_DirectionToSource, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue_2, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_GetValueAsBool_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_20, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, float K2Node_Event_DeltaSeconds, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_24, bool CallFunc_IsValid_ReturnValue_10, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetDistanceTo_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, float K2Node_Select_Default, float CallFunc_PlayAnimMontage_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12);
};

}


