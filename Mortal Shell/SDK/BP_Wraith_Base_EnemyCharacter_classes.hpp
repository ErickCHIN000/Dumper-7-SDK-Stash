#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC9 (0x11D1 - 0x1108)
// BlueprintGeneratedClass BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C
class ABP_Wraith_Base_EnemyCharacter_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       LHandAudioComponent;                               // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       RHandAudioComponent;                               // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BodyAudioComponent;                                // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MouthAudioComponent;                               // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HealRiposteDeath_MoveBackInterp_176E51F943F285609430AD9AE7111BFE; // 0x1130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HealRiposteDeath_BonesDesintegration_176E51F943F285609430AD9AE7111BFE; // 0x1134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HealRiposteDeath_ClothDesintegration_176E51F943F285609430AD9AE7111BFE; // 0x1138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_HealRiposteDeath__Direction_176E51F943F285609430AD9AE7111BFE; // 0x113C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_HealRiposteDeath;                         // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_0_MoveBackInterp_2572D2B748D1D3C608CBC8B6F0CA5DFB; // 0x1148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_0_BonesDesintegration_2572D2B748D1D3C608CBC8B6F0CA5DFB; // 0x114C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_0_ClothDesintegration_2572D2B748D1D3C608CBC8B6F0CA5DFB; // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2_0__Direction_2572D2B748D1D3C608CBC8B6F0CA5DFB; // 0x1154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2_0;                                      // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_BonesDesintegration_BAE6E1CF46D2C2F3A11408B023A2D33F; // 0x1160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_ClothDesintegration_BAE6E1CF46D2C2F3A11408B023A2D33F; // 0x1164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_BAE6E1CF46D2C2F3A11408B023A2D33F; // 0x1168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x1170(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChanceToDodge;                                     // 0x1178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TeleportCooldown;                                  // 0x117C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTeleportGameTime;                              // 0x1180(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWaitingAfterCast_;                               // 0x1184(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingAttackMontage_;                           // 0x1185(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpellCooldown;                                     // 0x1188(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpellLastGameTime;                                 // 0x118C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FogParticleSystem;                                 // 0x1190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FogWispyParticleSystem;                            // 0x1198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugSpells;                                       // 0x11A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PreDeathLocation;                                  // 0x11A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PostDeathLocation;                                 // 0x11B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        AttachedActors;                                    // 0x11C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsCastingSpell;                                    // 0x11D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Wraith_Base_EnemyCharacter_C* GetDefaultObj();

	void Wraith_Teleport(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void DissolveNailProjectiles(float Amount, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ANailProjectile_Box_C* K2Node_DynamicCast_AsNail_Projectile_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	float GetSpellCooldownGameTime(class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAsFloat_ReturnValue);
	void SetSpellCooldownGameTime(float FloatValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_HealRiposteDeath__FinishedFunc();
	void Timeline_HealRiposteDeath__UpdateFunc();
	void Timeline_HealRiposteDeath__Death__EventFunc();
	void Timeline_2_0__FinishedFunc();
	void Timeline_2_0__UpdateFunc();
	void OnNotifyEnd_229552E040CB4341ABA17A9A380701A8(class FName NotifyName);
	void OnNotifyBegin_229552E040CB4341ABA17A9A380701A8(class FName NotifyName);
	void OnInterrupted_229552E040CB4341ABA17A9A380701A8(class FName NotifyName);
	void OnBlendOut_229552E040CB4341ABA17A9A380701A8(class FName NotifyName);
	void OnCompleted_229552E040CB4341ABA17A9A380701A8(class FName NotifyName);
	void OnNotifyEnd_A3B0F0474C87AD5857920CA871518269(class FName NotifyName);
	void OnNotifyBegin_A3B0F0474C87AD5857920CA871518269(class FName NotifyName);
	void OnInterrupted_A3B0F0474C87AD5857920CA871518269(class FName NotifyName);
	void OnBlendOut_A3B0F0474C87AD5857920CA871518269(class FName NotifyName);
	void OnCompleted_A3B0F0474C87AD5857920CA871518269(class FName NotifyName);
	void OnNotifyEnd_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName);
	void OnNotifyBegin_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName);
	void OnInterrupted_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName);
	void OnBlendOut_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName);
	void OnCompleted_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName);
	void OnNotifyEnd_634D88C44FE75E5155922289451C7CD2(class FName NotifyName);
	void OnNotifyBegin_634D88C44FE75E5155922289451C7CD2(class FName NotifyName);
	void OnInterrupted_634D88C44FE75E5155922289451C7CD2(class FName NotifyName);
	void OnBlendOut_634D88C44FE75E5155922289451C7CD2(class FName NotifyName);
	void OnCompleted_634D88C44FE75E5155922289451C7CD2(class FName NotifyName);
	void OnNotifyEnd_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName);
	void OnNotifyBegin_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName);
	void OnInterrupted_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName);
	void OnBlendOut_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName);
	void OnCompleted_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName);
	void OnNotifyEnd_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName);
	void OnNotifyBegin_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName);
	void OnInterrupted_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName);
	void OnBlendOut_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName);
	void OnCompleted_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName);
	void OnNotifyEnd_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName);
	void OnNotifyBegin_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName);
	void OnInterrupted_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName);
	void OnBlendOut_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName);
	void OnCompleted_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName);
	void ReceiveBeginPlay();
	void AttackIfPlayerClose();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void OnCastEnd();
	void OnAttackMontageInterrupted();
	void TeleportAttack();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void RangedAttack();
	void MeleeAttack();
	void SelectAttack(float DistanceFromPlayer);
	void Time_Freeze_Start(float DurationBonus);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void SpawnParticles();
	void PlayDeathblowReactionAnimation(enum class EComboTypes RiposteWeapon, enum class ERiposteTypes RipostePowerType);
	void HeavyHitReactionDeathMontage();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void CastSpell();
	void Teleport();
	void WraithDodge();
	void ExecuteUbergraph_BP_Wraith_Base_EnemyCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_31, class FName K2Node_CustomEvent_NotifyName_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, int32 Temp_int_Variable, bool K2Node_SwitchName_CmpSuccess, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_29, class FName K2Node_CustomEvent_NotifyName_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_4, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName Temp_name_Variable_5, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName Temp_name_Variable_6, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetSpellCooldownGameTime_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class FName K2Node_CustomEvent_NotifyName_34, float K2Node_Event_DistanceFromPlayer, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float K2Node_Event_DurationBonus, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* K2Node_Select_Default, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors_1, class FName K2Node_CustomEvent_NotifyName_32, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class FName K2Node_CustomEvent_NotifyName_33, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, enum class EComboTypes K2Node_Event_RiposteWeapon, enum class ERiposteTypes K2Node_Event_RipostePowerType, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_DarkSphereProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, bool CallFunc_IsValid_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class UWraith_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsWraith_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_RandomBool_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2, bool CallFunc_IsValid_ReturnValue_10, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class UAnimMontage* K2Node_Select_Default_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_13);
};

}


