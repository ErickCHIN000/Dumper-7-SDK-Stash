#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x3C0 - 0x220)
// BlueprintGeneratedClass AdvancedEnemySpawner.AdvancedEnemySpawner_C
class AAdvancedEnemySpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Debug_Aggro_Radius;                                // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DefaultSphereTrigger;                              // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  EnemyTypeDisplayText;                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   BillboardSprite;                                   // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATriggerBase*>                  SpawnTriggers;                                     // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class UClass*                                SpawnedEnemyClass;                                 // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     SpawnedEnemy;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelPhases                      PhaseToSpawn;                                      // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldSpawnWhenOverlapped;                        // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BE6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PatrollingSpline_C*                PatrollingSplineActor;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APatrolPoint_C*                        PatrolPointA;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldWander_;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        PatrolPointB;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AggroRadius;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Aggro_Radius;                                 // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PermanentlyDeadOnceKilled_;                        // 0x2B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C04[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TriggerOnEnemyAggro_C*             TriggerToActivateOnAggro;                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled_;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         HasBoundEvent_;                                    // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SpawnFacingPlayer_;                                // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FadeInIfVisible_;                                  // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpawnedEnemyDied;                                // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSpawnedEnemy;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         EnableFrozenRiverLightRig_;                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AScriptedActor_C*                      OnDeathScriptedActor;                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultSphereRadius;                               // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldPatrol_;                                     // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetherRadius;                                      // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EditorVisualizeTetherRadius;                       // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CopyTetherCenterFromThisActor;                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TetherCenter;                                      // 0x310(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnOnBeginPlay_;                                 // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2C46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FrozenStateMaterialsToExlude;                      // 0x320(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int32>                                FrozenStateMaterialsToMakeInvisible;               // 0x330(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ForceAlwaysRespawn_;                               // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bRespawnedByWaifu;                                 // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C54[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        MySpawnFrame;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckOverlapAtBeginPlay;                           // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEnemySpawnWithRef;                               // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BossSpawner_;                                      // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MiniBossSpawner_;                                  // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C6B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SpawnerLog;                                        // 0x370(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class ESpawnActorCollisionHandlingMethod SpawnType;                                         // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C72[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x390(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AAdvancedEnemySpawner_C* GetDefaultObj();

	void CheckIfPlayerIsAlreadyOverlapping(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void LoadEnemySaveState(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess);
	void SetupTriggers(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FColor& K2Node_MakeStruct_Color, const struct FColor& K2Node_MakeStruct_Color_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAtLeastOneValidTrigger_bAtLeastOneValidTrigger, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetDefaultSphereRadius();
	void GetSpawnTransform(struct FTransform* SpawnTransform, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1);
	void HasAtLeastOneValidTrigger(bool* bAtLeastOneValidTrigger, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void TrySpawnEnemyWhenPlayerSpawnedInsideTrigger(int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void AskGameModeToSpawn(bool* bShouldSpawn, bool Local_Died_, bool Local_PermanentlyDead_, bool Local_ShouldSpawn, bool Local_StormModeActive, class AGameplayGM_C* LocGameModeRef, const class FString& Temp_string_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_3, TMap<class FName, struct FMapSaveState> K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& Temp_string_Variable_4, int32 CallFunc_Array_Add_ReturnValue_4, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, class FName CallFunc_Conv_StringToName_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, const struct FEnemySaveState& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void SetEnemySpriteTextColor(const struct FColor& K2Node_MakeStruct_Color);
	void SetErrorSpriteAndTextColor(const struct FColor& Value);
	void SetUniqueID(const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void ShouldSpawn(bool* ShouldSpawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FColor& K2Node_MakeStruct_Color, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	void SequencerUpdateSpawners();
	void ReceiveBeginPlay();
	void OnBeginTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnSpawnedEnemyDestroyed(class AActor* DestroyedActor);
	void TrySpawnEnemy();
	void SetEnabled(bool Enable_);
	void OnEndTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void SpawnFromSequencer();
	void BindSpawnerEvent_();
	void UnbindSpawnerEvent();
	void BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void FadeInIfVisible(bool IsCharacterMeshVisible_);
	void OnEnemyDeath();
	void EnemySpawned();
	void OnDespawnEvent();
	void BindVisibilityForBeginPlayOption();
	void ChangeEnemyState(bool bActivate);
	void TrySpawnWhenCharacterPossessed();
	void ForceSpawnEnemy();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ResetSpawner();
	void ResetBeginPlayEnemies();
	void Spawner_DeAggroEnemy();
	void Spawner_ReEnableEnemy();
	void OnOverlapTrigger();
	void ExecuteUbergraph_AdvancedEnemySpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_OverlappedActor_1, class AActor* K2Node_CustomEvent_OtherActor_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_AskGameModeToSpawn_bShouldSpawn, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_Enable_, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_CustomEvent_IsCharacterMeshVisible_, const struct FTransform& CallFunc_GetSpawnTransform_SpawnTransform, bool CallFunc_BooleanAND_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AskGameModeToSpawn_bShouldSpawn_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_CustomEvent_bActivate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_ReEnable_self_CastInput, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_DeAggroPlayer_self_CastInput, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_IsClosed_Variable_1, int64 CallFunc_GetFrameCount_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, int64 CallFunc_Get_Next_Spawn_Frame_TargetFrame, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEnemyCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IEnemySpawnInterface_C> K2Node_DynamicCast_AsEnemy_Spawn_Interface, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IEnemySpawnInterface_C> K2Node_DynamicCast_AsEnemy_Spawn_Interface_1, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetTransform_ReturnValue);
	void OnEnemySpawnWithRef__DelegateSignature(class AAdvancedEnemySpawner_C* Spawner);
	void OnSpawnedEnemy__DelegateSignature();
	void OnSpawnedEnemyDied__DelegateSignature();
};

}


