#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x129 (0x411 - 0x2E8)
// WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
class UVideoSettingsPage_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDefaultRadioSelectSetting_C*          AmbientOcclusionRadioSelect;                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   ApplyButton;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   AutoDetectButton;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   CancelButton;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          EffectsQualityRadioSelect;                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          FoliageQualityRadioSelect;                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledSliderSetting_C*                FOVSlider;                                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          GeometryDetailRadioSelect;                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          PostProcessingRadioSelect;                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PresetControlledSettings;                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          QualityPresetRadioSelection;                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         ResolutionSettingRow;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledSpinnerSetting_C*               ResolutionSpinnerSetting;                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          ShaderQualityRadioSelect;                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          ShadowQualityRadioSelect;                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          SSGIQualityRadioSelect;                            // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          TextureQualityRadioSelect;                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          UpscalingMethodRadioSelectSetting;                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         UpscalingQualitySettingRow;                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          ViewDistanceRadioSelect;                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          VolumetricFogRadioSelect;                          // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultRadioSelectSetting_C*          WindowModeRadioSelectSetting;                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledSliderSetting_C*                ZoomFOVSlider;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AutoSave;                                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AutoApply;                                         // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CancelEvent;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Changed_Quality_Preset_This_Frame;                 // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStyledPleaseWaitOverlay_C*            PleaseWaitOverlay;                                 // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAutoSettingWidget*>            All_Settings;                                      // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UAutoSettingWidget*>            Preset_Controlled_Settings;                        // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CachedResolutionSetting;                           // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentDesktopResString;                           // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                             PreviousViewportSize;                              // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QueueSave;                                         // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UVideoSettingsPage_C* GetDefaultObj();

	void Set_Resolution_Scaling(int32 Value, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetQualityPresetValues(const class FString& View_Distance, const class FString& Geometry_Detail, const class FString& Post_Processing, const class FString& Shadows, const class FString& Textures, const class FString& Effects, const class FString& Foliage, const class FString& Shaders, const class FString& SSGI, const class FString& VolumetricFog);
	void Remove_Please_Wait_Overlay();
	void Add_Please_Wait_Overlay(bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UStyledPleaseWaitOverlay_C* CallFunc_Create_ReturnValue);
	void LowVRAM_Warning(class UWBP_LowVRAMWarning_FullScreen_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue);
	void HandleQualityPresets(int32 NewValue, bool K2Node_SwitchInteger_CmpSuccess);
	void Get_Normalized_Resolution_Scale(float* Normalized_Resolution_Scale, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_GetGameResolution_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	bool Get_AutoApplyCheckbox_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue);
	bool Get_ApplyButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnappliedChange_ReturnValue);
	bool Get_SaveButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue);
	void Construct();
	void BndEvt__VideoSettingsPage_WBP_StyledButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__VideoSettingsPage_SaveButton_1_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature();
	void BndEvt__VideoSettingsPage_ApplyButton_1_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature();
	void BndEvt__VideoSettingsPage_WindowModeRadioSelectSetting_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(const class FString& Val);
	void BndEvt__VideoSettingsPage_DefaultRadioSelectSetting_1_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature(const class FString& Val);
	void Quality_Preset_Changed(int32 NewValue);
	void Apply_and_Queue_Save();
	void NoLongerUsingPreset();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnClosed();
	void ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class UAutoSettingWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UAutoSettingWidget* CallFunc_Array_Get_Item_1, class UDefaultRadioSelectSetting_C* K2Node_DynamicCast_AsDefault_Radio_Select_Setting, bool K2Node_DynamicCast_bSuccess, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Val_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Val, bool CallFunc_NotEqual_StrStr_ReturnValue_1, int32 K2Node_CustomEvent_NewValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore, float CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shadows, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_textures, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_effects, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_foliage, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shaders, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_8, const class FString& CallFunc_Conv_IntToString_ReturnValue_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_GetCurrentIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_10, const class FString& CallFunc_BuildString_Int_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UStyledSpinner_C* K2Node_DynamicCast_AsStyled_Spinner, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void CancelEvent__DelegateSignature();
};

}


