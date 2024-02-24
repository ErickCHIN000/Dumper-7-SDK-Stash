#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x58 - 0x38)
// BlueprintGeneratedClass AN_Footstep_Base.AN_Footstep_Base_C
class UAN_Footstep_Base_C : public UAnimNotify_FootstepBase
{
public:
	struct FGameplayTag                          LocomotionTag;                                     // 0x38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FallbackCreatureTag;                               // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class EFootType                         FootType;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideVelocity;                                  // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverrideVelocityAmount;                            // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_Footstep_Base_C* GetDefaultObj();

	void SetWaterDepthRTPC(double WaterDepth, class UAkComponent* AkComponent, int32 InterpolationTime, bool Temp_bool_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, float CallFunc_GetRTPCValue_Value, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType, float CallFunc_GetRTPCValue_Value_1, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
	void Get_Bucket(class UComponentAudioBucket** Foot_Type_Bucket, enum class EFootType Temp_byte_Variable, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* K2Node_Select_Default);
	void GetSocketForPreview(class USkeletalMeshComponent* MeshComp, class FName* SocketName, class FName PreviewSocket, class UComponentAudioBucket* CallFunc_Get_Bucket_Foot_Type_Bucket, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UFootstepComponent* FootstepComponent, class FName PreviewSocket, class USkeletalMeshComponent* CachedMeshComp, class AActor* CachedActor, class UAkComponent* AkComponentFoot, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, bool Temp_bool_Variable, bool Temp_bool_Variable_1, double Temp_real_Variable_8, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, double Temp_real_Variable_9, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_10, enum class EFootType Temp_byte_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetAnimationEditorWaterDepth_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryTriggerFootstep_ReturnValue, class UFootstepComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UAkSwitchValue* CallFunc_GetAnimationEditorMaterialSwitch_ReturnValue, class UComponentAudioBucket* CallFunc_Get_Bucket_Foot_Type_Bucket, float CallFunc_GetAnimationEditorWaterDepth_ReturnValue_1, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetAnimationEditorWaterDepth_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_FootstepAudioEventData& CallFunc_GetTableCellData_OutData, bool CallFunc_IsEditor_ReturnValue_1, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess_1, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetSocketForPreview_SocketName, double K2Node_Select_Default_1, double K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast, float CallFunc_TryTriggerFootstep_OverrideVelocityAmount_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_SetWaterDepthRTPC_WaterDepth_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
};

}


