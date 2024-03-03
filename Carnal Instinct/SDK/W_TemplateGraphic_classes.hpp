#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x428 - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateGraphic.W_TemplateGraphic_C
class UW_TemplateGraphic_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_ButtonApply;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Down;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SliderApply;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Up;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_MyApply;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Over;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SliderFocus;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MySwitcher;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Graphic;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Graphic;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ActualGraphic;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Apply;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GraphicName;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Slider;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         MakeAnim_;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualLeft;                                        // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    MyLeft;                                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ByUser_;                                           // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SliderValue;                                       // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MyTest;                                            // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                          MouseEnterColor;                                   // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseLeaveColor;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHovered_;                                        // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Options_C*                          OptionsRef;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AffectedByGlobalSetting_;                          // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2004[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GraphicName;                                       // 0x348(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x360(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_TemplateGraphic                 SettingName;                                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_GraphicCommandeType             CommandType;                                       // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_GraphicWidgetType               Slider;                                            // 0x37A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsInEdit_;                                         // 0x37B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ButtonNeedApply_;                                  // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_201A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ButtonOptions;                                     // 0x380(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        SliderMinFractionnalShow;                          // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMaxFractionnalShow;                          // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMinFractionnalCommand;                       // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderMaxFractionnalCommand;                       // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderMultiply;                                    // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SliderNeedApply_;                                  // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_203A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SliderDefaultValue_Percent_;                       // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2041[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SliderCommand;                                     // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Prefix;                                            // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        SliderValueMin;                                    // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderValueMax;                                    // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FS_ButtonCommandes>            ButtonCommands;                                    // 0x3E0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        ButtonDefaultIndex;                                // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        BackupButton;                                      // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BackupSlider;                                      // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableLink_;                                       // 0x3FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class E_TemplateGraphic                 SettingLinkWith;                                   // 0x3FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AddSpace_;                                         // 0x3FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2063[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpaceSize;                                         // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AutoResolutionsList;                               // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_206A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          HardCodedResolutionsOptions;                       // 0x408(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FS_ButtonCommandes>            HardCodedResolutionsCommands;                      // 0x418(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_TemplateGraphic_C* GetDefaultObj();

	void RefreshResolutionsList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const struct FS_ButtonCommandes& K2Node_MakeStruct_S_ButtonCommandes, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2);
	void CallApplySettings(bool Wait_, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Up();
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class E_GraphicWidgetType Temp_byte_Variable, enum class E_GraphicWidgetType Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_HasUserFocus_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_HasUserFocus_ReturnValue_1, bool K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, bool CallFunc_HasUserFocus_ReturnValue_2, bool K2Node_Select_Default_3);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, enum class E_GraphicWidgetType Temp_byte_Variable, bool Temp_bool_Variable, enum class E_GraphicWidgetType Temp_byte_Variable_1, bool CallFunc_HasUserFocus_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, bool CallFunc_HasUserFocus_ReturnValue_1);
	void ChangeColor(const struct FSlateColor& TitleColor, const struct FLinearColor& LAndRColor, const struct FSlateColor& ChoiceColor, const struct FLinearColor& ApplyColor, const struct FLinearColor& SliderColor, const struct FLinearColor& SliderHandleColor);
	void CheckGraphicIsDefault(bool* IsDefault_, bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetValue_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_ConvertStringToFloat_Out, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ApplyGraphicSetting(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_ProcFXSpawner_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FS_ButtonCommandes& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ConvertAndSetSliderValue(float Value, float CallFunc_GetValue_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetSliderValue(float Value, float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_ConvertStringToFloat_Out, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void ApplyLinked();
	void MakeAnim();
	void MouseEnter();
	void MouseLeave();
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_12_OnControllerCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_13_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ByGlobalSetting(int32 NewButtonIndex);
	void BndEvt__Slider_Graphic_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ReloadBackupGraphic();
	void MakeBackupGraphic();
	void RestoreGraphic();
	void CheckForStyle(bool ShowStyle_);
	void BndEvt__Button_MyApply_K2Node_ComponentBoundEvent_339_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_MyApply_K2Node_ComponentBoundEvent_488_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MyApply_K2Node_ComponentBoundEvent_498_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_TemplateGraphic(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Variable_5, enum class E_GraphicWidgetType Temp_byte_Variable_2, bool Temp_bool_Variable_6, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_9, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_Variable_10, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_Variable_11, bool Temp_bool_Has_Been_Initd_Variable_7, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_2, const class FString& CallFunc_GetObjectName_ReturnValue_3, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const class FString& CallFunc_GetObjectName_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue_5, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, const struct FLinearColor& K2Node_Select_Default_2, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class E_GraphicWidgetType Temp_byte_Variable_5, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_6, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_NewButtonIndex, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_7, float K2Node_ComponentBoundEvent_Value, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, enum class E_GraphicWidgetType Temp_byte_Variable_6, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_1, bool Temp_bool_Variable_14, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_3, bool Temp_bool_Has_Been_Initd_Variable_8, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool Temp_bool_IsClosed_Variable_8, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CheckGraphicIsDefault_IsDefault_, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& K2Node_Select_Default_4, float CallFunc_ConvertStringToFloat_Out, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_2, int32 CallFunc_Conv_StringToInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_Event_IsDesignTime, int32 K2Node_Select_Default_5, class FText CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_FClamp_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_6, bool K2Node_SwitchEnum_CmpSuccess_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, const class FString& CallFunc_Conv_FloatToString_ReturnValue_4, const class FString& K2Node_Select_Default_7, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_3, bool K2Node_SwitchEnum_CmpSuccess_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_4, bool Temp_bool_Variable_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_FloatToString_ReturnValue_6, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, const struct FS_ButtonCommandes& CallFunc_Array_Get_Item_1, float K2Node_Select_Default_8, const class FString& CallFunc_Array_Get_Item_2, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_HasUserFocus_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_6, const class FString& CallFunc_GetObjectName_ReturnValue_7, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, const struct FLinearColor& K2Node_Select_Default_9, const struct FLinearColor& K2Node_Select_Default_10, bool Temp_bool_Variable_16, const struct FLinearColor& K2Node_Select_Default_11, const class FString& CallFunc_GetObjectName_ReturnValue_8, const class FString& CallFunc_GetObjectName_ReturnValue_9, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, const struct FLinearColor& K2Node_Select_Default_12, const struct FLinearColor& K2Node_Select_Default_13, bool CallFunc_HasUserFocus_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_10, const class FString& CallFunc_GetObjectName_ReturnValue_11, bool CallFunc_Contains_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, const struct FLinearColor& K2Node_Select_Default_14, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_3, bool K2Node_Event_ShowStyle_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 Temp_int_Array_Index_Variable, const struct FS_GraphicLinked& CallFunc_Array_Get_Item_3, bool Temp_bool_Has_Been_Initd_Variable_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_15, const class FString& CallFunc_GetObjectName_ReturnValue_12, const class FString& CallFunc_GetObjectName_ReturnValue_13, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, const struct FLinearColor& K2Node_Select_Default_16, const struct FLinearColor& K2Node_Select_Default_17, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue_14, bool CallFunc_Contains_ReturnValue_14, const class FString& CallFunc_GetObjectName_ReturnValue_15, bool CallFunc_Contains_ReturnValue_15, const struct FLinearColor& K2Node_Select_Default_18, const struct FLinearColor& K2Node_Select_Default_19, bool Temp_bool_IsClosed_Variable_9, bool Temp_bool_Variable_17, const struct FLinearColor& K2Node_Select_Default_20, bool Temp_bool_Variable_18, const struct FLinearColor& K2Node_Select_Default_21, class FText CallFunc_Array_Get_Item_4);
};

}


