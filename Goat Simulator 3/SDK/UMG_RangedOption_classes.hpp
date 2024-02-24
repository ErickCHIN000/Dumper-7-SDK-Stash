#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3A8 - 0x370)
// WidgetBlueprintGeneratedClass UMG_RangedOption.UMG_RangedOption_C
class UUMG_RangedOption_C : public UGGGameSettingOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             ScaleBox_RangedOptions;                            // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TextBox;                                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Minimum_Fractional_Digits;                         // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Slider_Mouse_Capture;                          // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleMultiplier;                                   // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleMultiplierTablet;                             // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RangedOption_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Snap_To_Step_Size(float In_Value, float* Snapped_Value, float CallFunc_GetSettingStepSizeMouse_ReturnValue, float CallFunc_GetSettingStepSize_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	float Get_Slider_Value(float CallFunc_GetValue_ReturnValue);
	void Set_Text_Box_Visibility(bool Is_using_gamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsMobilePlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	class UWidget* GetInitialWidgetFocus();
	void UpdateText(float Slider_Value, float CallFunc_GetValueTextFactor_ReturnValue, int32 CallFunc_GetMaxFractionalDigits_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void UpdateUI();
	void OnSetIsEnabled(bool bInIsEnabled);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__UMG_RangedOption_Slider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature();
	void RefreshOption();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_RangedOption(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, float K2Node_ComponentBoundEvent_Value, float CallFunc_TextToFloat_OutFloat, bool CallFunc_TextToFloat_ReturnValue, float CallFunc_Snap_To_Step_Size_Snapped_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool K2Node_Event_bInIsEnabled, float CallFunc_GetMinSettingValue_ReturnValue, float CallFunc_GetMaxSettingValue_ReturnValue, float CallFunc_GetSettingStepSize_ReturnValue, float CallFunc_GetValueTextFactor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Snap_To_Step_Size_Snapped_Value_1, float CallFunc_GetSettingValueAsFloat_ReturnValue, float CallFunc_GetSettingValueAsFloat_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_1, float CallFunc_Get_Slider_Value_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided);
};

}


