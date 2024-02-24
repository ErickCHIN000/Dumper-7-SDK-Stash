#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x348 - 0x260)
// WidgetBlueprintGeneratedClass W_SpectatorUI.W_SpectatorUI_C
class UW_SpectatorUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_167;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            FilteredActionBox;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HelpText;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ResetButton;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              UI;                                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultiToggle_C*                    UMG_MultiToggle;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_BloomIntensity_C*  W_PostProcessEntry_BloomIntensity;                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_BloomThreshold_C*  W_PostProcessEntry_BloomThreshold;                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_CameraSmoothing_C* W_PostProcessEntry_CameraSmoothing;                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_DoF_C*             W_PostProcessEntry_DoF;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_DofFStop_C*        W_PostProcessEntry_DofFStop;                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_DofRadius_C*       W_PostProcessEntry_DofRadius;                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_Gamma_C*           W_PostProcessEntry_Gamma;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_MotionBlur_C*      W_PostProcessEntry_MotionBlur;                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_MouseSmoothing_C*  W_PostProcessEntry_MouseSmoothing;                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_Saturation_C*      W_PostProcessEntry_Saturation;                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_ToggleCollision_C* W_PostProcessEntry_ToggleCollision;                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_ToggleProjection_C* W_PostProcessEntry_ToggleProjection;               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PostProcessEntry_Vinette_C*         W_PostProcessEntry_Vinette;                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ProjectionInterface_Spectator_C*    W_ProjectionInterface_Spectator;                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APawn*                                 SpectatorActor;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          InputConsumeArray;                                 // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UW_PostProcessEntry_C*>         PostProcessEntries;                                // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            SettingsUpdated;                                   // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_SpectatorSaveGame_C*               SaveGame;                                          // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SpectatorUI_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void InputChangePreset(int32 Index);
	void ChangePreset(int32 NewIndex, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> CallFunc_GetPresetFromSaveGame_Preset);
	void SaveCurrentPreset();
	void SetEntryValuesFromPreset(TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset, bool Reset, TSoftClassPtr<class UWidget> Class, class UWidget* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFPostProcessSaveData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_PostProcessEntry_C* K2Node_DynamicCast_AsW_Post_Process_Entry, bool K2Node_DynamicCast_bSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UWidget> CallFunc_Conv_ClassToSoftClassReference_ReturnValue);
	void ApplySaveGame(bool CallFunc_IsValid_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void FillEmptySaveGame(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SavePresetToSaveGame(int32 Index, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> PresetMap, class UWidget* Entry, const struct FFPostProcessSaveData& Value, TSoftClassPtr<class UWidget> Class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_PostProcessEntry_C* K2Node_DynamicCast_AsW_Post_Process_Entry, bool K2Node_DynamicCast_bSuccess, const struct FFPostProcessSaveData& CallFunc_GetSaveGameValue_Value, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UWidget> CallFunc_Conv_ClassToSoftClassReference_ReturnValue);
	void GetPresetFromSaveGame(int32 Index, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData>* Preset, bool CallFunc_IsValid_ReturnValue, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> CallFunc_GetPreset_ReturnValue);
	void InitSaveGame(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SpectatorSaveGame_C* K2Node_DynamicCast_AsBP_Spectator_Save_Game, bool K2Node_DynamicCast_bSuccess, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> CallFunc_GetPresetFromSaveGame_Preset, class UBP_SpectatorSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void EntryFunction(const class FString& Param, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_SwitchString_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class ECollisionEnabled Temp_wildcard_Variable, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdatePostProcess(const struct FPostProcessSettings& Settings, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_PostProcessEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEntryEnabled_ReturnValue);
	void InitEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_PostProcessEntry_C* K2Node_DynamicCast_AsW_Post_Process_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	class FText Get_HelpText_Text_0(class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void InventoryPressed();
	void SpectatorDestroyed(class AActor* DestroyedActor);
	void ToggleHelpScreen();
	void SetGameFocus();
	void CustomEvent_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_167_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);
	void ExecuteUbergraph_W_SpectatorUI(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_PreviousToggleIndex, int32 K2Node_ComponentBoundEvent_CurrentToggleIndex, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> K2Node_MakeMap_Map, bool CallFunc_IsVisible_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	void SettingsUpdated__DelegateSignature(const struct FPostProcessSettings& Settings);
};

}


