#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x428 - 0x348)
// WidgetBlueprintGeneratedClass WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C
class UWBP_cc_sw_Ancestry2DSlider_C : public UNWXCommonUserWidget
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
	class USlider*                               Slider_X;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_y;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          SliderGlows;                                       // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Label;                                        // 0x3C8(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_TooltipText;                                  // 0x3E0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ED_SliderValueChanged;                             // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             Value_SliderDefault;                               // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CaptureOn;                                         // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowButtonBox;                                     // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOnly2DSlider;                                  // 0x41A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CA1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AkComponent;                                       // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_Ancestry2DSlider_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateDragAudio(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void TriggerDragStopAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void TriggerDragStartAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ResetSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void UpdateSliderVisuals(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void Adjust_Section_Enabled_Visuals(int32 Index, bool Enabled_, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, int32 Temp_int_Variable, float K2Node_Select_Default, class UImage* K2Node_Select_Default_1);
	void RefreshSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEventSynth2D__DelegateSignature();
	void BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEventSynth2D__DelegateSignature();
	void ExecuteUbergraph_WBP_cc_sw_Ancestry2DSlider(int32 EntryPoint, const struct FVector2D& CallFunc_GetValue_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1);
	void ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
};

}


