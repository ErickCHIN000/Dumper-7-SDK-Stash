#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x778 - 0x730)
// BlueprintGeneratedClass ba_aa_Flare_00.ba_aa_Flare_00_C
class Aba_aa_Flare_00_C : public ACGWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x730(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        SetFOVTL_FOV_0C6491894BE34045B448C5895DEEFE2F;     // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                SetFOVTL__Direction_0C6491894BE34045B448C5895DEEFE2F; // 0x73C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_17B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SetFOVTL;                                          // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSwing;                                            // 0x748(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          HandsThrow;                                        // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CameraThrow;                                       // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FlareThrow;                                        // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFinished;                                         // 0x768(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              FlareEffect;                                       // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_Flare_00_C* GetDefaultObj();

	void SetFOVTL__FinishedFunc();
	void SetFOVTL__UpdateFunc();
	void OnNotifyEnd_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName);
	void OnNotifyBegin_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName);
	void OnInterrupted_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName);
	void OnBlendOut_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName);
	void OnCompleted_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName);
	void ActivateItem();
	void ActivationButtonReleased();
	void OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState);
	void RemoveFlare();
	void AlternativeActivateItem();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void OnForceReloadFinished(bool bInNoSwap);
	void ExecuteUbergraph_ba_aa_Flare_00(int32 EntryPoint, bool K2Node_Event_bInNoSwap, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float CallFunc_GetFovValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_GetFovValue_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, float CallFunc_Lerp_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_Remove_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_SwapActiveItem_OutSwapSuccessful, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_HideShowActiveItem_OutActionSuccessful, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, float CallFunc_Count_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UClass* K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, class Aba_aa_emptyhands_00_C* K2Node_DynamicCast_AsBa_Aa_Emptyhands_00, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class Aba_Flare_00_C* CallFunc_FinishSpawningActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, enum class EState K2Node_Event_OutTargetState, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, int32 CallFunc_PostEvent_ReturnValue);
};

}


