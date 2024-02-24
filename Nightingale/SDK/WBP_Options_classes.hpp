#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x580 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Options.WBP_Options_C
class UWBP_Options_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Notification_Disappear;                            // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Notification_Appear;                               // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Apply;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CategoryButton_Audio;                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CategoryButton_Gameplay;                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CategoryButton_Interface;                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CategoryButton_KeyBindings;                    // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CategoryButton_Video;                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_NextCategory;                                  // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_PreviousCategory;                              // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Reset;                                         // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_CategoryButtons;                                // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      OptionsWidgetSwitcher;                             // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Audio_C*                  WBP_Options_Audio;                                 // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Gameplay_C*               WBP_Options_Gameplay;                              // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Interface_C*              WBP_Options_Interface;                             // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_KeyBindingsScreen_C*      WBP_Options_KeyBindingsScreen;                     // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Video_C*                  WBP_Options_Video;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_OptionMenus                     CurrentActiveWidget;                               // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActiveTabIndex;                                    // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        AttemptedNavToTabIndex;                            // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_General_C*                  PopupReference;                                    // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWindowClosing;                                   // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_Common_Button_Base_C*>     CategoryButtons;                                   // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_Options_C* GetDefaultObj();

	void SetRedemptionButtonVisibility();
	int32 GetNextCategoryIndex(bool IsNextCategory, const TArray<class UWBP_Common_Button_Base_C*>& VisibleCategoryButtons, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void Handle_Category_Button_Clicked(class UWidget* Button, int32 CallFunc_GetChildIndex_ReturnValue);
	void OnCategoryDeactivated();
	class UWidget* BP_GetDesiredFocusTarget(enum class E_OptionMenus Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void OnCategoryChanged(int32 ButtonIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Common_Button_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetupCategoryButtonBindings(TArray<class UWBP_Common_Button_Base_C*>& K2Node_MakeArray_Array);
	void ClosePopup(bool CallFunc_IsValid_ReturnValue);
	void OpenTab(int32 NewTabIndex, int32 Temp_int_Variable, enum class E_OptionMenus Temp_byte_Variable, enum class E_OptionMenus Temp_byte_Variable_1, enum class E_OptionMenus Temp_byte_Variable_2, enum class E_OptionMenus Temp_byte_Variable_3, enum class E_OptionMenus Temp_byte_Variable_4, enum class E_OptionMenus K2Node_Select_Default);
	void OpenConfirmationPopup(class FText Temp_text_Variable, class FText Temp_text_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class FText CallFunc_Format_ReturnValue_2, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void TryCloseScreen(bool CallFunc_TabHasUnsavedChanges_HasUnsavedChanges);
	void OnPopupClosed(class UNWXCommonWindowWidget* Window);
	void RemovePopupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue);
	void OnPopupButton2Selected();
	void OnPopupButton1Selected();
	void TryChangeTab(int32 NewTabIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_TabHasUnsavedChanges_HasUnsavedChanges);
	void DisableButtons();
	void TabHasUnsavedChanges(bool* HasUnsavedChanges, enum class E_OptionMenus Temp_byte_Variable, class UNWXOptionTabWindowWidget* K2Node_Select_Default, bool CallFunc_HasDirtiedSettings_ReturnValue);
	void OnSettingValueUpdated(bool HasUnsavedChanges);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void ApplySettingsOnTab(enum class E_OptionMenus Temp_byte_Variable, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXOptionTabWindowWidget* K2Node_Select_Default);
	void ResetSettingsOnTab(enum class E_OptionMenus Temp_byte_Variable, class UNWXOptionTabWindowWidget* K2Node_Select_Default);
	class UWidget* GetDefaultFocusWidget(enum class E_OptionMenus Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void BndEvt__WBP_Options_CBU_CategoryButton_Audio_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_CategoryButton_Video_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_CategoryButton_Interface_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_CategoryButton_KeyBindings_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_CategoryButton_Gameplay_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_Reset_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__WBP_Options_CBU_NextCategory_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Options_CBU_PreviousCategory_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Options(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UWBP_Common_Button_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_GetNextCategoryIndex_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetNextCategoryIndex_ReturnValue_1);
};

}


