#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x318 - 0x220)
// BlueprintGeneratedClass Ballistazooka.Ballistazooka_C
class ABallistazooka_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Ballsitazooka;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Ballistazooka_Hide_Alpha_8258F762413BBEAECD4CFDBC156BAFD5; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Ballistazooka_Hide__Direction_8258F762413BBEAECD4CFDBC156BAFD5; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3586[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Ballistazooka_Hide;                       // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterEquipMontage;                             // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterEquipAndReload;                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterUnequipMontage;                           // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterReloadMontage;                            // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEquipped_;                                        // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsReloading_;                                     // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bProjectileLoaded_;                                // 0x26A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFastReloading_;                                 // 0x26B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bQuickUnequip;                                     // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3594[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          ZeroBase;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                EquipCamShake;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ReloadCamShake;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUnequipFinished;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  MuzzleLocationSocketName;                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterFireMontage;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FiringParticleEffect;                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CharacterOutOfAmmoReloadMontage;                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ProjectileClass;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FireCamShake;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEquipFinished;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                          WeaponFireMontage;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          WeaponReloadMontage;                               // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  FireForceFeedbackEffect;                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ReloadForceFeedback;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          WeaponIdleToReloadMontage;                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageMultiplier;                                  // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadRate;                                        // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadRateMultiplier;                              // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_BoltType                     EBoltType;                                         // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecialEffectChance;                               // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpecialEffectXValue;                               // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABallistazooka_C* GetDefaultObj();

	struct FTransform GetBoltSpawnTransform(bool Temp_bool_Variable, const struct FTransform& CallFunc_GetCameraProjectileSpawnTransform_SpawnTransform, bool CallFunc_ShouldSpawnProjectileFromCamera_bSpawnFromCamera, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& K2Node_Select_Default);
	float GetReloadRate(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetCameraProjectileSpawnTransform(struct FTransform* SpawnTransform, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void ShouldSpawnProjectileFromCamera(bool* bSpawnFromCamera, const struct FVector& CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void PlayClientFireEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void InterpWeaponRotationTowardsSocketRotation(float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void IsWeaponAiming(bool* ShouldRotateWeaponTowardsAimTarget, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InterpWeaponRotationTowardsAimTarget(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void GetCameratTraceImpactLocation(struct FVector* CameraTargetTraceLocation, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void DoFireProjectile(const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABalistazookaProjectile_Explosive_Blast_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABalistazookaProjectile_Explosive_Poison_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_2, bool CallFunc_RandomBoolWithWeight_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABalistazookaProjectile_Explosive_Ice_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABalistazookaProjectile_Explosive_Fire_C* CallFunc_FinishSpawningActor_ReturnValue_3, const struct FTransform& CallFunc_GetBoltSpawnTransform_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABalistazookaProjectile_C* CallFunc_FinishSpawningActor_ReturnValue_4);
	void ConsumeAmmo(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1);
	void HasAmmoToReload(bool* bHasAmmo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount);
	void CanReload(bool* bCanReload, bool CallFunc_HasAmmoToReload_bHasAmmo, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void CanFire(bool* bCanFire_, bool CallFunc_BooleanAND_ReturnValue);
	void Timeline_Ballistazooka_Hide__FinishedFunc();
	void Timeline_Ballistazooka_Hide__UpdateFunc();
	void OnNotifyEnd_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName);
	void OnNotifyBegin_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName);
	void OnInterrupted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName);
	void OnBlendOut_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName);
	void OnCompleted_C3566AE24B3CFF7EBB50BDBDF8D3A9FF(class FName NotifyName);
	void OnNotifyEnd_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName);
	void OnNotifyBegin_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName);
	void OnInterrupted_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName);
	void OnBlendOut_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName);
	void OnCompleted_69C89DB84D5FCA7448D684BBEF8CA318(class FName NotifyName);
	void OnNotifyEnd_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName);
	void OnNotifyBegin_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName);
	void OnInterrupted_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName);
	void OnBlendOut_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName);
	void OnCompleted_158DE4FE4B21BA6AFD4CC192F0A9D62F(class FName NotifyName);
	void OnNotifyEnd_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName);
	void OnNotifyBegin_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName);
	void OnInterrupted_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName);
	void OnBlendOut_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName);
	void OnCompleted_A26BFC9D4E8525E44F7C0D81F082264F(class FName NotifyName);
	void OnNotifyEnd_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName);
	void OnNotifyBegin_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName);
	void OnInterrupted_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName);
	void OnBlendOut_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName);
	void OnCompleted_0177B7C04E6679C49EEED8B5CE9630E0(class FName NotifyName);
	void OnNotifyEnd_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName);
	void OnNotifyBegin_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName);
	void OnInterrupted_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName);
	void OnBlendOut_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName);
	void OnCompleted_56C202954E2FFFBCD7D60892A75D6AEF(class FName NotifyName);
	void Unequip();
	void EquipAndAttachToCharacter(class AZero_Base_C* Character);
	void PlayOutOfAmmoMontageIfNotCurrentlyReloading();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void AttachToCharacter(class AZero_Base_C* WieldingCharacter);
	void QuickUnequip();
	void Ballistazooka_Hide_Event();
	void Ballistazooka_Hide_Stop();
	void OnOpacityChanged(float Opacity);
	void CheckBallistazookaOpacity();
	void DoReload(class UAnimMontage* ReloadMontage, class UAnimMontage* WeaponMontage, bool IsEquipAndFastReload);
	void TryReload();
	void TryFire();
	void ExecuteUbergraph_Ballistazooka(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName Temp_name_Variable_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_27, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_HasAmmoToReload_bHasAmmo, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_CustomEvent_Character, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_HasAmmoToReload_bHasAmmo_1, class FName K2Node_CustomEvent_NotifyName_28, class AZero_Base_C* K2Node_CustomEvent_WieldingCharacter, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float K2Node_CustomEvent_Opacity, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBallistazookaOpacity_Opacity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName Temp_name_Variable_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetReloadRate_ReturnValue, float CallFunc_GetReloadRate_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_26, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UAnimMontage* K2Node_CustomEvent_ReloadMontage, class UAnimMontage* K2Node_CustomEvent_WeaponMontage, bool K2Node_CustomEvent_isEquipAndFastReload, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_CanReload_bCanReload, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_29, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void OnEquipFinished__DelegateSignature();
	void OnUnequipFinished__DelegateSignature(bool Completed);
};

}


