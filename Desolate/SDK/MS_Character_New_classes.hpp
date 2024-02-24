#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x1301 - 0x11A9)
// BlueprintGeneratedClass MS_Character_New.MS_Character_New_C
class AMS_Character_New_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_1F10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Hands;                                             // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                PantsMesh;                                         // 0x11C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BodyMesh;                                          // 0x11D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                EyeMesh;                                           // 0x11D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                KitMesh;                                           // 0x11E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HairMesh;                                          // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BeardMesh;                                         // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHAICustomizationComponent*           SHAICustomization;                                 // 0x11F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SoClose_Music;                                     // 0x1200(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EMS_DemoniacStates                DemoniacState;                                     // 0x1208(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMS_SyncService_C*                     LocalSyncService;                                  // 0x1210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AggroPOI_0;                                        // 0x1218(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMS_PatrolPoiType                 PatrolPoiType;                                     // 0x1224(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PatrolPoiLocation;                                 // 0x1228(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PoiMaxDistance;                                    // 0x1234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DemoniacChance;                                    // 0x1238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeToNextRoll;                                    // 0x123C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DemoniacCooldown;                                  // 0x1240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeInDemoniac;                                    // 0x1244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DemoniacDuration;                                  // 0x1248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMS_PatrolPoiBase_C*                   PatrolPOI;                                         // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemyCharacterLastSeen_0;                          // 0x1258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyPositionLastSeen_0;                           // 0x125C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              HeadDynamicMaterial2;                              // 0x1268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     HeadMaterialParent2;                               // 0x1270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMS_PatrolTypes                   PatrolTypes;                                       // 0x1278(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          NormalEyeColor;                                    // 0x127C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DemoniacEyeColor;                                  // 0x128C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              EyesDynamicMaterial;                               // 0x12A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTorch;                                          // 0x12A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMadman_WeaponType                WeaponType;                                        // 0x12A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F58[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHWeapon*                             TorchWeapon;                                       // 0x12B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHWeapon*                             DemoniacTorchWeapon;                               // 0x12B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TorchWeaponClass;                                  // 0x12C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DemoniacTorchWeaponClass;                          // 0x12C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldSwitchToTorch;                              // 0x12D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TorchChance;                                       // 0x12D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TorchSwapDistance;                                 // 0x12D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldRemoveTorch;                                // 0x12DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TempLocation;                                      // 0x12E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TorchForwardJumpWeaponClass;                       // 0x12F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHWeapon_MeleeBase*                   TorchForwardJumpWeapon;                            // 0x12F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHTNActivated_0;                                   // 0x1300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AMS_Character_New_C* GetDefaultObj();

	bool OnTimeOfDayMorning();
	bool OnTimeOfDayNight();
	bool OnTimeOfDayTwilight();
	bool OnDeathState(bool CallFunc_OnDeathState_ReturnValue);
	void GetDodgeMontage(class UAnimMontage** Montage, bool CallFunc_IsUsingTorch_Result);
	void GetForwardJumpWeapon(class ASHWeapon_MeleeBase** Weapon, bool CallFunc_IsUsingTorch_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetBackwardJumpMontage(class UAnimMontage** Montage, bool CallFunc_IsUsingTorch_Result);
	void IsUsingTorch(bool* Result, class ASHWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RollTorchRemove(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RollTorch(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void BB_WeaponType(bool CallFunc_IsValid_ReturnValue);
	void SetWeaponType(enum class EMadman_WeaponType NewType);
	void InitializeEyesMaterial(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPatrolTypes(enum class EMS_PatrolTypes NewType, bool CallFunc_IsValid_ReturnValue);
	bool OnSpecialStateStop(bool CallFunc_OnSpecialStateStop_ReturnValue);
	bool SensingHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor, bool CallFunc_SensingHearNoise_ReturnValue, class ASHItem* K2Node_DynamicCast_AsSHItem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool OnPatrolStateStop(bool CallFunc_OnPatrolStateStop_ReturnValue);
	bool OnPatrolState(bool CallFunc_IsValid_ReturnValue, class ASHWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnPatrolState_ReturnValue);
	bool OnSpecialState(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnSpecialState_ReturnValue);
	void CalculateWindowOffsetLocation(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetArrowForwardVector_ForwardVector, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class UMS_SyncService_C* K2Node_DynamicCast_AsMS_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result);
	void AB_SyncState(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMS_NewAnimationBlueprint_C* K2Node_DynamicCast_AsMS_New_Animation_Blueprint, bool K2Node_DynamicCast_bSuccess);
	bool UpdateSpecialState(float DeltaTime, bool CallFunc_UpdateSpecialState_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_ValidateEnemyCharacter_Result, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	bool UpdatePatrolState(float DeltaTime, bool CallFunc_UpdatePatrolState_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void BB_SyncDemoniacState(bool CallFunc_IsValid_ReturnValue);
	void SetDemoniacState(enum class EMS_DemoniacStates NewState);
	void CalculateNextDemoniacState(int32 CallFunc_RandomInteger_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void ResetPOI(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Leave_Result);
	void AB_SyncPatrolPoi();
	void CalculatePOI(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AMS_PatrolPoiBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class AMS_PatrolPoiBase_C* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_CanJoin_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Join_Result, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3);
	bool OnDeathEvent(bool CallFunc_OnDeathEvent_ReturnValue);
	void UpdateDemoniacState(float DeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void SetNormalEyesColor();
	void SetDemoniacEyesColor();
	void ReceiveTick(float DeltaSeconds);
	void OnApplyCustomization();
	void ReceiveBeginPlay();
	void CustomEvent(float DeltaSeconds);
	void BB_SyncPatrolPoi();
	void ExecuteUbergraph_MS_Character_New(int32 EntryPoint, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class USkeletalMesh* CallFunc_Array_Get_Item_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, class USkeletalMesh* CallFunc_Array_Get_Item_3, class USkeletalMesh* CallFunc_Array_Get_Item_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ASHWeapon* CallFunc_FinishSpawningActor_ReturnValue, class ASHWeapon* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_DeltaSeconds_1, float CallFunc_GetSquaredDistanceToClosestPlayerCharacter_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSquaredDistanceToClosestPlayerCharacter_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ASHWeapon_MeleeBase* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_2, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_3);
};

}


