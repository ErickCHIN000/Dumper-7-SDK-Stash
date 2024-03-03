#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12A (0x38A - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateMouse.W_TemplateMouse_C
class UW_TemplateMouse_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_Apply;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Down;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Up;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Over;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SliderFocus;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MySwitcher;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Sensitivity;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Sensitivity;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ActualChoice;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Sensitivity;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  MouseName;                                         // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x2E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_GraphicWidgetType               Slider;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_14C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MouseEnterColor;                                   // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseLeaveColor;                                   // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SensitivityValue;                                  // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SliderNeedApply_;                                  // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SliderDefaultValue_Percent_;                       // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_14DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ButtonText;                                        // 0x330(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        ButtonDefaultIndex;                                // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMinFractionnalShow;                          // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMaxFractionnalShow;                          // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMinFractionnalValue;                         // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMaxFractionnalValue;                         // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderMultiply;                                    // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_Options_C*                          OptionsRef;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BackupButton;                                      // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BackupSlider;                                      // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderValueMin;                                    // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderValueMax;                                    // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AddSpace_;                                         // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_14F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpaceSize;                                         // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         MakeAnim_;                                         // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1503[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualLeft;                                        // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    MyLeft;                                            // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHovered_;                                        // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInEdit_;                                         // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_TemplateMouse_C* GetDefaultObj();

	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, enum class E_GraphicWidgetType Temp_byte_Variable, enum class E_GraphicWidgetType Temp_byte_Variable_1, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, bool CallFunc_HasUserFocus_ReturnValue);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, enum class E_GraphicWidgetType Temp_byte_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_HasUserFocus_ReturnValue);
	void ChangeColor(const struct FSlateColor& TitleColor, const struct FLinearColor& LRColor, const struct FSlateColor& ChoiceColor, const struct FLinearColor& ApplyColor, const struct FLinearColor& SliderColor, const struct FLinearColor& SliderHandleColor);
	void CheckMouseIsDefault(bool* IsDefault_, bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetValue_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_ConvertStringToFloat_Out, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ConvertAndSetSliderValue(float Value, float CallFunc_GetValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out);
	void SetSliderValue(float SliderValue, float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out, float CallFunc_Divide_FloatFloat_ReturnValue);
	void RestoreMouse();
	void ReloadBackupMouse();
	void MakeBackupMouse();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void MouseEnter();
	void MouseLeave();
	void MakeAnim();
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_0_OnControllerCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_Sensitivity_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature();
	void CheckForStyle(bool ShowStyle_);
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_TemplateMouse(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_Variable_3, enum class E_GraphicWidgetType Temp_byte_Variable, bool Temp_bool_Variable_4, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Variable_5, float Temp_float_Variable, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_9, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_10, bool Temp_bool_Has_Been_Initd_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_11, class FText CallFunc_Array_Get_Item, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable_4, float CallFunc_FClamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Select_Default_1, int32 Temp_int_Variable_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_4, class FText CallFunc_Array_Get_Item_2, bool CallFunc_CheckMouseIsDefault_IsDefault_, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, enum class E_GraphicWidgetType Temp_byte_Variable_3, bool K2Node_Select_Default_2, int32 K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class FText CallFunc_Array_Get_Item_3, bool CallFunc_Conv_IntToBool_ReturnValue_5, bool CallFunc_Conv_IntToBool_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable_6, class FText CallFunc_Array_Get_Item_4, float K2Node_ComponentBoundEvent_Value, bool Temp_bool_Variable_12, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_13, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Variable_14, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_HasUserFocus_ReturnValue, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_HasUserFocus_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_3, bool K2Node_Event_ShowStyle_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_4, const class FString& CallFunc_GetObjectName_ReturnValue_2, const class FString& CallFunc_GetObjectName_ReturnValue_3, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, const struct FLinearColor& K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, bool Temp_bool_Has_Been_Initd_Variable_7, const class FString& CallFunc_GetObjectName_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue_5, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, const struct FLinearColor& K2Node_Select_Default_7, const struct FLinearColor& K2Node_Select_Default_8, bool Temp_bool_IsClosed_Variable_7, const class FString& CallFunc_GetObjectName_ReturnValue_6, const class FString& CallFunc_GetObjectName_ReturnValue_7, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, const struct FLinearColor& K2Node_Select_Default_9, const struct FLinearColor& K2Node_Select_Default_10, bool Temp_bool_Variable_15, const struct FLinearColor& K2Node_Select_Default_11, const class FString& CallFunc_GetObjectName_ReturnValue_8, bool CallFunc_Contains_ReturnValue_8, const class FString& CallFunc_GetObjectName_ReturnValue_9, bool CallFunc_Contains_ReturnValue_9, const struct FLinearColor& K2Node_Select_Default_12, const struct FLinearColor& K2Node_Select_Default_13, const class FString& CallFunc_GetObjectName_ReturnValue_10, const class FString& CallFunc_GetObjectName_ReturnValue_11, bool CallFunc_Contains_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, const struct FLinearColor& K2Node_Select_Default_14, const struct FLinearColor& K2Node_Select_Default_15);
};

}


