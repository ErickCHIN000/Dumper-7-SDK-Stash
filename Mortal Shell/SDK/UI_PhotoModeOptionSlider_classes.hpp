#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30C (0x53C - 0x230)
// WidgetBlueprintGeneratedClass UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C
class UUI_PhotoModeOptionSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Option;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleLeft;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleRight;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionText;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionValue;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_Option;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  OptionName;                                        // 0x270(0x18)(Edit, BlueprintVisible)
	int32                                        Value;                                             // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultValue;                                      // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinValue;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxValue;                                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxDelta;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1549[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColorNormal;                                   // 0x2A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorHighlighted;                              // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleLeftNormal;                             // 0x2F0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleLeftHovered;                            // 0x378(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleRightNormal;                            // 0x400(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleRightHovered;                           // 0x488(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bEnabled;                                          // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValueDisplayScale;                                 // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHighlighted;                                      // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_156B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeHUD_C*                       PhotoModeHUD;                                      // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NavSpeedMax;                                       // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_PhotoModeOptionSlider_C* GetDefaultObj();

	void GetMaxDelta(int32* MaxDelta);
	void IsOptionEnabled(bool* bEnabled);
	void SoundNavigate();
	void SetButtonStyle(class UButton* Button, const struct FSlateBrush& Norm, const struct FSlateBrush& High, bool bHighlighted, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default);
	void Navigate(int32 Delta);
	void SetSelectedValue(int32 Value, bool CallEvent);
	void SetIsHighlighted(bool bHighlighted);
	void PreConstruct(bool IsDesignTime);
	void Reset(bool bForceFireValueChange);
	void SetOptionEnabled(bool bEnabled);
	void SetValueAndOverrideDefault(int32 Value, bool CallEvent);
	void BndEvt__HandleLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HandleRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void UpdateTextValue();
	void HandleMouseMove();
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HandleLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HandleLeft_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__HandleRight_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HandleRight_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
	void FireEventWithDefaultValueButKeepCurrent();
	void FireChangeEventWithCurrentValue();
	void ExecuteUbergraph_UI_PhotoModeOptionSlider(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 K2Node_Event_Delta, int32 K2Node_Event_Value_1, bool K2Node_Event_CallEvent_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bHighlighted, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bForceFireValueChange, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bEnabled, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Event_Value, bool K2Node_Event_CallEvent, float K2Node_ComponentBoundEvent_Value, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_3, const struct FSlateColor& K2Node_Select_Default_2, float Temp_float_Variable_1, float K2Node_Select_Default_3);
	void OnValueChanged__DelegateSignature(int32 NewValue);
};

}


