#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x127 (0x12D0 - 0x11A9)
// BlueprintGeneratedClass BlindMan_Character.BlindMan_Character_C
class ABlindMan_Character_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_2201[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      JumpAttackCollision;                               // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     LaunchCapsule;                                     // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bTaranReady;                                       // 0x11C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2204[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TaranCooldown;                                     // 0x11CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TH_TaranCooldown;                                  // 0x11D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TaranDamageModifier;                               // 0x11D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TaranChance;                                       // 0x11DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJumpAttackReady;                                  // 0x11E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2207[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABlindManBossRoom_C*                   BossRoom;                                          // 0x11E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpAttackChance;                                  // 0x11F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2209[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABlindMan_JumpAttackTeleportationPoint_C* JumpPoints;                                        // 0x11F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpAttackCooldown;                                // 0x1200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_220B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_JumpAttackCooldown;                             // 0x1208(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpecialAttacksReady;                              // 0x1210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_220D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecialAttacksCooldown;                            // 0x1214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TH_SpecialAttacksCooldown;                         // 0x1218(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        JumpAttackDamage;                                  // 0x1220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TaranLaunchForce;                                  // 0x1224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpAttackLaunchForce;                             // 0x1228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBlindnessReady;                                   // 0x122C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_220E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlindnessHealth;                                   // 0x1230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_220F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHPlayerCharacter*>            OverlappedPlayers;                                 // 0x1238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bPlayerBlindnessActive;                            // 0x1248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2212[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BlindnessLostControlEffect;                        // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayerFearActive;                                 // 0x1258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2214[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAISpawnPoint*>               ActiveSpawnPoints;                                 // 0x1260(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bAddsSpawned;                                      // 0x1270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAddsInitialized;                                  // 0x1271(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2216[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAICharacter*>                Adds;                                              // 0x1278(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        HealingHealth;                                     // 0x1288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHealingReady;                                     // 0x128C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDoHealing;                                        // 0x128D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2219[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealingHealthMax;                                  // 0x1290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealingUpdateTime;                                 // 0x1294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealingPercentPerUpdate;                           // 0x1298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealingTickTime;                                   // 0x129C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealingDamageTaken;                                // 0x12A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealingDamageLimit;                                // 0x12A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInHiddenSpot;                                     // 0x12A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpikesDamage;                                      // 0x12AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInFlashlight;                                    // 0x12B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bQteAttackReady;                                   // 0x12B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_QteCooldown;                                    // 0x12B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        QteCooldown;                                       // 0x12C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        QteLostControlDistance;                            // 0x12C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bQteLostControlStarted;                            // 0x12C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bTaranValidated;                                   // 0x12C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bTaranMontageStarted;                              // 0x12CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2223[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HelpTimer;                                         // 0x12CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABlindMan_Character_C* GetDefaultObj();

	bool UpdateSpecialState(float DeltaTime, bool CallFunc_UpdateSpecialState_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue);
	bool OnSpecialState(bool CallFunc_OnSpecialState_ReturnValue);
	bool OnFifthSpecialState(bool CallFunc_OnFifthSpecialState_ReturnValue);
	bool UpdateFifthSpecialState(float DeltaTime, bool CallFunc_UpdateFifthSpecialState_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ApplyLostControlEffect_ReturnValue, class ALostControl_Blindman1_C* K2Node_DynamicCast_AsLost_Control_Blindman_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void OnQteCooldown();
	void StartQteCooldown(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void StartQTE(bool* Result, bool CallFunc_CanStartQte_Result);
	void CanStartQte(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetQteReady(bool NewValue);
	bool OnLeaveFlashlight(class ASHFlashLight* Flashlight, bool CallFunc_OnLeaveFlashlight_ReturnValue);
	bool OnEnterFlashlight(class ASHFlashLight* Flashlight, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_OnEnterFlashlight_ReturnValue);
	bool OnDeathState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AGenericCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AGenericCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_OnDeathState_ReturnValue);
	void UnblindAllPlayers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetAddsAmount(int32* Amount, TArray<class ASHPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void TeleportToHiddenSpot(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ClearAdds(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHAISpawnPoint* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISHActorState> CallFunc_SetActorState_self_CastInput, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, TScriptInterface<class ISHActorState> CallFunc_SetActorState_self_CastInput_1);
	bool OnFourthSpecialStateStop(bool CallFunc_OnFourthSpecialStateStop_ReturnValue);
	void TeleportToExitPoint(bool* Result, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, class ASHPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2);
	void ValidateAdds(const TArray<class ASHAICharacter*>& TempAdds, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHAICharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void InitializeAdds(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ASHAICharacter* K2Node_DynamicCast_AsSHAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	bool OnFourthSpecialState(float CallFunc_Divide_FloatFloat_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_OnFourthSpecialState_ReturnValue);
	bool UpdateFourthSpecialState(float DeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_GetValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_TeleportToExitPoint_Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnAdds(TArray<class ASHAISpawnPoint*>& SpawnPoints, bool* Result, int32 AddsAmount, const TArray<class ASHAISpawnPoint*>& LocalSpawnPoints, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetAddsAmount_Amount, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class ASHAISpawnPoint* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TScriptInterface<class ISHActorState> CallFunc_SetActorState_self_CastInput, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void StartHealing(bool* Result, bool bInitialized, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TeleportToExitPoint_Result, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SpawnAdds_Result, TArray<class ABlindMan_HealingLocation_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABlindMan_HealingLocation_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_CanStartHealing_Result);
	void CanStartHealing(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetHealingReady(bool NewValue);
	bool OnThirdSpecialStateStop(bool CallFunc_OnThirdSpecialStateStop_ReturnValue);
	bool UpdateThirdSpecialState(float DeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_TeleportToExitPoint_Result, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnAddsSpawned();
	void OnBlindAnimationComplete(const TArray<class ASHAISpawnPoint*>& LocalSpawnPoints, bool CallFunc_TeleportToExitPoint_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SpawnAdds_Result);
	void StopPlayerFear();
	void BlindAllPlayers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class ASHPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayerRemoveBlindness(class ASHPlayerCharacter* PlayerCharacter, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void PlayerApplyBlindness(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_IsValid_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ApplyLostControlEffect_ReturnValue);
	void OnPlayerLeaveBossroom(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnPlayerEnterBossroom(class ASHPlayerCharacter* PlayerCharacter, int32 CallFunc_Array_AddUnique_ReturnValue);
	bool OnThirdSpecialState(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_OnThirdSpecialState_ReturnValue);
	void StartBlindness(bool* Result, bool CallFunc_CanStartBlindness_Result);
	void CanStartBlindness(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetBlindnessReady(bool NewValue);
	void ProcessJumpAttack(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnSpecialAttacksCooldown();
	void StartSpecialAttacksCooldown(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	bool OnPatrolState(bool CallFunc_TeleportToExitPoint_Result, float CallFunc_GetMaxValue_ReturnValue, bool CallFunc_OnPatrolState_ReturnValue);
	void OnJumpAttackCooldown();
	void StartJumpAttackCooldown(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void JumpAttackStarted(bool CallFunc_HasAuthority_ReturnValue);
	void StartJumpAttack(bool* Result, class AActor* TempLocation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_CanStartJumpAttack_Result, bool CallFunc_ShouldHappen_ReturnValue);
	void FindBossRoom(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABlindManBossRoom_C* K2Node_DynamicCast_AsBlind_Man_Boss_Room, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void CanStartJumpAttack(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnTaranCooldown();
	void StartTaranCooldown(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void CanStartTaran(bool* Result, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void TaranLaunchCharacters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ASHWeapon_Melee* K2Node_DynamicCast_AsSHWeapon_Melee, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, float CallFunc_Multiply_IntFloat_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void StartTaran(bool* Result, bool DoWork, const struct FVector& DestinationLocation, const struct FVector& ProjectedLocation, const struct FVector& TempLocation, int32 NewLocalVar_0, int32 Step, const struct FVector& LocalTargetLocation, const struct FVector& TargetLocationDirection, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_SetPatrolPoint_Result, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_1, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void ReceiveAnyDamageCustom(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, bool bDamageBlocked);
	void ReceiveBeginPlay();
	void BndEvt__LaunchCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void TeleportToLocation(const struct FVector& TargetLocation, class AActor* TargetActor);
	void PlayTeleportEffects();
	void AIAttack();
	void ExecuteUbergraph_BlindMan_Character(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool K2Node_Event_bDamageBlocked, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& K2Node_Event_TargetLocation, class AActor* K2Node_Event_TargetActor, class ABlindMan_Spikes_C* K2Node_DynamicCast_AsBlind_Man_Spikes, bool K2Node_DynamicCast_bSuccess, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}

