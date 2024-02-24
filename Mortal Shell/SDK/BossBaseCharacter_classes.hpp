#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x1338 - 0x10F8)
// BlueprintGeneratedClass BossBaseCharacter.BossBaseCharacter_C
class ABossBaseCharacter_C : public AEnemyCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        PhaseSwitch_HealthMultiplier_DF4B3FBD4BF6456308538AA6B5A5E6E4; // 0x1100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PhaseSwitch__Direction_DF4B3FBD4BF6456308538AA6B5A5E6E4; // 0x1104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PhaseSwitch;                                       // 0x1108(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BossDeath;                                         // 0x1110(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActivePhaseIndex;                                  // 0x1120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PhaseNum;                                          // 0x1124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PhaseSwitchMontage;                                // 0x1128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PhaseSwitchTime;                                   // 0x1130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PhaseSwitchCounter;                                // 0x1134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPhaseSwitching;                                  // 0x1138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ADE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBossAnimations, class UAnimMontage*> MontageMap;                                        // 0x1140(0x50)(Edit, BlueprintVisible)
	int32                                        CurrentAttackIndex;                                // 0x1190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                AttackPlayRates;                                   // 0x1198(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        StaggerDamageCounter;                              // 0x11A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaggerDamageMax;                                  // 0x11AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaggerDamageTimeWindowReset;                      // 0x11B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStaggered_;                                      // 0x11B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageBossStagger;                                // 0x11B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaggerCooldown;                                   // 0x11C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStaggerRecharging;                                // 0x11C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, float>                           AttackCooldownMap;                                 // 0x11C8(0x50)(Edit, BlueprintVisible)
	TMap<int32, float>                           AttackLastExecutionTimeMap;                        // 0x1218(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  BossDefeatedName;                                  // 0x1268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            TeleportPlayerToLarva;                             // 0x1270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBossStaggered;                                   // 0x1280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBossRecoveredFromStagger;                        // 0x1290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class ALevelSequenceActor>    BossIntroLevelSequence;                            // 0x12A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShouldHideBossBeforeIntroSequence_;                // 0x12C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EBoss_Glimpse_Types               GlimpseType;                                       // 0x12C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsMiniBoss_;                                       // 0x12CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3AF7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BossNameReboot_;                                   // 0x12D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CrossRiposte_BossStaggerStartPos;                  // 0x12E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InterruptCurrentAttack;                            // 0x12F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x1300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPlayMusicOnAggroed;                          // 0x1308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartMetalTrackOnCutsceneStart;                    // 0x1309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AFD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MetalTrackName;                                    // 0x130C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            BossNormalMusic;                                   // 0x1318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   Cutscene;                                          // 0x1320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_BossStaggerCooldown;                         // 0x1328(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bBossStaggerCooldown_ForcedReset;                  // 0x1330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delay_ReturnToLarva;                               // 0x1334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABossBaseCharacter_C* GetDefaultObj();

	void Death_HandleStormModeMilestones();
	void DropRuneFromMiniBoss(class APlayerController* CallFunc_GetPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_StormMode_AskForASeed_Seed, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AConfigurable_Glowing_Pickup_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object, bool K2Node_DynamicCast_bSuccess_1, class URuneRandomizerComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_1, bool K2Node_DynamicCast_bSuccess_2);
	void CloseReturnPath();
	void IncreaseStormModeProgress(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3);
	void StartMusic_NormalTrack(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState);
	void StartMusic_MetalTrack(bool ShouldPlayNormalTrackIfInvalid, float FadeInDuration, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class USoundBase* CallFunc_LoadMusicFromDLC_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UAnimMontage* SelectStaggerMontage();
	void SetBossAsDefeatedAndSave(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_AddNGLevelToID_O, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void AI_SetBlackBoardIsStunned(bool IsStunned_, const class FString& Reason, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void DestroyBCamera(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void RemoveFirePoisonBuffs(int32 Temp_int_Array_Index_Variable, class UBuffObject_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ShouldTakePoiseDamageOnDefelect(bool* ShouldTakePoiseDamage);
	void HandleCrossRiposteOnPhaseSwitch();
	void GetName(class FText* Name);
	void SaveBossDefeated();
	void GetAttacksNotUnderCooldown(TArray<int32>& PossibleAttacks, TArray<int32>* Output, const TArray<int32>& FixedArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void PhaseSwitchFillStart();
	void GetDifferentAttackIndex(TArray<int32>& PossibleAttacks, int32* Output, bool Temp_bool_Variable, TArray<int32>& CallFunc_GetAttacksNotUnderCooldown_Output, TArray<int32>& CallFunc_GetAttacksNotUnderCooldown_Output_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TArray<int32>& K2Node_Select_Default, TArray<int32>& K2Node_Select_Default_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Get_Item, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 K2Node_Select_Default_2);
	void GetSelectedAttack(struct FDHEnemyAttack* Output);
	void GetSelectedAttackDuration(float* Duration, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetPlayLength_ReturnValue);
	void ExecuteSelectedAttack(bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SelectNextAttack(float DistanceToPlayer);
	void GetBossHPUI(class UBoss_HealthBar_C** Boss_HealthBar, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ReduceHealth(float Delta, float* NewHealth, float CallFunc_ReduceHealth_NewHealth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PhaseSwitch__FinishedFunc();
	void PhaseSwitch__UpdateFunc();
	void OnNotifyEnd_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName);
	void OnNotifyBegin_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName);
	void OnInterrupted_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName);
	void OnBlendOut_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName);
	void OnCompleted_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName);
	void OnNotifyEnd_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName);
	void OnNotifyBegin_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName);
	void OnInterrupted_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName);
	void OnBlendOut_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName);
	void OnCompleted_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName);
	void OnNotifyEnd_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName);
	void OnNotifyBegin_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName);
	void OnInterrupted_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName);
	void OnBlendOut_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName);
	void OnCompleted_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName);
	void OnNotifyEnd_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName);
	void OnNotifyBegin_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName);
	void OnInterrupted_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName);
	void OnBlendOut_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName);
	void OnCompleted_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName);
	void ReceiveBeginPlay();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void StartPhaseSwitch();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void ResetStaggerDamage();
	void IncreaseStaggerDamageCounter(float Damage);
	void StaggerBoss();
	void ResetIsStaggered();
	void OnStaggerCooldownOver();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void OnAttackExecuted(int32 AttackIndex);
	void EndPhaseSwitchMontage();
	void PhaseSwitchNotify(class FName NewParam);
	void PlayLightHitReaction();
	void ReturnPlayerToPreviousLevel();
	void ShowBossHPBar();
	void DropGlimpses(class AActor* Killer);
	void OnWasAggroed();
	void AfterIntroSequenceCompleted();
	void FadeBossHpBar();
	void PlayBossIntroSequence();
	void PhaseSwitchInterrupt();
	void StaggerNotifies(class FName StaggerNotifies);
	void SetupCathedralDestroyOnChaliceBinding();
	void Boss_Cutscene_Seen();
	void Boss_Cutscene_Invalid();
	void Boss_StartFight();
	void OnCutsceneFinished();
	void OnCutsceneStarted();
	void Music_WormfishNotCalled();
	void ResetBossStaggerCooldown(bool ResetBossStaggerCD);
	void BossStaggerCooldown_Start();
	void OnBossItemPickedUp_StormMode();
	void ExecuteUbergraph_BossBaseCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class EBoss_Glimpse_Types Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_18, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, class FName Temp_name_Variable_2, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName K2Node_CustomEvent_NotifyName_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class AActor* K2Node_Event_Killer_1, bool K2Node_Event_bShouldPlayDeathAnim, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_19, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, class FName K2Node_CustomEvent_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_11, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector& K2Node_Event_DirectionToSource, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar_1, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_CustomEvent_AttackIndex, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NewParam, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName K2Node_CustomEvent_NotifyName_12, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_4, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class AActor* K2Node_Event_Killer, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AGlowing_Pickup_Boss_Glimpse_C* CallFunc_FinishSpawningActor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_13, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_StaggerNotifies, float CallFunc_SelectFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_7, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_4, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimMontage* CallFunc_SelectStaggerMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, class FName Temp_name_Variable_3, class FName K2Node_CustomEvent_NotifyName_15, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Event_ResetBossStaggerCD, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AConfigurable_Glowing_Pickup_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue_1, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object, bool K2Node_DynamicCast_bSuccess_8, class URuneRandomizerComponent_C* CallFunc_GetComponentByClass_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_1, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_StormModeIsActive_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_11, const struct FStruct_StormModeSeeds& CallFunc_StormMode_GetSeeds_Seeds, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_12, int32 K2Node_Select_Default, bool CallFunc_StormModeIsActive_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_13, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_14);
	void InterruptCurrentAttack__DelegateSignature(float DelayBeforeInterrupt);
	void OnBossRecoveredFromStagger__DelegateSignature();
	void OnBossStaggered__DelegateSignature();
	void TeleportPlayerToLarva__DelegateSignature();
	void BossDeath__DelegateSignature();
};

}


