#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x11F0 - 0x1108)
// BlueprintGeneratedClass HeavyBrigandBase.HeavyBrigandBase_C
class AHeavyBrigandBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  CryptLightRig;                                     // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MouthAudio;                                        // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Brigand_Axe;                                       // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          BeforeAggroPose;                                   // 0x1130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          AggroMontage;                                      // 0x1138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAnimMontage*                          NextAttackMontage_0;                               // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AbortWaitAfterMoveDist;                            // 0x1148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_C23[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          BrigandScaredMontage1;                             // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          BrigandScaredMontage2;                             // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomMeshScale;                                   // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingSecondAggroMontage_;                      // 0x1164(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondAggroDistance;                               // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunningAway_;                                    // 0x116C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ShortAttack1;                                      // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ShortAttack2;                                      // 0x1178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ShortAttack3;                                      // 0x1180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MidAttack1;                                        // 0x1188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MidAttack2;                                        // 0x1190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MidAttack3;                                        // 0x1198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LongAttack1;                                       // 0x11A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfShortAttackMontages;                       // 0x11A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstAttackIsAmbush_;                              // 0x11AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C34[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeforeAggroPosePlayRate;                           // 0x11B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedAggroMontage_;                               // 0x11B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingDamagedAnim_;                             // 0x11B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C36[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AggroDelayTimer;                                   // 0x11B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingAggroMontage;                             // 0x11C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HitCounter;                                        // 0x11C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HitsBeforeHitReaction;                             // 0x11C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C3F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CheckPlayerDistanceTimer;                          // 0x11D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPatrol_;                                         // 0x11D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PlayerCheckWhileReturning;                         // 0x11E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AAdvancedEnemySpawner_C*               Spawner;                                           // 0x11E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHeavyBrigandBase_C* GetDefaultObj();

	void Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, enum class EAudioComponentLocation Temp_byte_Variable, class UAudioComponent* Temp_object_Variable, class UAudioComponent* Temp_object_Variable_1, class UAudioComponent* Temp_object_Variable_2, class UAudioComponent* K2Node_Select_Default);
	void SetMaskType(bool UseBeakMask);
	void CheckPlayerInRange(float TestingRange, bool* IsPlayerInRange, class APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SecondAggroNearbyBrigands(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AggroNearbyBrigands();
	void CheckForAmbush(bool* WasAmbush_);
	void RunAway(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue);
	void GetWeaponMesh(class UMeshComponent** WeaponMesh);
	void ScareNearbyBrigands(bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAnimMontage* K2Node_Select_Default, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue);
	void GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void OnNotifyEnd_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName);
	void OnNotifyBegin_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName);
	void OnInterrupted_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName);
	void OnBlendOut_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName);
	void OnCompleted_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName);
	void OnNotifyEnd_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName);
	void OnNotifyBegin_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName);
	void OnInterrupted_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName);
	void OnBlendOut_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName);
	void OnCompleted_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName);
	void OnNotifyEnd_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName);
	void OnNotifyBegin_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName);
	void OnInterrupted_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName);
	void OnBlendOut_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName);
	void OnCompleted_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName);
	void OnNotifyEnd_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName);
	void OnNotifyBegin_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName);
	void OnInterrupted_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName);
	void OnBlendOut_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName);
	void OnCompleted_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName);
	void OnNotifyEnd_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName);
	void OnNotifyBegin_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName);
	void OnInterrupted_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName);
	void OnBlendOut_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName);
	void OnCompleted_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName);
	void OnNotifyEnd_32F00FA5456F7374675D51906D55360E(class FName NotifyName);
	void OnNotifyBegin_32F00FA5456F7374675D51906D55360E(class FName NotifyName);
	void OnInterrupted_32F00FA5456F7374675D51906D55360E(class FName NotifyName);
	void OnBlendOut_32F00FA5456F7374675D51906D55360E(class FName NotifyName);
	void OnCompleted_32F00FA5456F7374675D51906D55360E(class FName NotifyName);
	void OnNotifyEnd_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName);
	void OnNotifyBegin_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName);
	void OnInterrupted_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName);
	void OnBlendOut_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName);
	void OnCompleted_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName);
	void CheckDistanceToPlayer();
	void PlayDeathMontage();
	void ExecuteMidAttack();
	void ExecuteShortAttack();
	void ExecuteLongAttack();
	void SetCurrentAttackDistance(float FloatValue);
	void PlayAggroMontage();
	void CheckSecondAggro(float DistanceToPlayer);
	void PrintFwdAtkDistance();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void UpdateAggroPoseFromSpawner();
	void AggroedByOtherBrigand();
	void ForceSecondAggro();
	void PlayHitReactionMontage();
	void Force_Dodge();
	void OnAggroDelayOver();
	void ResetAtkIfDistant();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ClearHitCounter();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ShitPants();
	void PlayRunAwayMontage();
	void SetDistanceCheckTimer();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayLightHitReaction();
	void DropWeapon();
	void AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_);
	void EnableFrozenRiverLightRig(bool Enable_);
	void ExecuteUbergraph_HeavyBrigandBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName Temp_name_Variable_5, int32 Temp_int_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class UAnimMontage* Temp_object_Variable_6, class UAnimMontage* Temp_object_Variable_7, class AHeavyBrigandSpawner_C* K2Node_DynamicCast_AsHeavy_Brigand_Spawner, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, float K2Node_CustomEvent_FloatValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, float K2Node_CustomEvent_DistanceToPlayer, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_NotifyName_33, const struct FVector& CallFunc_GetActorRelativeScale3D_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class UHeavy_Brigand_Melee_AnimBlueprint_C* K2Node_DynamicCast_AsHeavy_Brigand_Melee_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CheckForAmbush_WasAmbush_, bool CallFunc_CheckForAmbush_WasAmbush__1, class FName K2Node_CustomEvent_NotifyName_28, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_PlayAnimMontage_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_GetAllRootMotionForwardDeltaFromMontage_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName K2Node_CustomEvent_NotifyName_34, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class AController* CallFunc_GetController_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, float K2Node_Event_DeltaSeconds, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_12, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, class AActor* K2Node_Event_PlayerToAggro, bool K2Node_Event_bIsFromLute_, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_29, class AHeavyBrigandSpawner_Patrol_C* K2Node_DynamicCast_AsHeavy_Brigand_Spawner_Patrol, bool K2Node_DynamicCast_bSuccess_3, class FName Temp_name_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class FName K2Node_CustomEvent_NotifyName_30, class AAdvancedEnemySpawner_StormMode_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode, bool K2Node_DynamicCast_bSuccess_4, class FName K2Node_CustomEvent_NotifyName_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class FName K2Node_CustomEvent_NotifyName_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, bool K2Node_Event_Enable_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


