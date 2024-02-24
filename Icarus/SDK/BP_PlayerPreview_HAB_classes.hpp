#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x304 - 0x2C0)
// BlueprintGeneratedClass BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C
class ABP_PlayerPreview_HAB_C : public ABP_PlayerPreview_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*            Light_Bottom;                                      // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light_Rim;                                         // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light_Fill_R;                                      // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light_Fill_L;                                      // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Light_Key;                                         // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Light_Fill_Blue;                                   // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TestIntensity;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SWITCH;                                            // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NewVar_0_0;                                        // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerPreview_HAB_C* GetDefaultObj();

	void CharacterUpdated(const struct FOnlineProfileCharacter& Character);
	void GetLightComponents(TArray<class ULightComponent*>* SceneCaptureLights, TArray<class ULightComponent*>* CameraComponentLights, int32 Temp_int_Array_Index_Variable, TArray<class ULightComponent*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UChildActorComponent*>& K2Node_MakeArray_Array_1, class UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ULightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<class ULightComponent*>& CallFunc_GetLightComponents_SceneCaptureLights, TArray<class ULightComponent*>& CallFunc_GetLightComponents_CameraComponentLights, TArray<class ULightComponent*>& K2Node_MakeArray_Array_2);
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ULightComponent*>& CallFunc_GetLightComponents_SceneCaptureLights, TArray<class ULightComponent*>& CallFunc_GetLightComponents_CameraComponentLights, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ClearCurrentMeshes();
	void ConstructPlayerMeshArray(TArray<class USkeletalMesh*>* MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>* MeshAnimBPs, class USkeletalMesh** BodyMesh, bool IsMale, const TArray<TSoftClassPtr<class UAnimInstance>>& AnimBPs, class USkeletalMesh* Body, const TArray<class USkeletalMesh*>& Meshes, bool Temp_bool_Variable, enum class ECharacterBodyType Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue, class FName CallFunc_HashToName_ReturnValue_1, class FName CallFunc_HashToName_ReturnValue_2, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_1, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_2, TArray<struct FCharacterCreationDataRowHandle>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FArmourData& CallFunc_GetArmourData_ArmourData, enum class EDataValid CallFunc_GetArmourData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default, TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_1, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default_2, TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CharacterDataUpdated(const struct FCharacterCosmetics& CharacterData);
	void ReceiveBeginPlay();
	void Intensity();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PlayerPreview_HAB(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


