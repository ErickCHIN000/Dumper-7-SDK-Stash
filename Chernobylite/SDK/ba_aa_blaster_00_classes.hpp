#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x920 - 0x7D0)
// BlueprintGeneratedClass ba_aa_blaster_00.ba_aa_blaster_00_C
class Aba_aa_blaster_00_C : public Aba_aa_Intermediary_ActiveItem_Weapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        UpdatePSLightBrightness_PSLightBrightness_5FEF6E8146787B6B084AB7A99D06EDFB; // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                UpdatePSLightBrightness__Direction_5FEF6E8146787B6B084AB7A99D06EDFB; // 0x7DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_298F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    UpdatePSLightBrightness;                           // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateParameters_ParameterLerp_57C78F2A46825A59D8BA5095301E82CE; // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                UpdateParameters__Direction_57C78F2A46825A59D8BA5095301E82CE; // 0x7EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2995[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    UpdateParameters;                                  // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOVTL_FOV_D482433F4F075C28162924B18917415D;        // 0x7F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                FOVTL__Direction_D482433F4F075C28162924B18917415D; // 0x7FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_299D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FOVTL;                                             // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbp_ch_igorfpp_01_C*                  Abp;                                               // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReloadMontage;                                     // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          blasterReloadMontage;                              // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CameraMontage;                                     // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCGMultitraceResult>           LastMultitrace;                                    // 0x828(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FCGMultitraceResult                   LastSingleMultitrace;                              // 0x838(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class ACGAICharacter*                        LastHitCGAI;                                       // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ShootFinishedReleased;                             // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShootingTimerHandle;                               // 0x8E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoading;                                          // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              LensMDI;                                           // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousLensEmissive;                              // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              PS_LeftBarrelAttachment;                           // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_RightBarrelAttachment;                          // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousPSLightBrighttness;                        // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              PS_ChargeUpParticle;                               // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_blaster_00_C* GetDefaultObj();

	TArray<TSoftObjectPtr<class UMaterialInterface>> GetDefaultMeshMaterials(TArray<TSoftObjectPtr<class UMaterialInterface>>& K2Node_MakeArray_Array);
	void FOVTL__FinishedFunc();
	void FOVTL__UpdateFunc();
	void UpdateParameters__FinishedFunc();
	void UpdateParameters__UpdateFunc();
	void UpdatePSLightBrightness__FinishedFunc();
	void UpdatePSLightBrightness__UpdateFunc();
	void OnNotifyEnd_EBD5452546426313B3627385FC621266(class FName NotifyName);
	void OnNotifyBegin_EBD5452546426313B3627385FC621266(class FName NotifyName);
	void OnInterrupted_EBD5452546426313B3627385FC621266(class FName NotifyName);
	void OnBlendOut_EBD5452546426313B3627385FC621266(class FName NotifyName);
	void OnCompleted_EBD5452546426313B3627385FC621266(class FName NotifyName);
	void OnNotifyEnd_B9A7C3ED461B074270C7B7B32F46947D(class FName NotifyName);
	void OnNotifyBegin_B9A7C3ED461B074270C7B7B32F46947D(class FName NotifyName);
	void OnInterrupted_B9A7C3ED461B074270C7B7B32F46947D(class FName NotifyName);
	void OnBlendOut_B9A7C3ED461B074270C7B7B32F46947D(class FName NotifyName);
	void OnCompleted_B9A7C3ED461B074270C7B7B32F46947D(class FName NotifyName);
	void OnNotifyEnd_A5F7AD5D427417FCFD57B2A8117E15F5(class FName NotifyName);
	void OnNotifyBegin_A5F7AD5D427417FCFD57B2A8117E15F5(class FName NotifyName);
	void OnInterrupted_A5F7AD5D427417FCFD57B2A8117E15F5(class FName NotifyName);
	void OnBlendOut_A5F7AD5D427417FCFD57B2A8117E15F5(class FName NotifyName);
	void OnCompleted_A5F7AD5D427417FCFD57B2A8117E15F5(class FName NotifyName);
	void OnForceReloadFinished(bool bInNoSwap);
	void OnReloadFailed();
	void OnAim();
	void OnUnAim();
	void OnLocalMelee();
	void ForceInitMagazine();
	void OnReload();
	void OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState);
	void OnEmptyAmmo();
	void OnCancelRequest();
	void ActivateItem();
	void ActivationButtonReleased();
	void StopLoading();
	void ReceiveBeginPlay();
	void UpdateMaterialDynamicParameters();
	void OnInventoryInitialized();
	void InvUpdate();
	void UpdateParticlesLightBrightness(float NewPSLightBrightness, float Speed);
	void AlternativeActivateItem();
	void OnBrokenWeaponUse();
	void ExecuteUbergraph_ba_aa_blaster_00(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, const struct FCGNoisePerceptionProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, bool K2Node_Event_bInNoSwap, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, float CallFunc_GetFovValue_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetFovValue_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, float CallFunc_Lerp_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, int32 CallFunc_PostEvent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_9, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, bool CallFunc_CheckIfValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_2, float K2Node_Select_Default, float CallFunc_MakeLiteralFloat_ReturnValue_3, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, float K2Node_CustomEvent_NewPSLightBrightness, float K2Node_CustomEvent_Speed, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Lerp_ReturnValue_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class Aba_bfgProjectile_00_C* CallFunc_FinishSpawningActor_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, bool CallFunc_SetEvent_ReturnValue);
	void ShootFinishedReleased__DelegateSignature();
};

}


