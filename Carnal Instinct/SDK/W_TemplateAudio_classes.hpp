#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE2 (0x342 - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateAudio.W_TemplateAudio_C
class UW_TemplateAudio_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_Over;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SliderFocus;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MySwitcher;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Audio;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Audio;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_AudioName;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Slider;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SoundValue;                                        // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderMultiply;                                    // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  AudioName;                                         // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_TemplateAudio                   SettingName;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SliderDefaultValue_Percent_;                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_Options_C*                          OptionsRef;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BackupSlider;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddSpace_;                                         // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1D02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpaceSize;                                         // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         MakeAnim_;                                         // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualLeft;                                        // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseEnterColor;                                   // 0x304(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseLeaveColor;                                   // 0x314(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    MyLeft;                                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MyTest;                                            // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsInEdit_;                                         // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHovered_;                                        // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_TemplateAudio_C* GetDefaultObj();

	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, bool CallFunc_HasUserFocus_ReturnValue);
	void ChangeColor(const struct FSlateColor& TitleColor, const struct FSlateColor& ChoiceColor, const struct FLinearColor& SliderColor, const struct FLinearColor& SliderHandleColor);
	void CheckAudioIsDefault(bool* IsDefault_, float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_ConvertStringToFloat_Out, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void SetSliderValue(float Value, bool MakeSlider_, float CallFunc_FClamp_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ReloadBackupSound();
	void MakeBackupSound();
	void RestoreAudio();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void MakeAnim();
	void MouseEnter();
	void MouseLeave();
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_3_OnControllerCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_Audio_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature();
	void CheckForStyle(bool ShowStyle_);
	void ChangeAudio();
	void ExecuteUbergraph_W_TemplateAudio(int32 EntryPoint, enum class E_TemplateAudio Temp_byte_Variable, class USoundClass* Temp_object_Variable, class USoundClass* Temp_object_Variable_1, class USoundClass* Temp_object_Variable_2, class USoundClass* Temp_object_Variable_3, enum class E_TemplateAudio Temp_byte_Variable_1, class USoundMix* Temp_object_Variable_4, class USoundMix* Temp_object_Variable_5, class USoundMix* Temp_object_Variable_6, class USoundMix* Temp_object_Variable_7, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_ConvertStringToFloat_Out, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_CheckAudioIsDefault_IsDefault_, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, bool Temp_bool_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, float CallFunc_FClamp_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, class USoundClass* K2Node_Select_Default, class USoundMix* K2Node_Select_Default_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_ShowStyle_, bool CallFunc_HasUserFocus_ReturnValue, float Temp_float_Variable, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default_2, bool Temp_bool_IsClosed_Variable_1);
};

}


