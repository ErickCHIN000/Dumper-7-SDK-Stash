#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x2A2 - 0x260)
// WidgetBlueprintGeneratedClass wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C
class UWid_OnScreenFrameInformation_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      HideAnimation;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowAnimation;                                     // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSt_ScreenFrame>               Queue;                                             // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSt_ScreenFrame                       CurrentlyShowing;                                  // 0x290(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2A5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         WasPDADisabled;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPDADisabledByUs;                                 // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_OnScreenFrameInformation_C* GetDefaultObj();

	void Add_Boss_Kill_DLCVRGames(float Duration, int32 Boss_number, class UWid_VRGamesBossFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue);
	void GetCameraManager(class ACGPlayerCameraManager** AsCGPlayer_Camera_Manager, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACGPlayerCameraManager* K2Node_DynamicCast_AsCGPlayer_Camera_Manager, bool K2Node_DynamicCast_bSuccess);
	void HandleVisibility(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ResetQueueAndCurrent(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetAnyAvailableStatusFrame(class UWid_CompanionStatusFrame_C** AsWid_Companion_Status_Frame, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWid_CompanionStatusFrame_C* K2Node_DynamicCast_AsWid_Companion_Status_Frame, bool K2Node_DynamicCast_bSuccess);
	void AddLevelUpFrame(float Duration, class UWid_LevelUpFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue);
	void AddHeistItemFoundFrame(class FText ItemName, float Duration);
	void AddCompanionStatusChangedFrame(bool IsNewStatusBetter, class FName CompanionID, enum class ERelationshipStatusType NewStatus, float Duration, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UWid_CompanionStatusFrame_C* CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame, bool CallFunc_IsValid_ReturnValue, class UWid_CompanionStatusFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue);
	void AddQuestScreenFrame(bool WasSuccessfull, class FText QuestName, float Duration, class FText CustomTitle, class FText CustomContent, class UWid_QuestCompleted_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue);
	void RemoveCurrentFrameAndShowNext();
	void ShowCurrent();
	void OnShowFinished();
	void OnHideFinished();
	void StartShowing();
	void Destruct();
	void EnableBackPDA();
	void DisablePDA();
	void ExecuteUbergraph_wid_OnScreenFrameInformation(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, const struct FMargin& K2Node_MakeStruct_Margin, TScriptInterface<class IScreenFrameInterface_C> K2Node_DynamicCast_AsScreen_Frame_Interface, bool K2Node_DynamicCast_bSuccess, class UAkAudioEvent* CallFunc_GetSoundToPlay_Event, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ACGPlayerCameraManager* CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager, class ACGPlayerCameraManager* CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1);
};

}


