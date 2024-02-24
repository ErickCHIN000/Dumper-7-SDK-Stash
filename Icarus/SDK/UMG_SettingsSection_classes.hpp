#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x358 - 0x2E8)
// WidgetBlueprintGeneratedClass UMG_SettingsSection.UMG_SettingsSection_C
class UUMG_SettingsSection_C : public USettingsSection
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ApplyBox;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ApplyButton;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SettingTooltipHover_C*            Help;                                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ResetButton;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SettingArea;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SettingBox;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SettingOptionHovered;                              // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SettingOptionUnhovered;                            // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Odd;                                               // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNamedSlot*                            ConfirmationSlot;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SettingsSection_C* GetDefaultObj();

	void Set_Requirements(const TArray<bool>& States, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, TArray<class FText>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Get_Item, bool CallFunc_CheckSectionCondition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class UUMG_SettingRowBorder_C* CreateOptionBorder(class APlayerController* OwningPlayer, class UUMG_SettingRowBorder_C* OptionBorder, class UUMG_SettingRowBorder_C* CallFunc_Create_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void AddNewWidget(class USettingWidget* SettingWidget, class UUMG_SettingRowBorder_C* OptionBorder, class UPanelSlot* CallFunc_SetContent_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_SettingRowBorder_C* CallFunc_CreateOptionBorder_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void SetDisplayName(class FText& DisplayName);
	void PostSetup();
	void Setting_Option_Hovered(class UUMG_SettingRowBorder_C* Setting_Option);
	void Setting_Option_Unhovered(class UUMG_SettingRowBorder_C* Setting_Option);
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void DirtySection();
	void OnRefresh();
	void On_Settings_Updated();
	void ApplySettings();
	void On_Confirmation_Result(bool Result);
	void RevertSettings();
	void AddWidgetToSection(class USettingWidget* Widget);
	void ConfirmSettings();
	void ExecuteUbergraph_UMG_SettingsSection(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UUMG_SettingConfirmation_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class FText K2Node_Event_DisplayName, class FText CallFunc_TextToUpper_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option_1, class UWidget* CallFunc_Array_Get_Item, class UUMG_SettingRowBorder_C* K2Node_DynamicCast_AsUMG_Setting_Row_Border, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUMG_SettingRowBorder_C* K2Node_DynamicCast_AsUMG_Setting_Row_Border_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, bool CallFunc_IsSectionUsingDefaultValues_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_2, bool CallFunc_IsSectionEnabledForEdit_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_3, bool K2Node_CustomEvent_Result, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_5, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, class UUMG_SettingRowBorder_C* K2Node_DynamicCast_AsUMG_Setting_Row_Border_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_6, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USettingWidget* K2Node_Event_Widget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_3, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_7, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UUMG_SettingRowBorder_C* K2Node_DynamicCast_AsUMG_Setting_Row_Border_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void SettingOptionUnhovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option);
	void SettingOptionHovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option);
};

}


