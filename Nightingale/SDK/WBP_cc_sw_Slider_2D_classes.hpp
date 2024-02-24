#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x440 - 0x348)
// WidgetBlueprintGeneratedClass WBP_cc_sw_Slider_2D.WBP_cc_sw_Slider_2D_C
class UWBP_cc_sw_Slider_2D_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USynth2DSlider*                        TwodSlider_GlowPosition;                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                        TwodSlider_LargeGlow;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                        TwodSlider_Light_additive;                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                        TwodSlider_Light_Brighten;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                        TwodSlider_Light_modulate;                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                bg;                                                // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ds_Bottom_1;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ds_Left_2;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ds_Right_3;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ds_Top_0;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FocusHighlight;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXSynth2DSlider*                     NWX2DSlider;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ParentFocusOutline;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_X;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_y;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          SliderGlows;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SubContent;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_SubWidget_Button_C*            WBP_CC_SubWidget_Button;                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Label;                                        // 0x3E0(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_TooltipText;                                  // 0x3F8(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ED_SliderValueChanged;                             // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             Value_SliderDefault;                               // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CaptureOn;                                         // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowButtonBox;                                     // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOnly2DSlider;                                  // 0x432(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D79[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AkComponent;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_Slider_2D_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsExpandedCached_IsExpanded, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsExpandedCached_IsExpanded);
	void UpdateDragAudio(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void TriggerDragStopAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void TriggerDragStartAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ResetSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void UpdateSliderVisuals(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void SetupWidgetStyle();
	void Handle_2dSliderOnlyPresentation(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void RefreshText();
	class UWidget* Get_bu_Lock_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void Adjust_Section_Enabled_Visuals(int32 Index, bool Enabled_, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, int32 Temp_int_Variable, float K2Node_Select_Default, class UImage* K2Node_Select_Default_1);
	class UWidget* Get_bu_Reset_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WBP_cc_sw_Slider_2D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_2_CategoryButtonClicked__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_0_OnCategoryButtonExpansionSet__DelegateSignature(bool IsExpanded);
	void Destruct();
	void ExecuteUbergraph_WBP_cc_sw_Slider_2D(int32 EntryPoint, const struct FVector2D& CallFunc_GetValue_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_GetIsExpandedCached_IsExpanded, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_ComponentBoundEvent_IsExpanded, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetIsExpandedCached_IsExpanded_1, bool CallFunc_IsUsingGamepad_ReturnValue_1);
	void ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
};

}


