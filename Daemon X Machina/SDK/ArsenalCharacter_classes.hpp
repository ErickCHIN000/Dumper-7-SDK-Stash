#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x999 (0x1D79 - 0x13E0)
// BlueprintGeneratedClass ArsenalCharacter.ArsenalCharacter_C
class AArsenalCharacter_C : public ABaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13E0(0x8)(Transient, DuplicateTransient)
	class UInstallationMovement_C*               InstallationMovement;                              // 0x13E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCollectedMovement_C*                  CollectedMovement;                                 // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponRack_R;                                      // 0x13F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponRack_L;                                      // 0x1400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalPaintComponent_C*              ArsenalPaintComponent;                             // 0x1408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalDestroyPartsComponent_C*       ArsenalDestroyPartsComponent;                      // 0x1410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalParticleArmorComponent_C*      ArsenalParticleArmorComponent;                     // 0x1418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             Legs;                                              // 0x1420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalChangePartsComponent_C*        ArsenalChangePartsComponent;                       // 0x1428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             Inside;                                            // 0x1430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             CenterBody;                                        // 0x1438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             ArmR;                                              // 0x1440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             ArmL;                                              // 0x1448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalPartsComponent*             Head;                                              // 0x1450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Parts_PTArmor_R;                                   // 0x1458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Parts_PTArmor_L;                                   // 0x1460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShieldComponent_C*                    ShieldComponent;                                   // 0x1468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIActionArsenalComponent_C*           AIActionArsenalComponent;                          // 0x1470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HavePartsList;                                     // 0x1478(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_C6B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x1480(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ExposeOnSpawn)
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x1490(0x310)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSetUpPaintCompleted;                             // 0x17A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSetupHUDCompleted;                               // 0x17A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C6E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PartsListID;                                       // 0x17A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  PostProcessSetting;                                // 0x17B0(0x520)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETTLEStatusType                   SpawnStatus;                                       // 0x1CD0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSetUpInnerOuterCompleted;                        // 0x1CD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSetUpPlayerLightningMovement;                    // 0x1CD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C71[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              InnerOuterInfo;                                    // 0x1CD4(0x94)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              InnerOuterGender;                                  // 0x1D68(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_C73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VoiceCharaID;                                      // 0x1D70(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseMemoryOptimizedWeaponForWreckedArsenal;         // 0x1D78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AArsenalCharacter_C* GetDefaultObj();

	bool CaptureWeapon_CancelForCharacter(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue);
	class FName GetPartsListID();
	void GetArsenalPaintInfo(struct FTTLArsenalPaintInfo* PaintInfo);
	void PurgeCaptureWeaponMain(enum class ETTLArsenalCloseRangeAttackType AttackType, class ATTLWeaponBase* CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBrokenWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, class ATTLWeaponBase* CallFunc_GetCurrentRightCaughtWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsBrokenWeapon_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue3);
	void SettingInBaseCampEvent(class UArsenalParticleArmorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInBaseCamp_ReturnValue);
	class USkeletalMeshComponent* GetRightArmMesh();
	class USkeletalMeshComponent* GetLeftArmMesh();
	void SetSkillListFromNPCMetaID(bool CallFunc_IsPlayerControlled_ReturnValue, TArray<class FName>& CallFunc_GetSkillListFromNPCMetaID_List, int32 CallFunc_GetSkillListFromNPCMetaID_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetupGetOnArsenalCharacter(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetHUDComponentTickEnabled(bool IsEnable);
	void ResetArsenalParts(const struct FTTLPlayerAssembleInfo& AssembleInfo);
	void SetupInnerOuterCharacter(class AOuterInArsenalCharacter_C* SpawnedOuterInArsenal, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_CanSpawnInnerOuter_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class AOuterInArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class FName CallFunc_GetOuterIDFromNPCID_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class UClass* CallFunc_GetOuterClass_ReturnValue, class AOuterInArsenalCharacter_C* CallFunc_FinishSpawningActor_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsOuter_Character, bool K2Node_ClassDynamicCast_bSuccess);
	void SetupCurrentWeaponForNPC(class ATTLWeaponBase* CallFunc_GetCurrentSupportWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentShoulderWeapon_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentRightWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class ATTLWeaponBase* CallFunc_GetCurrentLeftWeapon_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupWeaponRack(class ATTLWeaponBase* CallFunc_PickFromWeaponRack_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_FindWeaponClass_ReturnValue, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue, class UClass* CallFunc_FindWeaponClass_ReturnValue1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class ATTLWeaponBase* CallFunc_PickFromWeaponRack_ReturnValue1, bool CallFunc_IsValid_ReturnValue3);
	void InitializePartsList(const struct FTTLArsenalPartsInfoList& CallFunc_InitializeNonPlayerPartsList_partsList, bool CallFunc_NotEqual_NameName_ReturnValue);
	void SetWeaponRackVisibility(bool IsVisible);
	void CaptureWeapon_Start(class APawn* WeaponPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsLanded_ReturnValue, bool CallFunc_IsValid_ReturnValue4);
	bool CaptureWeapon_IsGrabControl(bool CallFunc_IsValid_ReturnValue);
	void InitializeArsenalSkill(bool SkipVP);
	void GetWeaponParameter(int32 Position, struct FTTLWeaponParamBaseRow* Param, class FName RackWeaponID, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result1, const struct FTTLWeaponParamBaseRow& CallFunc_MissileParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result2, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result2, class FName CallFunc_GetRightWeaponRackIDandAttachment_weaponID, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment1, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment2, class FName CallFunc_GetRightWeaponRackIDandAttachment_Attachment3, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6, class FName CallFunc_GetLeftWeaponRackIDandAttachment_weaponID, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2, class FName CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3, bool CallFunc_IsValid_ReturnValue6, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, bool CallFunc_IsValid_ReturnValue7, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result3, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow9, bool CallFunc_GetDataTableRowFromName_ReturnValue9, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow10, bool CallFunc_GetDataTableRowFromName_ReturnValue10, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result3, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result4, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9, const struct FTTLWeaponParamBaseRow& CallFunc_SupportWeaponParamToBaseParam_result, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow11, bool CallFunc_GetDataTableRowFromName_ReturnValue11, const struct FTTLWeaponParamBaseRow& CallFunc_CloseRangeParamToBaseParam_result5, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow12, bool CallFunc_GetDataTableRowFromName_ReturnValue12, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11, const struct FTTLWeaponParamBaseRow& CallFunc_LongRangeParamToBaseParam_result4, const struct FTTLWeaponParamBaseRow& CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12);
	void CalcArsenalParameter(class UChaseAutoRunComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param, bool CallFunc_IsValid_ReturnValue, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param1, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param2, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param3, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param4, const struct FTTLWeaponParamBaseRow& CallFunc_GetWeaponParameter_Param5, const struct FTTLPartsArmRightParamRow& CallFunc_CalcArmRightParameterWithAttachment_outParameter, bool CallFunc_CalcArmRightParameterWithAttachment_ReturnValue, const struct FTTLPartsArmLeftParamRow& CallFunc_CalcArmLeftParameterWithAttachment_outParameter, bool CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue, const struct FTTLPartsLegsParamRow& CallFunc_CalcLegsParameterWithAttachment_outParameter, bool CallFunc_CalcLegsParameterWithAttachment_ReturnValue, const struct FTTLPartsInsideParamRow& CallFunc_CalcInsideParameterWithAttachment_outParameter, bool CallFunc_CalcInsideParameterWithAttachment_ReturnValue, const struct FTTLPartsBodyParamRow& CallFunc_CalcBodyParameterWithAttachment_outParameter, bool CallFunc_CalcBodyParameterWithAttachment_ReturnValue, const struct FTTLPartsHeadParamRow& CallFunc_CalcHeadParameterWithAttachment_outParameter, bool CallFunc_CalcHeadParameterWithAttachment_ReturnValue, class UTurtleGameInstance_C* CallFunc_GetGameInstance_Result, const struct FTTLPartsTotalParam& CallFunc_CalcArsenalTotalParam_TotalParam, class UTTLBasicStatusComponent* CallFunc_CalcBasicStatus_BasicStatus);
	void CreateWeaponClassFromPartsInfo(const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_ClassDynamicCast_bSuccess1, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3, class UClass* K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1, bool K2Node_ClassDynamicCast_bSuccess2, class UClass* K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot, bool K2Node_ClassDynamicCast_bSuccess3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5, class UClass* K2Node_ClassDynamicCast_AsTTLWeapon_Shield, bool K2Node_ClassDynamicCast_bSuccess4, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common, bool K2Node_ClassDynamicCast_bSuccess5, class UClass* K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common, bool K2Node_ClassDynamicCast_bSuccess6, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7, class UClass* K2Node_ClassDynamicCast_AsTTLWeapon_Shield1, bool K2Node_ClassDynamicCast_bSuccess7, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1, bool K2Node_ClassDynamicCast_bSuccess8, class UClass* K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1, bool K2Node_ClassDynamicCast_bSuccess9, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8, class UClass* K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2, bool K2Node_ClassDynamicCast_bSuccess10);
	void CreatePartsFromPartsInfo(bool CreatPartsResult, bool CallFunc_IsValid_ReturnValue, const struct FTTLArsenalPartsPaintInfo& K2Node_MakeStruct_TTLArsenalPartsPaintInfo);
	void GetMeshForShoulderWeaponLeft(class USkeletalMeshComponent** Mesh);
	void GetMeshForWeaponRight(class USkeletalMeshComponent** Mesh);
	void GetMeshForWeaponLeft(class USkeletalMeshComponent** Mesh);
	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void MulticastArsenalPreGetOn(class AArsenalController_C* SrcController, class ABaseCharacter_C* OuterCharacter, class ATTLCharacterCommon* OldArsenal);
	void OnEndOuterGetOnMotion(class AActor* OuterCharacter);
	void OnGetOnComplete(enum class ETTLEStatusType OuterStatus, class AArsenalController_C* Target, class AOuterCharacter_C* Outer, TArray<class FName>& OuterSkill);
	void OnChangeArsenalCommon(enum class ETTLEStatusType NewStatusType, TArray<class FName>& SkillList);
	void UpdateSkillOnGetOn();
	void LatentActionAfterGetOnCameraWait(class ATTLPlayerController* PlayerController, TArray<class FName>& SkillList, enum class ETTLEStatusType OuterStatus);
	void ReceiveBeginPlay();
	void AttachLongRangeWeaponLeft(class USceneComponent* WeaponMesh);
	void AttachCloseRangeWeaponLeft(class USceneComponent* WeaponMesh, class FName SocketName);
	void AttachLongRangeWeaponRight(class USceneComponent* WeaponMesh);
	void AttachCloseRangeWeaponRight(class USceneComponent* WeaponMesh, class FName SocketName);
	void Initialize();
	void OnArsenalGetOnCommon(enum class ETTLEStatusType NewStatusType, bool IsChangeArsenal, TArray<class FName>& SkillList);
	void OnArsenalGetOn(bool IsChangeArsenal, TArray<class FName>& SkillList, enum class ETTLEStatusType NewStatusType);
	void OnStatusDead();
	void StartGetOnArsenal(bool IsChangeArsenal, TArray<class FName>& SkillList, enum class ETTLEStatusType NewStatusType);
	void OnBadStatusVFXStart(enum class ETTLEAbnormalStatusType Type, class UTTLBadStatusVFXComponent* badStatusComp, bool IsHeal);
	void OnBadStatusVFXEnd(enum class ETTLEAbnormalStatusType Type, class UTTLBadStatusVFXComponent* badStatusComp, bool IsHeal);
	void SetEventFinish(class FName EventName);
	void SetEventStart(class FName EventName);
	void SetCameraArray();
	void OnMulticastStartGetOff();
	void OnSuccessStartCaptureWeaponBP();
	void RunOnServerStartGetOff();
	void StartOuterGetOff();
	void SetEventResumeGame(class FName EventName);
	void DebugChangeEquipList();
	void PurgeCaptureWeapon(enum class ETTLArsenalCloseRangeAttackType AttackType);
	void AttachShoulderWeapon(class ATTLWeaponBase* Weapon);
	void ResetArsenalPartsBp(struct FTTLPlayerAssembleInfo& AssembleInfo);
	void SetPaintInfo(struct FTTLArsenalPaintInfo& PaintInfo);
	void SetPartsListIDBP(class FName PartsListID);
	void InitializeLightingMovement();
	void InitializeInventory();
	void InitializeInnerOuter();
	void UpdateMaterialMesh();
	void InitializeHUD(bool TickEnabled);
	void InitializeArsenalPaint(class UTTLArsenalPaintComponent* PaintComponent);
	void CancelCloseRangeAttack(enum class ETTLArsenalCloseRangeAttackType AttackType);
	void SetAssembleInfo(struct FTTLPlayerAssembleInfo& AssembleInfo);
	void ExecuteUbergraph_ArsenalCharacter(int32 EntryPoint, class AArsenalController_C* K2Node_CustomEvent_SrcController, class ABaseCharacter_C* K2Node_CustomEvent_OuterCharacter1, class ATTLCharacterCommon* K2Node_CustomEvent_OldArsenal, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable, class UPlayerLightningMovement_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* K2Node_CustomEvent_outerCharacter, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue2, class AController* CallFunc_GetController_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller, bool K2Node_DynamicCast_bSuccess3, enum class ETTLEStatusType K2Node_CustomEvent_OuterStatus, class AArsenalController_C* K2Node_CustomEvent_Target, class AOuterCharacter_C* K2Node_CustomEvent_Outer, TArray<class FName>& K2Node_CustomEvent_OuterSkill, bool CallFunc_IsValid_ReturnValue3, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType3, TArray<class FName>& K2Node_CustomEvent_SkillList3, bool CallFunc_ProcessGetOnArsenalCompleted_IsChange, bool CallFunc_IsValid_ReturnValue4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ATTLPlayerController* K2Node_Event_playerController, TArray<class FName>& K2Node_Event_skillList, enum class ETTLEStatusType K2Node_Event_outerStatus, bool CallFunc_IsValid_ReturnValue5, class AController* CallFunc_GetController_ReturnValue1, bool CallFunc_CheckControllerForClientGetonfinish_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller1, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_ProcessGetOnArsenalCompleted_IsChange1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue1, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP1, bool K2Node_DynamicCast_bSuccess6, class USceneComponent* K2Node_Event_WeaponMesh3, class USceneComponent* K2Node_Event_WeaponMesh2, class FName K2Node_Event_SocketName1, class USceneComponent* K2Node_Event_WeaponMesh1, class USceneComponent* K2Node_Event_WeaponMesh, class FName K2Node_Event_SocketName, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType2, bool K2Node_CustomEvent_IsChangeArsenal2, TArray<class FName>& K2Node_CustomEvent_SkillList2, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue2, bool CallFunc_K2_AttachToComponent_ReturnValue3, bool CallFunc_K2_AttachToComponent_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue5, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue6, bool CallFunc_K2_AttachToComponent_ReturnValue7, bool K2Node_CustomEvent_IsChangeArsenal1, TArray<class FName>& K2Node_CustomEvent_SkillList1, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType1, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_CustomEvent_IsChangeArsenal, TArray<class FName>& K2Node_CustomEvent_SkillList, enum class ETTLEStatusType K2Node_CustomEvent_NewStatusType, const struct FVector& CallFunc_MakeVector_ReturnValue, class UTTLArsenalDestroyPartsComponent* CallFunc_GetComponentByClass_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsCompletelyDestroyed_ReturnValue, bool CallFunc_IsCompletelyDestroyed_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool Temp_bool_IsClosed_Variable, enum class ETTLEAbnormalStatusType K2Node_Event_Type1, class UTTLBadStatusVFXComponent* K2Node_Event_badStatusComp1, bool K2Node_Event_isHeal1, enum class ETTLEAbnormalStatusType K2Node_Event_Type, class UTTLBadStatusVFXComponent* K2Node_Event_badStatusComp, bool K2Node_Event_isHeal, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, class FName K2Node_Event_EventName2, class FName K2Node_Event_EventName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_StartUseCaptureWeaponCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue2, class UDemoArsenal_AnimBP_C* K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsValid_ReturnValue8, class FName K2Node_Event_EventName, const struct FTTLPlayerAssembleInfo& K2Node_MakeStruct_TTLPlayerAssembleInfo, bool CallFunc_IsCompletelyDestroyed_ReturnValue2, bool CallFunc_IsCompletelyDestroyed_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLArsenalCloseRangeAttackType K2Node_Event_attackType1, class ATTLWeaponBase* K2Node_Event_Weapon, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, TArray<class USkeletalMeshComponent*>& CallFunc_GetMovableUnits_MeshList_outArray, const struct FTTLPlayerAssembleInfo& K2Node_Event_assembleInfo1, const struct FTTLArsenalPaintInfo& K2Node_Event_paintInfo, class FName K2Node_Event_partsListID, class FName CallFunc_SetupAndGetRandomPartsID_partsID, bool CallFunc_SetupAndGetRandomPartsID_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_tickEnabled, class UTTLArsenalPaintComponent* K2Node_Event_paintComponent, enum class ETTLArsenalCloseRangeAttackType K2Node_Event_attackType, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_Array_AddUnique_ReturnValue1, const struct FTTLPlayerAssembleInfo& K2Node_Event_assembleInfo);
};

}

