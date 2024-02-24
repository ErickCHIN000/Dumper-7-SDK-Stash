#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCE8 (0x20C8 - 0x13E0)
// BlueprintGeneratedClass OuterCharacter.OuterCharacter_C
class AOuterCharacter_C : public ABaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13E0(0x8)(Transient, DuplicateTransient)
	class UTTLParticleOverridePrmComponent*      TTLParticleOverridePrm;                            // 0x13E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DisplayParts;                                      // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApEye;                                             // 0x13F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApHead;                                            // 0x1400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApLegL;                                            // 0x1408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApLegR;                                            // 0x1410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApHip;                                             // 0x1418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApJaw;                                             // 0x1420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBaseCampLogHUDComponent_C*            BaseCampLogHUDComponent;                           // 0x1428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Beard;                                             // 0x1430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Hair;                                              // 0x1438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBaseCampNotifyHUD_C*                  BaseCampNotifyHUD;                                 // 0x1440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0x1448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HandR;                                             // 0x1450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HandL;                                             // 0x1458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeGaugeHUDComponent_C*            ChargeGaugeHUDComponent;                           // 0x1460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ChargeGauge;                                       // 0x1468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLSplineComponent*                   TTLSpline;                                         // 0x1470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBombComponent_C*                      BombComponent;                                     // 0x1478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApArmL;                                            // 0x1480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ApArmR;                                            // 0x1488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Legs;                                              // 0x1490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ArmR;                                              // 0x1498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ArmL;                                              // 0x14A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Body;                                              // 0x14A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHumanEditComponent_C*                 HumanEditComponent;                                // 0x14B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLOuterWeaponComponent*              TTLOuterWeapon;                                    // 0x14B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIActionOuterComponent_C*             AIActionOuterComponent;                            // 0x14C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PodAttachedScene;                                  // 0x14C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ThrowMovement;                                     // 0x14D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThrowSpeed;                                        // 0x14D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLWeaponType                    SubWeaponType;                                     // 0x14D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentExplosionChargeTime;                        // 0x14DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquippingGenerade;                               // 0x14E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawInterpTime;                                     // 0x14E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AE9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanEditSettings                 HumanEditSetting;                                  // 0x14F0(0xB10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETTLEHumanGenderType              HumanCustomGender;                                 // 0x2000(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_AF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              HumanCustomPartsInfo;                              // 0x2004(0x94)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HaveCustomInfo;                                    // 0x2098(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsCharaEdit;                                       // 0x2099(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x20A0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ExposeOnSpawn)
	class FName                                  VoiceCharaID;                                      // 0x20B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTTLOuterStorageInfo                  StorageInfo;                                       // 0x20B8(0x10)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class AOuterCharacter_C* GetDefaultObj();

	void GetOuterCustomInfo(struct FTTLHumanCustomPartsInfo* OutInfo);
	enum class ETTLEHumanGenderType GetOuterGenderType();
	void SetHumanEditSettings();
	void ProcessOuterThrow(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetMeshForWeaponRight(class USkeletalMeshComponent** Mesh);
	void AttachIndependentParts(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue3, bool CallFunc_K2_AttachToComponent_ReturnValue4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue5);
	void ProcessSetTrap(class AActor* CallFunc_SpawnOuterTrap_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ProcessExplosion(float DeltaTime, bool CallFunc_IsOuterExplosionCharging_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void StartSubWeaponAttack(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetMuzzleTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_CalcShootLocation_ShootLocation);
	void ProcessSubWeaponInput(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsKnockBackDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CouldStartAttack_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanTakeDamageBP();
	void DrawThrowTrail(const struct FVector& StartLocation, int32 DivisionNum, const TArray<struct FVector>& Positions, const struct FVector& Velocity, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, float CallFunc_DegSin_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FVector& CallFunc_Array_Get_Item1, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, const struct FVector& CallFunc_CalcShootLocation_ShootLocation, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2);
	void FinishThrow();
	void LaunchGrenade();
	void UserConstructionScript(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateCharacterUI(float DeltaSeconds);
	void OnInputAttackLeft(bool Pressed);
	void OnOuterExplosion();
	void AttachLongRangeWeaponRight(class USceneComponent* WeaponMesh);
	void OuterThrowEnd();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetEventFinish(class FName EventName);
	void SetEventStart(class FName EventName);
	void ReceiveBeginPlay();
	void SetEventResumeGame(class FName EventName);
	void StartOuterThrow();
	void InitializeOuterComponent();
	void SetOuterGenderType(enum class ETTLEHumanGenderType Gender);
	void SetCameraArray();
	void SetOuterCustomInfo(struct FTTLHumanCustomPartsInfo& OutInfo);
	void ExecuteUbergraph_OuterCharacter(int32 EntryPoint, const struct FTTLAssemblePartsInfoRow& K2Node_MakeStruct_TTLAssemblePartsInfoRow, bool Temp_bool_Variable, const struct FTTLArsenalPartsInfo& K2Node_MakeStruct_TTLArsenalPartsInfo, class UClass* Temp_class_Variable, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue, class ATTLCloseRangeWeapon* K2Node_DynamicCast_AsTTLClose_Range_Weapon, bool K2Node_DynamicCast_bSuccess, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool CallFunc_IsOuterThrowing_ReturnValue, bool CallFunc_IsOuterPunchThrowing_ReturnValue, bool CallFunc_CanOuterThrowing_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_Pressed, bool CallFunc_CheckBulletInfinityMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class USceneComponent* K2Node_Event_WeaponMesh, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class FName K2Node_Event_EventName2, class FName K2Node_Event_EventName1, class FName K2Node_Event_EventName, class ATTLOuterSubWeapon* K2Node_DynamicCast_AsTTLOuter_Sub_Weapon, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AOuterTrapWeapon_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetRaderRadiusOnOuter_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_CalcOuterGranadeNumWithFluctuation_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FTTLRadarParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UTTLOuterAnimInstance* K2Node_DynamicCast_AsTTLOuter_Anim_Instance, bool K2Node_DynamicCast_bSuccess2, class ATTLWeaponBase* CallFunc_GetCurrentSupportWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryStartAim_isStartAim, bool CallFunc_IsValid_ReturnValue1, enum class ETTLEHumanGenderType K2Node_Event_gender, int32 CallFunc_Array_AddUnique_ReturnValue, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTTLHumanCustomPartsInfo& K2Node_Event_outInfo, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default);
};

}


