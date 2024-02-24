#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD9 (0x421 - 0x348)
// WidgetBlueprintGeneratedClass WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C
class UWBP_cc_sw_Slider_1D_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_1;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_WithFocusHighlight;                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_Lock;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_Reset;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CommitSliderValue;                             // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ResetSliderValue;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_SubWidget_Button_C*            WBP_CC_SubWidget_Button;                           // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Value_SliderMax;                                   // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value_SliderMin;                                   // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value_SliderStepAmount;                            // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value_Slider_Current;                              // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Label;                                        // 0x3A8(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_TooltipText;                                  // 0x3C0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ED_SliderValueChanged;                             // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Value_SliderBuffer;                                // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5295[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AkComponent;                                       // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SliderMinValue;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderMaxValue;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        PreviousValue;                                     // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AudioCooldownActive;                               // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AudioCooldownTime;                                 // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasFocus;                                         // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_Slider_1D_C* GetDefaultObj();

	void CommitValue(float CallFunc_GetValue_ReturnValue, bool CallFunc_GetIsExpandedCached_IsExpanded);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsExpandedCached_IsExpanded);
	void UpdateHeader_Value(float CallFunc_GetValue_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast);
	void SetSliderValue(float Value_Slider_Current);
	void AudioCooldown();
	void OnValueChangedSFX(double Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int64 CallFunc_Round64_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void ResetSlider(double K2Node_CallDelegate_Slider_Value_ImplicitCast);
	class UWidget* Get_bu_Reset_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	class UWidget* GetTooltipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshSliderParameters();
	void BndEvt__WBP_cc_sw_Slider_1D_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Randomize_Slider();
	void PreConstruct(bool IsDesignTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_2_CategoryButtonClicked__DelegateSignature();
	void Construct();
	void BndEvt__WBP_cc_sw_Slider_1D_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_3_OnCategoryButtonExpansionSet__DelegateSignature(bool IsExpanded);
	void BndEvt__WBP_cc_sw_Slider_1D_CBU_ResetSliderValue_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_cc_sw_Slider_1D(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, double CallFunc_RandomFloatInRange_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsUsingGamepad_ReturnValue, bool K2Node_ComponentBoundEvent_IsExpanded, bool CallFunc_GetIsExpandedCached_IsExpanded, bool CallFunc_GetIsExpandedCached_IsExpanded_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double K2Node_CallDelegate_Slider_Value_ImplicitCast);
	void ED_SliderValueChanged__DelegateSignature(double Slider_Value);
};

}


