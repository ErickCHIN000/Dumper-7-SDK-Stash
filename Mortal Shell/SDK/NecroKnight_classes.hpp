#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F (0x1220 - 0x11A1)
// BlueprintGeneratedClass NecroKnight.NecroKnight_C
class ANecroKnight_C : public AHeavyEnemy_C
{
public:
	uint8                                        Pad_338A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       FIGHT_Knight_Walk_Cue;                             // 0x11B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FireEyeFX2;                                        // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FireEyeFX1;                                        // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpacityFadeNecroKnight_NewTrack_0_3B58C54241002F443AFBE78BBF0A01BA; // 0x11C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpacityFadeNecroKnight__Direction_3B58C54241002F443AFBE78BBF0A01BA; // 0x11CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpacityFadeNecroKnight;                            // 0x11D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Necro_Knight_Dissolve_EyeMat_Opacity_Power_AAFB755747AFEF61910B0DA3F0BF88D4; // 0x11D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Necro_Knight_Dissolve_Dissolve_Amount_AAFB755747AFEF61910B0DA3F0BF88D4; // 0x11DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Necro_Knight_Dissolve__Direction_AAFB755747AFEF61910B0DA3F0BF88D4; // 0x11E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Necro_Knight_Dissolve;                             // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      DynamicMaterialInstances;                          // 0x11F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            NecroKnightMaterials;                              // 0x1200(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      SwordDynamicMaterialInstances;                     // 0x1210(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANecroKnight_C* GetDefaultObj();

	void CreateDynamicSwordMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Necro_Knight_Dissolve__FinishedFunc();
	void Necro_Knight_Dissolve__UpdateFunc();
	void OpacityFadeNecroKnight__FinishedFunc();
	void OpacityFadeNecroKnight__UpdateFunc();
	void OnNotifyEnd_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName);
	void OnNotifyBegin_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName);
	void OnInterrupted_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName);
	void OnBlendOut_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName);
	void OnCompleted_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName);
	void OnNotifyEnd_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName);
	void OnNotifyBegin_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName);
	void OnInterrupted_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName);
	void OnBlendOut_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName);
	void OnCompleted_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void SwordDissolve();
	void PlayWasHitSound(const struct FVector& HitLocation);
	void InvulnerablilityOnWhileTeleporting();
	void ResetInvulnerability();
	void ForceEnemyAttack();
	void SetWeaponVisibility(bool Visible_);
	void FadeOnDeath();
	void PlayMissedAttackFX();
	void PlayClassSpecificImpactFX(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal);
	void PlayDeathFX();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void StunonAggro();
	void PlayDeathSound();
	void PlayDeathMontage();
	void ExecuteUbergraph_NecroKnight(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& K2Node_Event_HitLocation, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool K2Node_Event_Visible_, const struct FVector& K2Node_Event_ImpactPoint, const struct FVector& K2Node_Event_ImpactNormal, const struct FVector& CallFunc_GetUpVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2);
};

}


