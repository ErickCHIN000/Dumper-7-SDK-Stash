#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x58 - 0x38)
// BlueprintGeneratedClass AN_Footstep_Deprecated.AN_Footstep_Deprecated_C
class UAN_Footstep_Deprecated_C : public UAnimNotify
{
public:
	enum class EFootType                         FootType;                                          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideVelocity;                                  // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2137[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverrideVelocityAmount;                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFXDelayInSeconds;                                 // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                        FootstepTypeSwitch_PreviewerOnly_;                 // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_Footstep_Deprecated_C* GetDefaultObj();

	void Get_Bucket(class UComponentAudioBucket** Bucket, enum class EFootType Temp_byte_Variable, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* K2Node_Select_Default);
	void GetSocketForPreview(class USkeletalMeshComponent* MeshComp, class FName* SocketName, class USkeletalMeshComponent* MeshCompCache, class FName PreviewSocket, class UComponentAudioBucket* CallFunc_Get_Bucket_Bucket, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	void Footstep_Sound_Type_to_Tag(enum class EFootstepSoundType SoundType, struct FGameplayTag* Value, TMap<enum class EFootstepSoundType, struct FGameplayTag> TypeToTagMap, TMap<enum class EFootstepSoundType, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void FootstepVFX(class AActor* SteppingActor, class USkeletalMeshComponent* MeshComp, double WaterDepth, struct FVector& WaterHitNormal, struct FVector& WaterHitLocation, const struct FS_NiagaraFootstepResponse& CachedNiagaraFootstepResponse, class FName AttachBone, class UAkComponent* AttachComponent, const struct FGameplayTag& FootstepTag, const struct FVector& Location, class APawn* Pawn, const TArray<struct FGameplayTag>& GroundTags, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, const struct FGameplayTag& Temp_struct_Variable, class UBP_CreatureComponent_Audio_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& CallFunc_Footstep_Sound_Type_to_Tag_Value, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class UAkComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item, class FName CallFunc_GetAttachSocketName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_NiagaraFootstepResponse& CallFunc_GetTableCellData_OutData, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnFootstep_SpawnNiagaraSystem, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags);
	void DestroyAkComponent(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, class UAkEventCallbackInfo* K2Node_DynamicCast_AsAk_Event_Callback_Info, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_FindOwnerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentSurfaceType(class UPawnMovementComponent* MovementComponent, class UAkSwitchValue** SurfaceSwitch, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess_1);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAudioComponentAggregatorComponent* CachedAggregator, const struct FVector& WaterHitLocation, const struct FVector& WaterHitNormal, double TempFootstepDistance, class UAkAudioEvent* FootstepEvent, class FName PreviewSocket, class USkeletalMeshComponent* CachedMeshComp, double WaterDepth, double MaxDistance, class AActor* CachedActor, class APawn* CachedPawn, class UAkComponent* AkComponentWater, class UAkComponent* AkComponentBody, class UAkComponent* AkComponentFoot, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, class UComponentAudioBucket* CallFunc_Get_Bucket_Bucket, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, double CallFunc_Calculate_Water_Values_WaterDepth, const struct FVector& CallFunc_Calculate_Water_Values_WaterHitNormal, const struct FVector& CallFunc_Calculate_Water_Values_WaterHitLocation, class AActor* CallFunc_GetOwner_ReturnValue, double Temp_real_Variable, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double Temp_real_Variable_1, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Should_Play_Footstep_ShouldPlayFootstep, bool Temp_bool_Variable_1, bool CallFunc_IsEditor_ReturnValue, bool Temp_bool_Variable_2, class FName CallFunc_GetSocketForPreview_SocketName, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, enum class EFootType Temp_byte_Variable, bool K2Node_Select_Default, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, TArray<class UAkComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UAkSwitchValue* CallFunc_GetCurrentSurfaceType_SurfaceSwitch, class UAkComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_VSize_ReturnValue, TArray<class UAkComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class UAkComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_Variable_10, double K2Node_Select_Default_1, int32 CallFunc_PostAkEvent_ReturnValue_2, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2, float CallFunc_SetRTPCValue_Value_ImplicitCast_3, float CallFunc_SetRTPCValue_Value_ImplicitCast_4, float CallFunc_SetRTPCValue_Value_ImplicitCast_5, float CallFunc_SetRTPCValue_Value_ImplicitCast_6, float CallFunc_SetRTPCValue_Value_ImplicitCast_7);
};

}


