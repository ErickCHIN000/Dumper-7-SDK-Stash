#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x350 - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateGlobalSettings.W_TemplateGlobalSettings_C
class UW_TemplateGlobalSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_Apply;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Down;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Up;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_MyApply;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Over;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ActualGlobal;                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GlobalName;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_C*                          OptionsRef;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NeedApply_;                                        // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1F42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GlobalGraphicName;                                 // 0x2B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_TemplateGraphic                 SettingName;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1F54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ButtonOptions;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        ButtonDefaultIndex;                                // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        BackupButton;                                      // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MyTest;                                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         AddSpace_;                                         // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1F80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpaceSize;                                         // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          MouseEnterColor;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseLeaveColor;                                   // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ByUser_;                                           // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHovered_;                                        // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MakeAnim_;                                         // 0x342(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F9F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualLeft;                                        // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    MyLeft;                                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TemplateGlobalSettings_C* GetDefaultObj();

	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation);
	void ChangeColor(const struct FSlateColor& TitleColor, const struct FLinearColor& LAndRColor, const struct FSlateColor& ChoiceColor, const struct FLinearColor& ApplyCollor);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, bool Temp_bool_Variable, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, class UWidget* K2Node_Select_Default);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, bool Temp_bool_Variable, bool CallFunc_HasUserFocus_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_HasUserFocus_ReturnValue_1);
	void ChangeAllSettings(int32 Local_MaxIndex, int32 Local_CurrentIndex, class UW_TemplateGraphic_C* Local_Graphic, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UW_TemplateGraphic_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void MakeAnim();
	void MouseEnter();
	void MouseLeave();
	void GraphicsEdited();
	void PreConstruct(bool IsDesignTime);
	void ReloadBackupGlobal();
	void MakeBackupGlobal();
	void RestoreGlobal();
	void CheckForStyle(bool ShowStyle_);
	void BndEvt__Button_MyApply_K2Node_ComponentBoundEvent_488_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MyApply_K2Node_ComponentBoundEvent_498_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_ButtonApply_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_TemplateGlobalSettings(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, float Temp_float_Variable, bool Temp_bool_Variable_6, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_7, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Variable_8, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_9, class FText CallFunc_Array_Get_Item, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Variable_10, bool K2Node_Event_IsDesignTime, class FText CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_11, class FText CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const struct FS_GraphicIndex& K2Node_MakeStruct_S_GraphicIndex_3, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_2, bool Temp_bool_Variable_12, class FText CallFunc_Array_Get_Item_3, float CallFunc_FClamp_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_HasUserFocus_ReturnValue, bool Temp_bool_IsClosed_Variable_4, bool K2Node_Event_ShowStyle_, bool CallFunc_HasUserFocus_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const class FString& CallFunc_GetObjectName_ReturnValue_2, const class FString& CallFunc_GetObjectName_ReturnValue_3, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, const class FString& CallFunc_GetObjectName_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue_5, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_4, const struct FLinearColor& K2Node_Select_Default_5, bool Temp_bool_Has_Been_Initd_Variable_5, const class FString& CallFunc_GetObjectName_ReturnValue_6, const class FString& CallFunc_GetObjectName_ReturnValue_7, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, bool Temp_bool_IsClosed_Variable_5, const class FString& CallFunc_GetObjectName_ReturnValue_8, const class FString& CallFunc_GetObjectName_ReturnValue_9, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, const struct FLinearColor& K2Node_Select_Default_8, const struct FLinearColor& K2Node_Select_Default_9, bool Temp_bool_Variable_13, const struct FLinearColor& K2Node_Select_Default_10, const class FString& CallFunc_GetObjectName_ReturnValue_10, bool CallFunc_Contains_ReturnValue_10, const class FString& CallFunc_GetObjectName_ReturnValue_11, bool CallFunc_Contains_ReturnValue_11, const struct FLinearColor& K2Node_Select_Default_11, const struct FLinearColor& K2Node_Select_Default_12, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_13);
};

}


