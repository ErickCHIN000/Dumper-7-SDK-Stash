#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x2DC - 0x220)
// BlueprintGeneratedClass BP_PlayerPreviewManager.BP_PlayerPreviewManager_C
class ABP_PlayerPreviewManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                LoadedStreamingLevel;                              // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 CurrentWorld;                                      // 0x238(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerPreview_HAB_Selection_C*     PreviewCharacter;                                  // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x268(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_812[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            CameraFocus;                                       // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 DesiredDiorama;                                    // 0x2B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	float                                        CurrentFadeAmount;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerPreviewManager_C* GetDefaultObj();

	void EndLevelLoadEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void BeginLevelLoadEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void UpdateCharacterPreview(const struct FCharacterCosmetics& CosmeticData, const struct FPreviewCameraSettingsEnum& NewCameraFocus, TSoftObjectPtr<class UWorld> Diorama, bool ForceWearSpacesuit, bool Temp_bool_Variable, bool CallFunc_NotEqual_EnumEnum_ReturnValue, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable_1, const struct FCharacterCreationDataRowHandle& K2Node_Select_Default, int32 CallFunc_NameToHash_ReturnValue);
	void CharacterPreviewUpdated(const struct FCharacterCosmetics& CosmeticData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue);
	void UpdateCurrentDiorama();
	void OnLevelLoaded();
	void DisableDioramaPreview(bool IsEndingPlay);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_PlayerPreviewManager(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable_1, TArray<class ATargetPoint*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ATargetPoint* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerPreview_HAB_Selection_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsLevelLoaded_ReturnValue, TArray<class ULightComponent*>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_IsEndingPlay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& K2Node_MakeArray_Array_2, TArray<class ULightComponent*>& K2Node_MakeArray_Array_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerPreview_HAB_Selection_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FCharacterCreationDataRowHandle& K2Node_Select_Default, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_NameToHash_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class ABP_HabAudio_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5);
};

}


