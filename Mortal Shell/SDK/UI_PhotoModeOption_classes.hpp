#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x319 (0x549 - 0x230)
// WidgetBlueprintGeneratedClass UI_PhotoModeOption.UI_PhotoModeOption_C
class UUI_PhotoModeOption_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Option;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleLeft;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleRight;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionText;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionValue;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Option;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  OptionName;                                        // 0x268(0x18)(Edit, BlueprintVisible)
	TArray<class FText>                          OptionValues;                                      // 0x280(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Value;                                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1603[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           StyleHandleLeftNormal;                             // 0x298(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleLeftHovered;                            // 0x320(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleRightNormal;                            // 0x3A8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           StyleHandleRightHovered;                           // 0x430(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorNormal;                                   // 0x4B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorHighlighted;                              // 0x4E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnValueChange;                                     // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        DefaultValue;                                      // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHighlighted;                                      // 0x51D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1634[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeHUD_C*                       PhotoModeHUD;                                      // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxDelta;                                          // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Scrolling_Enabled;                                 // 0x52C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Scrolling_Active;                                  // 0x52D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset_Max;                                        // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Target;                                     // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Delta;                                      // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1646[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Scrolling;                                   // 0x540(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDoNotCallConstructor;                             // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_PhotoModeOption_C* GetDefaultObj();

	void GetMaxDelta(int32* MaxDelta);
	void IsOptionEnabled(bool* bEnabled);
	void SetValue(bool CallEvent, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void SetText();
	void SoundNavigate();
	void SetButtonStyle(class UButton* Button, const struct FSlateBrush& Normal, const struct FSlateBrush& Highlighted, bool bIsHighlighted, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void SetSelectedValue(int32 Value, bool CallEvent);
	void Navigate(int32 Delta);
	void SetIsHighlighted(bool bHighlighted);
	void SaveStyles();
	void Reset(bool bForceFireValueChange);
	void SetOptionEnabled(bool bEnabled);
	void SetValueAndOverrideDefault(int32 Value, bool CallEvent);
	void BndEvt__HandleRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HandleLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void HandleMouseMove();
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Option_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void FireEventWithDefaultValueButKeepCurrent();
	void FireChangeEventWithCurrentValue();
	void UpdateHandleVisibility();
	void ScrollBox_Open();
	void Reset_Offset_Start();
	void Reset_Offset_End();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ScrollBox_Close();
	void ValidateCurrentValue(bool CustomValue, int32 Value, bool DoNotCallValueChange);
	void ExecuteUbergraph_UI_PhotoModeOption(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_Value_1, bool K2Node_Event_CallEvent_1, int32 K2Node_Event_Delta, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bHighlighted, const struct FSlateColor& K2Node_Select_Default, bool K2Node_Event_bForceFireValueChange, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_bEnabled, int32 K2Node_Event_Value, bool K2Node_Event_CallEvent, bool Temp_bool_Has_Been_Initd_Variable_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool K2Node_CustomEvent_CustomValue, int32 K2Node_CustomEvent_Value, bool K2Node_CustomEvent_DoNotCallValueChange, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable_1, float K2Node_Select_Default_3);
	void OnValueChange__DelegateSignature(int32 NewValue);
};

}


