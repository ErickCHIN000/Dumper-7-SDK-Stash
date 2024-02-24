#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2C0 - 0x24C)
// BlueprintGeneratedClass BP_MountPreview.BP_MountPreview_C
class ABP_MountPreview_C : public ABP_ActorPreview_C
{
public:
	uint8                                        Pad_1AC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                MountMesh;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AIcarusMountCharacter*                 Mount;                                             // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        ArmourPieces;                                      // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         UpdateEquipment;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseMasterPose;                                     // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AF8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x27C(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPreviewCameraSettingsEnum            CurrentCameraFocus;                                // 0x2B0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MountPreview_C* GetDefaultObj();

	void InitialiseGFur(bool CallFunc_IsValid_ReturnValue, class UGFurComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UActorComponent* CallFunc_DuplicateActorComponent_OutComponent, bool CallFunc_DuplicateActorComponent_ReturnValue, class UGFurComponent* K2Node_DynamicCast_AsgFur, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ResolveVisibility(bool* Visible);
	void ApplyDefaultMaterialOverride(class USkeletalMeshComponent* MeshComponent, bool CallFunc_IsValid_ReturnValue);
	void TickCameraPosition(float DeltaSeconds, bool ForceInstant, float TransformInterpSpeed, float FOVInterpSpeed, const struct FPreviewCameraSettings& CameraSettings, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FTransform& CallFunc_TInterpTo_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FPreviewCameraSettingsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FPreviewCameraSettings& CallFunc_GetPreviewCameraSettingsStruct_PreviewCameraSettings, enum class EValid CallFunc_GetPreviewCameraSettingsStruct_Paths, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, bool K2Node_SwitchEnum_CmpSuccess);
	void SetCameraFocus(const struct FPreviewCameraSettingsEnum& NewCameraFocus, bool InstantUpdate);
	void GetShowOnlyComponents(TArray<class UPrimitiveComponent*>* OutComponents, const TArray<class UPrimitiveComponent*>& Temp, TArray<class UPrimitiveComponent*>& CallFunc_GetShowOnlyComponents_OutComponents, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array);
	void ForceLOD_OnSkeletalMesh(class USkeletalMeshComponent* InSkeletalMeshComponent, bool ForceLOD_0, float CallFunc_SelectFloat_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ClearCurrentMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UPrimitiveComponent*>& CallFunc_GetShowOnlyComponents_OutComponents, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void CheckMountMeshes();
	void GetMount(class AIcarusMountCharacter** Mount);
	void SetMount(class AIcarusMountCharacter* InMount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FIcarusMount& CallFunc_GetMountsStruct_Mounts, enum class EValid CallFunc_GetMountsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FPreviewCameraSettingsEnum& CallFunc_RowHandleToStruct_ReturnValue);
	void ConstructPreviewMeshArray(TArray<class USkeletalMesh*>* MeshArray, const TArray<class USkeletalMesh*>& Meshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ConstructMountMeshArray(TArray<class USkeletalMesh*>* MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>* MeshAnimBPs, class USkeletalMesh** BodyMesh, const TArray<class USkeletalMesh*>& Meshes, bool CallFunc_IsValid_ReturnValue);
	void UpdateMountMeshes(bool Force, const TArray<TSoftClassPtr<class UAnimInstance>>& MeshAnimBPs, class USkeletalMeshComponent* SkeletalComp, class USkeletalMesh* Mesh, const TArray<class USkeletalMesh*>& PlayerMeshes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item, TSoftClassPtr<class UAnimInstance> CallFunc_Array_Get_Item_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class USkeletalMesh*>& CallFunc_ConstructMountMeshArray_MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>& CallFunc_ConstructMountMeshArray_MeshAnimBPs, class USkeletalMesh* CallFunc_ConstructMountMeshArray_BodyMesh, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_ConstructPreviewMeshArray_MeshArray, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePreviewVisibility(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_GetShowOnlyComponents_OutComponents, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void UpdateActorPreview(bool Visible);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_MountPreview(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_Visible, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


