#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x2F4 - 0x298)
// WidgetBlueprintGeneratedClass UMG_SettingsMenu.UMG_SettingsMenu_C
class UUMG_SettingsMenu_C : public USettingsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_BasicButton_2_C*                  BackButton;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CategoryBox;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ConfirmationSlot;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ResetButton;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SettingOptionDescription;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  TuneButton;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SettingsBack;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDirty;                                           // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RestartRequested;                                  // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowRestartPopup;                                  // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasInited;                                         // 0x2F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_SettingsMenu_C* GetDefaultObj();

	void ShowHideTuneButton(enum class ESettingsCategory Category, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GPUSupportsRTX_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Setup(class UUMG_ToggleButton_MenuHeader_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class FText CallFunc_FindText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, class USettingsView* CallFunc_CreateWidgetsForCategory_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_SettingsView_C* K2Node_DynamicCast_AsUMG_Settings_View, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UUMG_IcarusWidget_C* K2Node_DynamicCast_AsUMG_Icarus_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis);
	void ResetSwitcherContent(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UUMG_SettingsView_C* K2Node_DynamicCast_AsUMG_Settings_View, bool K2Node_DynamicCast_bSuccess);
	void SetContentState(enum class ESettingsCategory State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUMG_SettingsView_C* K2Node_DynamicCast_AsUMG_Settings_View, bool K2Node_DynamicCast_bSuccess, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis);
	void Initialise(class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void Setting_Hovered(class UUMG_SettingRowBorder_C* Setting_Object);
	void Setting_Unhovered(class UUMG_SettingRowBorder_C* Setting_Object);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void Category_Toggled(class UUMG_ToggleButtonBase_C* ToggleButton);
	void On_View_Refresh(class UUMG_SettingsView_C* View);
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void Dirty();
	void On_Visibility_Changed(enum class ESlateVisibility InVisibility);
	void Save(bool bForce);
	void On_Restart_Requested(class FName SettingName);
	void Nothing();
	void OnConfirmReset();
	void OnCancelReset();
	void BndEvt__UMG_SettingsMenu_TuneButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void OnConfirmTune();
	void OnCancelTune();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UMG_SettingsMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_ConfirmationPopup_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_ConfirmationPopup_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Object_1, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Object, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton, class UUMG_SettingsView_C* K2Node_DynamicCast_AsUMG_Settings_View, bool K2Node_DynamicCast_bSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, uint8 CallFunc_GetValidValue_ReturnValue, class UUMG_SettingsView_C* K2Node_CustomEvent_View, bool CallFunc_IsCategoryUsingDefaultValues_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_3, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_bForce, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_4, class FName K2Node_CustomEvent_SettingName, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EUStreamlineDLSSGMode CallFunc_GetDLSSGMode_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EUStreamlineDLSSGMode CallFunc_GetDLSSGMode_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GetFrameGeneration_ReturnValue);
	void SettingsBack__DelegateSignature();
};

}


