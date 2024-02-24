#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x13E0 - 0x1248)
// BlueprintGeneratedClass BaseCharacter.BaseCharacter_C
class ABaseCharacter_C : public ACharacterCommon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1248(0x8)(Transient, DuplicateTransient)
	class UCharacterMarkerHUD3Component_C*       CharacterMarkerHUD3Component;                      // 0x1250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterInfoHUDComponent_C*          CharacterInfoHUDComponent;                         // 0x1258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URoomInfoHUDComponent_C*               RoomInfoHUDComponent;                              // 0x1260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalApplyEffectComponent_C*        ArsenalApplyEffectComponent;                       // 0x1268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalItemMarkerHUDComponent_C*      ArsenalItemMarkerHUDComponent;                     // 0x1270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalPickUpHUD2Component_C*         ArsenalPickUpHUD2Component;                        // 0x1278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  EquipHUD;                                          // 0x1280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalEquipHUD2Component_C*          ArsenalEquipHUD2Component;                         // 0x1288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterMarkerHUD2Component_C*       CharacterMarkerHUD2Component;                      // 0x1290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalHUD2Component_C*               ArsenalHUD2Component;                              // 0x1298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalAttachedHUD2Component_C*       ArsenalAttachedHUD2Component;                      // 0x12A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalEquipComponent_C*              ArsenalEquipComponent;                             // 0x12A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalEquipHUDComponent_C*           ArsenalEquipHUDComponent;                          // 0x12B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URaderTargetComponent_C*               RaderTargetComponent;                              // 0x12B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalRaderHUDComponent_C*           ArsenalRaderHUDComponent;                          // 0x12C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalPickUpPartsHUDComponent_C*     ArsenalPickUpPartsHUDComponent;                    // 0x12C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalPickUpPartsComponent_C*        ArsenalPickUpPartsComponent;                       // 0x12D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalDamagedHUDComponent_C*         ArsenalDamagedHUDComponent;                        // 0x12D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalInstrumentHUDComponent_C*      ArsenalInstrumentHUDComponent;                     // 0x12E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalAttachedHUDComponent_C*        ArsenalAttachedHUDComponent;                       // 0x12E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalHUDComponent_C*                ArsenalHUDComponent;                               // 0x12F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalFireControlComponent_C*        ArsenalFireControlComponent;                       // 0x12F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULockonComponent_C*                    LockonComponent;                                   // 0x1300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBasicStatusComponent_C*               BasicStatusComponent;                              // 0x1308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalChangeWeaponComponent_C*       ArsenalChangeWeaponComponent;                      // 0x1310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMirageComponent_C*                    MirageComponent;                                   // 0x1318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalCatchableActorMovement_C*      ArsenalCatchableActorMovement;                     // 0x1320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArsenalMovement_C*                    ArsenalMovement;                                   // 0x1328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALongRangeWeaponCommon_C*              LongRangeWeaponOnLeft;                             // 0x1330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALongRangeWeaponCommon_C*              LongRangeWeaponOnRight;                            // 0x1338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGuarding;                                        // 0x1340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CouldChangeWeapon;                                 // 0x1341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALongRangeWeaponCommon_C*              WeaponToChange;                                    // 0x1348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangeWeaponChargeTime;                            // 0x1350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeToStartChangeWeapon;                           // 0x1354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPrepareToChangeWeapon;                           // 0x1358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableLockonUI;                                    // 0x1359(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableReticleUI;                                   // 0x135A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LongRangeWeaponClassOnLeft;                        // 0x1360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                LongRangeWeaponClassOnRight;                       // 0x1368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ATTLShoulderWeaponBase*                ShoulderWeapon;                                    // 0x1370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShoulderWeaponClass;                               // 0x1378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACloseRangeWeaponCommon_C*             CloseRangeWeaponOnLeft;                            // 0x1380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACloseRangeWeaponCommon_C*             CloseRangeWeaponOnRight;                           // 0x1388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CloseRangeWeaponClassOnLeft;                       // 0x1390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                CloseRangeWeaponClassOnRight;                      // 0x1398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ATTLWeaponShield*                      CloseWeaponShieldOnLeft;                           // 0x13A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CloseWeaponShieldClassOnLeft;                      // 0x13A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLWeaponShield*                      CloseWeaponShieldOnRight;                          // 0x13B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CloseWeaponShieldClassOnRight;                     // 0x13B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLongWpnOnLeft;                                   // 0x13C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLongWpnOnRight;                                  // 0x13C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DamageDirection;                                   // 0x13C4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLSupportWeaponBase*                 SupportWeapon;                                     // 0x13D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SupportWeaponClass;                                // 0x13D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseCharacter_C* GetDefaultObj();

	void GetCloseRangeWeapon(bool IsLeft, class ACloseRangeWeaponCommon_C** CloseRangeWeapon, bool CallFunc_IsValid_ReturnValue, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void AttachShoulderWeaponRight(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void OnRep_LongRangeWeaponOnLeft();
	void SetupCurrentWeaponsBP(bool NeedsRegisterMultiList, bool Temp_bool_Variable, class ATTLWeaponBase* Temp_object_Variable, bool Temp_bool_Variable1, class ATTLWeaponBase* Temp_object_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class ATTLWeaponBase* K2Node_Select_Default, class ATTLWeaponBase* K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class ATTLWeaponBase* K2Node_Select2_Default, class ATTLWeaponBase* K2Node_Select3_Default, class ATTLWeaponBase* K2Node_Select4_Default, class ATTLWeaponBase* K2Node_Select5_Default);
	void IsWeaponLeftVisibility(bool* IsVisibility, bool Result, bool CallFunc_IsArmWeaponVisible_ReturnValue);
	void ChangeAffiliation(enum class ETTLEStatusType NewStatus, enum class ECollisionChannel Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UTTLAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class ECollisionChannel Temp_byte_Variable1, enum class ECollisionChannel K2Node_Select_Default);
	void SetWeaponLeftVisibility(bool IsVisible);
	void GetMeshForShoulderWeaponLeft(class USkeletalMeshComponent** Mesh);
	void GetMeshForWeaponRight(class USkeletalMeshComponent** Mesh);
	void GetMeshForWeaponLeft(class USkeletalMeshComponent** Mesh);
	void AttachShoulderWeapon(class ATTLWeaponBase* Weapon);
	void AttachCloseRangeWeaponRight(class USceneComponent* WeaponMesh, class FName SocketName, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void AttachLongRangeWeaponRight(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void AttachCloseRangeWeaponLeft(class USceneComponent* WeaponMesh, class FName SocketName, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void AttachLongRangeWeaponLeft(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void IsReload(bool IsLeft, bool* Result, bool _Result, bool CallFunc_IsReloading_ReturnValue);
	void UpdateEnableLockonAndReticle(bool IsAming, bool IsOverHeat, bool CallFunc_Not_PreBool_ReturnValue);
	void IsWeaponRightVisibility(bool* IsVisivility, bool Result, bool CallFunc_IsArmWeaponVisible_ReturnValue);
	void Initialize(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult1, bool CallFunc_K2_SetActorTransform_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue2, bool CallFunc_NotEqual_ClassClass_ReturnValue1, bool CallFunc_NotEqual_ClassClass_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue3, bool CallFunc_NotEqual_ClassClass_ReturnValue3, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValidClass_ReturnValue4, bool CallFunc_NotEqual_ClassClass_ReturnValue4, class ATTLWeaponBase* CallFunc_GetCurrentRightWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class ATTLWeaponBase* CallFunc_GetCurrentLeftWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue, class ATTLShoulderWeaponBase* K2Node_DynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue1, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue2, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess2, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue3, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common1, bool K2Node_DynamicCast_bSuccess3, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue4, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_IsValidClass_ReturnValue5, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue5, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_NotEqual_ClassClass_ReturnValue5, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_SetCollisionByCharacterType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue6, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue6, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield1, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_NotEqual_ClassClass_ReturnValue6, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult2, bool CallFunc_K2_SetActorTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANewAimCamera_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult3, bool CallFunc_K2_SetActorTransform_ReturnValue3, bool CallFunc_IsValidClass_ReturnValue7, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue7, class ATTLSupportWeaponBase* K2Node_DynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_NotEqual_ClassClass_ReturnValue7, bool CallFunc_HasAuthority_ReturnValue6);
	void SetWeaponRightVisibility(bool IsVisible);
	void CalcShootLocation(const struct FVector& MuzzleLocation, float BulletSpeed, bool NeedsCalcDeviation, struct FVector* ShootLocation, bool IsLockOn, float TargetLength, class APawn* TargetCharacter, const struct FVector& CallFunc_CalcShootLocation_ShootLocation);
	void UpdateCharacterUI(float DeltaSeconds);
	void UserConstructionScript();
	void OnInputAttackRight(bool Pressed);
	void ServerLockonAimingParameter(TArray<class AActor*>& PawnList, TArray<float>& TimerList, TArray<float>& ScoreList);
	void ReloadEnd(bool IsLeft);
	void ReceiveBeginPlay();
	void OnPurgeEnd(bool IsLeft, bool IsSkipTakeTime);
	void OnTakeEnd(bool IsLeft);
	void OnInputAttackLeft(bool Pressed);
	void StopAllUIComponentBP();
	void FireBullet(bool IsLeft);
	void OnUnFireEnd(bool IsLeft);
	void OnPurgeCaughtWeaponEnd(bool IsLeft);
	void ClearWeaponActorBP(bool IsLeft);
	void OnDestroyed______0(class AActor* DestroyedActor);
	void SetWeaponActorBP(bool IsLeft, class ATTLWeaponBase* LongWeapon, class ATTLWeaponBase* CloseWeapon, class ATTLWeaponBase* ShiledWeapon);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnChangeSpectatorModeTargetBP(bool IsStart);
	void OnLanded(struct FHitResult& Hit);
	void ExecuteUbergraph_BaseCharacter(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool K2Node_CustomEvent_Pressed1, TArray<class AActor*>& K2Node_CustomEvent_PawnList, TArray<float>& K2Node_CustomEvent_TimerList, TArray<float>& K2Node_CustomEvent_ScoreList, bool K2Node_CustomEvent_IsLeft1, bool CallFunc_ReloadEndWeaponArm_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool K2Node_Event_IsLeft5, bool K2Node_Event_isSkipTakeTime, bool K2Node_Event_IsLeft4, bool K2Node_CustomEvent_Pressed, bool K2Node_CustomEvent_IsLeft, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_FireWeaponArm_ReturnValue, bool K2Node_Event_IsLeft3, bool K2Node_Event_IsLeft2, bool K2Node_Event_isLeft1, class AActor* K2Node_CustomEvent_DestroyedActor, bool K2Node_Event_isLeft, class ATTLWeaponBase* K2Node_Event_longWeapon, class ATTLWeaponBase* K2Node_Event_closeWeapon, class ATTLWeaponBase* K2Node_Event_shiledWeapon, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue7, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess1, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess2, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit1, bool CallFunc_IsValid_ReturnValue8, bool K2Node_Event_isStart);
};

}


