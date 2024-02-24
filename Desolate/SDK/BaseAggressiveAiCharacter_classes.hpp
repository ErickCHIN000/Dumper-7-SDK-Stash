#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x11A9 - 0x112C)
// BlueprintGeneratedClass BaseAggressiveAiCharacter.BaseAggressiveAiCharacter_C
class ABaseAggressiveAiCharacter_C : public ABaseAiCharacter_C
{
public:
	uint8                                        Pad_1E56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        EnemyCharacterLastSeen;                            // 0x1138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyPositionLastSeen;                             // 0x113C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAggressive_SyncService_C*             AggressiveSyncService;                             // 0x1148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AggroPOI;                                          // 0x1150(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterMemory;                                   // 0x115C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHWeapon*                             DefaultWeapon;                                     // 0x1160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultWeaponClass;                                // 0x1168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHWeapon*                             SpecialWeapon;                                     // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpecialWeaponClass;                                // 0x1178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsEnemyPeaceful;                                  // 0x1180(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_AlertNoiseIgnore;                               // 0x1188(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIgnoreAlertNoise;                                 // 0x1190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bResetEmotionOnAttack;                             // 0x1191(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E77[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisualAggroMinimalDistance;                        // 0x1194(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 SpottedCharacter;                                  // 0x1198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CMDistanceToEnemyMin;                              // 0x11A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CMDistanceToEnemyMax;                              // 0x11A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugSightRadius;                                  // 0x11A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABaseAggressiveAiCharacter_C* GetDefaultObj();

	bool SetEnemyCharacter(class ASHCharacter* Character, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UnreserveEnemyRedZone(bool CallFunc_IsValid_ReturnValue, class AScout_C* K2Node_DynamicCast_AsScout, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool OnDeathState(bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_OnDeathState_ReturnValue);
	void DestroyAllWeapons(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DestroyAllWeapons_Result);
	bool UpdateCircularMovementState(float DeltaTime, bool CallFunc_UpdateCircularMovementState_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void CanChangeTarget(bool* Result);
	void UpdateSpottedCharacter(float TempDistance, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetSpottedCharacter(class APawn* Pawn);
	void AlertNoiseIgnoreCallback();
	void StartAlertNoiseIgnore(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	bool UpdateGroupMovingState(float DeltaTime, bool CallFunc_UpdateGroupMovingState_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_ValidateEnemyCharacter_Result);
	void AddNoiseAggro(float Volume, const struct FVector& Location, float* ResultAggro, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro);
	void EquipSpecialWeapon(bool CallFunc_IsValid_ReturnValue);
	void EquipDefaultWeapon(bool CallFunc_IsValid_ReturnValue);
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, bool CallFunc_BB_SynchronizeEnemyCharacter_ReturnValue, class UAggressive_SyncService_C* K2Node_DynamicCast_AsAggressive_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result);
	void BB_SyncAggroPOI(bool CallFunc_IsValid_ReturnValue);
	bool BB_SynchronizeEnemyCharacter(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BB_SynchronizeEnemyCharacter_ReturnValue);
	bool UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_SetLastNoiseLocation_Result, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	bool UpdateInspectState(float DeltaTime, bool CallFunc_UpdateNoiseAggro_Updated, bool CallFunc_UpdateInspectState_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_ValidateEnemyCharacter_Result);
	bool OnPatrolStateStop(bool CallFunc_ResetPatrolPOI_Result, bool CallFunc_OnPatrolStateStop_ReturnValue);
	bool UpdateAlertState(float DeltaTime, bool CallFunc_UpdateNoiseAggro_Updated, bool CallFunc_UpdateAlertState_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_ValidateEnemyCharacter_Result);
	void SetAggroPOI(const struct FVector& Location);
	bool UpdatePatrolState(float DeltaTime, bool CallFunc_UpdatePatrolState_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_ValidateEnemyCharacter_Result);
	void ValidateEnemyCharacter(bool* Result, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool SensingHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor, bool CallFunc_SensingHearNoise_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage, bool CallFunc_SensingTakeDamage_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	bool SensingSeePawn(class APawn* Pawn, bool FromSensor, bool CallFunc_SensingSeePawn_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetEnemyCharacter_ReturnValue, float CallFunc_GetValue_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsStealthVisible_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_AddNoiseAggro_ResultAggro, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsStealthVisible_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BaseAggressiveAiCharacter(int32 EntryPoint, bool CallFunc_NotEqual_ClassClass_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASHWeapon* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ASHWeapon* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}


