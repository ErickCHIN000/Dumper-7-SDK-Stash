#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x3B0 - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateInputAction.W_TemplateInputAction_C
class UW_TemplateInputAction_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_Over;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PrimaryFocus;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SecondaryFocus;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     InputKey_P;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     InputKey_S;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Primary;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Secondary;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_InputName;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         OnPrimary_;                                        // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2390[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MouseEnterColor;                                   // 0x2B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MouseLeaveColor;                                   // 0x2C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInEdit_;                                         // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InSecure_;                                         // 0x2D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionName;                                        // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  MappingName;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_TemplateControlAction           SettingName;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_23BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ActionKeySetting                   PrimaryKey;                                        // 0x318(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_ActionKeySetting                   SecondaryKey;                                      // 0x348(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_Options_C*                          OptionsRef;                                        // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        BackupAction;                                      // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBackUp_;                                         // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AddSpace_;                                         // 0x391(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_23C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpaceSize;                                         // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ForceHide_;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    MyLeft;                                            // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHovered_;                                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MakeAnim_;                                         // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualLeft;                                        // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TemplateInputAction_C* GetDefaultObj();

	void MSG_RequestKey(bool Action_, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord* MyKey);
	void MSG_IsKeyEditing(bool* Editing_);
	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation);
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, bool CallFunc_HasUserFocus_ReturnValue);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, bool CallFunc_HasUserFocus_ReturnValue);
	void ChangeTitleColor(const struct FSlateColor& TitleColor);
	void CheckSizeArray(const struct FKey& K2Node_MakeStruct_Key, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void LoadDataAction(const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void CheckActionIsDefault(bool* IsDefault_, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_Select_Default, const struct FInputActionKeyMapping& K2Node_Select_Default_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ActualiseInputKey(bool IgnoreCheckDefault, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_CheckActionIsDefault_IsDefault_, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputActionKeyMapping& K2Node_Select_Default_1, const struct FInputChord& K2Node_MakeStruct_InputChord_1);
	void CheckForRename(class UInputKeySelector* InputRef, const class FString& Local_found, class FText Local_Rename, const class FString& CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, const struct FKey& K2Node_MakeStruct_Key, const struct FInputChord& K2Node_MakeStruct_InputChord, int32 Temp_int_Variable_1, bool Temp_bool_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 K2Node_Select_Default, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_KeysName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue);
	void MSG_ChangeSensitivity(float Sensitivity);
	void MSG_ChangeInvertMouse(bool InvertMouse);
	void MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32 Index, float Value);
	void RestoreAction();
	void SetDefaultKey();
	void ReloadBackupAction();
	void MakeBackupAction();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void EditMyKey(const struct FInputChord& SelectedKey);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void MouseEnter();
	void MouseLeave();
	void MakeAnim();
	void BndEvt__InputKey_P_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__InputKey_S_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature();
	void CheckForStyle(bool ShowStyle_);
	void ExecuteUbergraph_W_TemplateInputAction(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_Event_Sensitivity, bool K2Node_Event_InvertMouse, enum class E_TemplateUI K2Node_Event_Setting, int32 K2Node_Event_Index, float K2Node_Event_Value, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_2, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 Temp_int_Variable_1, bool Temp_bool_Variable_4, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_KeyKey_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, const struct FKey& K2Node_MakeStruct_Key, float Temp_float_Variable, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FKey& K2Node_Select_Default_1, bool Temp_bool_Variable_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, float K2Node_Select_Default_2, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_SetMappingsActionArray_KeyAlreadyExist_, TArray<struct FInputActionKeyMapping>& CallFunc_SetMappingsActionArray_NewMappings, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, bool K2Node_Event_ShowStyle_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, class FName CallFunc_Conv_StringToName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_2, class FText CallFunc_Key_GetDisplayName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue_1);
};

}


