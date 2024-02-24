#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x31C - 0x298)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C
class UW_PostProcessEntry_Slider_C : public UW_PostProcessEntry_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_200;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_Value;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_UnitTitle;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x2D0(0x18)(Edit, BlueprintVisible)
	int32                                        FontSize;                                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        TextFill;                                          // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DefaultSliderValue;                                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasEnableBox;                                      // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_451F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MinMaxSliderValues;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpinBoxFractionalDigits;                           // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UnitTitle;                                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        SliderDelta;                                       // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_Slider_C* GetDefaultObj();

	void CalculateExponentialDelta(float InDelta, float* OutDelta, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, float CallFunc_GetDelta_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_CalculateExponentialDelta_OutDelta, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void UpdateSliderEnabled(bool CallFunc_IsEntryEnabled_ReturnValue);
	bool IsEntryEnabled(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool K2Node_Select_Default);
	void InitFromSaveGameValue(const struct FFPostProcessSaveData& Value);
	void GetSaveGameValue(struct FFPostProcessSaveData* Value, bool CallFunc_IsEntryEnabled_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FFPostProcessSaveData& K2Node_MakeStruct_FPostProcessSaveData);
	void InitFromDefaultValue();
	class FText GetSliderText(float CallFunc_GetSliderValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	float GetSliderValue(float CallFunc_GetValue_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void Construct();
	void ExecuteUbergraph_W_PostProcessEntry_Slider(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, float K2Node_ComponentBoundEvent_InValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


