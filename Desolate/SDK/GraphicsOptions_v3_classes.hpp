#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0x32A - 0x285)
// WidgetBlueprintGeneratedClass GraphicsOptions_v3.GraphicsOptions_v3_C
class UGraphicsOptions_v3_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1F83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMainMenuButton_2_C*                   ApplyButton;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuButton_1_C*                   BackButton;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BackTitle;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTooltipWrapper_C*                     BackTooltipWrapper;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  Brightness;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CaptionGlow;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CaptionTint;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFakeFocusWidget_C*                    FakeFocusWidget;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GraphicTitle;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OptionsBox;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         OptionsGroup;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuButton_2_C*                   ResetButton;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               Resolution;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               ScreenType;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               ShowHUD;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               VSync;                                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHUserWidget*                         SelectedButton;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                     AvailableResolutions;                              // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bResolutionModeDirty;                              // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bConfirmScreenShown;                               // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGraphicsOptions_v3_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ResetToDefaults(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, enum class EWindowMode CallFunc_GetDefaultWindowMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FIntPoint& CallFunc_GetDefaultResolution_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateScreenResolutionOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetCurrentScreenResolutionIndex_Result, const struct FIntPoint& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ApplySettings(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedIndex_Result, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDirty_ReturnValue);
	void GetCurrentScreenResolutionIndex(int32* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ReadSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void GetAvailableResolutions(TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetConvenientWindowedResolutions_Resolutions, bool CallFunc_GetConvenientWindowedResolutions_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, TArray<struct FIntPoint>& K2Node_MakeArray_Array, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions_1, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue_1, int32 CallFunc_GetSelectedIndex_Result, bool K2Node_SwitchInteger_CmpSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void FocusCurrentButton(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowInstant();
	void Show();
	void OnSelectionChanged_Event_0();
	void OnValueChanged_Event_0(float Value);
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
	void OnSelectionChanged_Event_1();
	void OnSelectionChanged_Event_2();
	void DrawText();
	void OnSynchronizeProperties();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_0();
	void OnClicked_Event_0();
	void CustomEvent();
	void OnEnterPress_Event_0();
	void OnWidgetSelectedEvent_Event_0(int32 GroupIndex);
	void OnEnterPress_Event_1();
	void CustomEvent_1();
	void ExecuteUbergraph_GraphicsOptions_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, enum class EWindowMode Temp_byte_Variable, enum class EWindowMode Temp_byte_Variable_1, enum class EWindowMode Temp_byte_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UConfirmScreen_v3_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText Temp_text_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class USHUserWidget* K2Node_DynamicCast_AsSHUser_Widget, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Value, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValue_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetSelectedIndex_Result, enum class EWindowMode K2Node_Select_Default, int32 CallFunc_GetSelectedIndex_Result_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetSelectedIndex_Result_2, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_GroupIndex, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue);
};

}


