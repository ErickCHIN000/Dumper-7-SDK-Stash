#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x8A8 - 0x7D0)
// BlueprintGeneratedClass ba_aa_mp133_00.ba_aa_mp133_00_C
class Aba_aa_mp133_00_C : public Aba_aa_Intermediary_ActiveItem_Weapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        Fov_Changer_FOV_CD0677294B5FDC2D1C29F29A751E7CD0;  // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                Fov_Changer__Direction_CD0677294B5FDC2D1C29F29A751E7CD0; // 0x7DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2E2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fov_Changer;                                       // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCGMultitraceResult                   LastTrace;                                         // 0x7E8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class ACGAICharacter*                        LastAI;                                            // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReloadMontage;                                     // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Mp133reloadMontage;                                // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CameraMontage;                                     // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AK_Component;                                      // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MeleeCancelTimer;                                  // 0x8A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_mp133_00_C* GetDefaultObj();

	TArray<TSoftObjectPtr<class UMaterialInterface>> GetDefaultMeshMaterials(TArray<TSoftObjectPtr<class UMaterialInterface>>& K2Node_MakeArray_Array);
	struct FTransform GetOtherHandIKTarget(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void Fov_Changer__FinishedFunc();
	void Fov_Changer__UpdateFunc();
	void OnNotifyEnd_D47E0FD7498BD6734ACE088E4FAFF448(class FName NotifyName);
	void OnNotifyBegin_D47E0FD7498BD6734ACE088E4FAFF448(class FName NotifyName);
	void OnInterrupted_D47E0FD7498BD6734ACE088E4FAFF448(class FName NotifyName);
	void OnBlendOut_D47E0FD7498BD6734ACE088E4FAFF448(class FName NotifyName);
	void OnCompleted_D47E0FD7498BD6734ACE088E4FAFF448(class FName NotifyName);
	void OnNotifyEnd_3268CF604AA6E9AAA2D091A67BC609A4(class FName NotifyName);
	void OnNotifyBegin_3268CF604AA6E9AAA2D091A67BC609A4(class FName NotifyName);
	void OnInterrupted_3268CF604AA6E9AAA2D091A67BC609A4(class FName NotifyName);
	void OnBlendOut_3268CF604AA6E9AAA2D091A67BC609A4(class FName NotifyName);
	void OnCompleted_3268CF604AA6E9AAA2D091A67BC609A4(class FName NotifyName);
	void OnNotifyEnd_1DD773FE4DFB3CB75129D890E0902B79(class FName NotifyName);
	void OnNotifyBegin_1DD773FE4DFB3CB75129D890E0902B79(class FName NotifyName);
	void OnInterrupted_1DD773FE4DFB3CB75129D890E0902B79(class FName NotifyName);
	void OnBlendOut_1DD773FE4DFB3CB75129D890E0902B79(class FName NotifyName);
	void OnCompleted_1DD773FE4DFB3CB75129D890E0902B79(class FName NotifyName);
	void OnNotifyEnd_0AE2AB03424ABBE765F98BA0F1D437D4(class FName NotifyName);
	void OnNotifyBegin_0AE2AB03424ABBE765F98BA0F1D437D4(class FName NotifyName);
	void OnInterrupted_0AE2AB03424ABBE765F98BA0F1D437D4(class FName NotifyName);
	void OnBlendOut_0AE2AB03424ABBE765F98BA0F1D437D4(class FName NotifyName);
	void OnCompleted_0AE2AB03424ABBE765F98BA0F1D437D4(class FName NotifyName);
	void OnReloadFailed();
	void AlternativeActivateItem();
	void LoadingFinished();
	void OnEmptyAmmo();
	void OnLocalMelee();
	void ForceInitMagazine();
	void ActivateItem();
	void ReceiveBeginPlay();
	void OnInventoryInitialized();
	void InvUpdate();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void OnShellCollision(class FName InEventName, float InEmitterTime, int32 InParticleTime, const struct FVector& InLocation, const struct FVector& InVelocity, const struct FVector& InDirection, const struct FVector& InNormal, class FName InBoneName, class UPhysicalMaterial* InPhysMat);
	void OnUnAim();
	void CancelMelee();
	void OnBrokenWeaponUse();
	void OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState);
	void OnForceReloadFinished(bool bInNoSwap);
	void OnAim();
	void OnReload();
	void ExecuteUbergraph_ba_aa_mp133_00(int32 EntryPoint, int32 Temp_int_Variable, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, int32 Temp_int_Variable_1, class UAnimSequenceBase* Temp_object_Variable_2, class UAnimSequenceBase* Temp_object_Variable_3, int32 Temp_int_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, int32 Temp_int_Variable_4, float Temp_float_Variable_8, float Temp_float_Variable_9, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, const struct FCGNoisePerceptionProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, int32 Temp_int_Variable_5, bool K2Node_SwitchName_CmpSuccess, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, enum class EFiremode Temp_byte_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UAnimSequenceBase* Temp_object_Variable_6, class UAnimSequenceBase* Temp_object_Variable_7, class UAnimSequenceBase* Temp_object_Variable_8, enum class EFiremode Temp_byte_Variable_1, class UAnimMontage* Temp_object_Variable_9, class UAnimMontage* Temp_object_Variable_10, class UAnimMontage* Temp_object_Variable_11, enum class EFiremode Temp_byte_Variable_2, class UAnimSequenceBase* Temp_object_Variable_12, class UAnimSequenceBase* Temp_object_Variable_13, class UAnimSequenceBase* Temp_object_Variable_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class ECollisionLimb Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_10, bool Temp_bool_Variable_3, float Temp_float_Variable_11, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_2, int32 Temp_int_Variable_6, bool K2Node_SwitchName_CmpSuccess_1, class UAnimSequenceBase* Temp_object_Variable_15, class UAnimSequenceBase* Temp_object_Variable_16, int32 Temp_int_Variable_7, class UAnimSequenceBase* Temp_object_Variable_17, class UAnimSequenceBase* Temp_object_Variable_18, int32 Temp_int_Variable_8, class UAnimMontage* Temp_object_Variable_19, class UAnimMontage* Temp_object_Variable_20, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName Temp_name_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UAnimSequenceBase* K2Node_Select_Default, float K2Node_Select_Default_1, class UAnimSequenceBase* K2Node_Select_Default_2, class UAnimMontage* K2Node_Select_Default_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_BooleanOR_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, bool CallFunc_LessEqual_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFovValue_ReturnValue, float CallFunc_GetFovValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAnimSequence* Temp_object_Variable_21, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, int32 CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil, enum class EState K2Node_Event_OutTargetState, int32 CallFunc_FTrunc_ReturnValue, class FName K2Node_Event_InEventName, float K2Node_Event_InEmitterTime, int32 K2Node_Event_InParticleTime, const struct FVector& K2Node_Event_InLocation, const struct FVector& K2Node_Event_InVelocity, const struct FVector& K2Node_Event_InDirection, const struct FVector& K2Node_Event_InNormal, class FName K2Node_Event_InBoneName, class UPhysicalMaterial* K2Node_Event_InPhysMat, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select_Default_4, float K2Node_Select_Default_5, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UAnimSequenceBase* K2Node_Select_Default_6, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, class UAnimMontage* K2Node_Select_Default_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimSequenceBase* K2Node_Select_Default_8, bool K2Node_SwitchInteger_CmpSuccess_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, bool CallFunc_BooleanOR_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UAnimSequence* Temp_object_Variable_22, float CallFunc_RandomFloatInRange_ReturnValue_2, class UAnimSequence* Temp_object_Variable_23, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25, bool K2Node_Event_bInNoSwap, float CallFunc_MapRangeClamped_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue, float CallFunc_CheckPerk_ValueA_1, float CallFunc_CheckPerk_ValueB_1, bool CallFunc_CheckPerk_ReturnValue_1, float K2Node_Select_Default_9, float K2Node_Select_Default_10, float K2Node_Select_Default_11, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29, int32 Temp_int_Variable_10, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_9, class UAnimSequence* K2Node_Select_Default_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30, class AController* CallFunc_GetController_ReturnValue, int32 Temp_int_Variable_11, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31, float CallFunc_Multiply_FloatFloat_ReturnValue_3, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, TArray<struct FCGMultitraceResult>& CallFunc_CGMultitrace_OutHitResults, const struct FCGMultitraceResult& CallFunc_Array_Get_Item, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_10, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDamageDistanceModifier_OutDMGModifier, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_ApplyDamage_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class UCGPhysicalMaterial* K2Node_DynamicCast_AsCGPhysical_Material, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, enum class ECollisionLimb K2Node_Select_Default_13, const struct FCGDamageEvent& K2Node_MakeStruct_CGDamageEvent, class UAnimSequence* Temp_object_Variable_24, float CallFunc_CGApplyDamage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32, class UAnimSequence* K2Node_Select_Default_14, const struct FActiveItemAnimDatabase& K2Node_MakeStruct_ActiveItemAnimDatabase, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_Count_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_FTrunc_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAnimSequenceBase* K2Node_Select_Default_15, class UAnimSequenceBase* K2Node_Select_Default_16, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_37, int32 Temp_int_Loop_Counter_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_38, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_13, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_39, class UAnimMontage* K2Node_Select_Default_17, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
};

}


