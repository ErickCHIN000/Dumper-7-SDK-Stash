#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x560 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_GameplayMenus.WBP_GameplayMenus_C
class UWBP_GameplayMenus_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             Button_Close;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_Guidebook;                                  // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_Inventory;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_Map;                                        // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_Options;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_Social;                                     // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             Button_System;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Next;                                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Previous;                                      // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBox_NavButtons;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuideBook_Screen_C*               WBP_GuideBook_Screen;                              // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryScreen_C*                WBP_InventoryScreen;                               // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_C*                        WBP_Options;                                       // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerMap_Screen_C*               WBP_PlayerMap_Screen;                              // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SocialScreen_C*                   WBP_SocialScreen;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_System_Screen_C*                  WBP_System_Screen;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WindowSwitcher;                                    // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                          AudioBespokeWidgetTag;                             // 0x548(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  WindowTagAudio;                                    // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_GameplayMenus_C* GetDefaultObj();

	void DetermineOpenWidgetAudio(const struct FGameplayTag& AudioMainWidgetTag, int32 IndexToActivate, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void TriggerCloseWidgetAudio(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class UUIAudioSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void TriggerOpenWidgetAudio(const struct FGameplayTag& WidgetTag, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UUIAudioSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void HandleTriggeringAction(class UCommonButtonBase* Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetButtonFromIndex(int32 SwitcherIndex, class UCommonButtonBase** Button, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void IsCurrentlyOnGuideBook(bool* IsCurrentlyOnGuideBook, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool BP_OnHandleBackAction();
	void TryToSwitchScreens(int32 IndexToActivate, bool* IsSameTab, class UCommonButtonBase* ButtonToFocus, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CycleTab(int32 DeltaIncrement, int32 CurrentActiveIndex, int32 IndexToSelect, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UCommonButtonBase* CallFunc_GetButtonFromIndex_Button, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void DeselectOtherButtons(class UCommonButtonBase* SelectedButton, const TArray<class UWidget*>& LNavButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ActivateOptionsScreen();
	void ActivateGuidebookScreenJournalCategory(const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook);
	void ActivateGuidebookScreenCraftingCategory(const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook);
	void ActivateGuidebookScreenBuildingCategory(const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook);
	void ActivateGuidebookScreen(const struct FGameplayTag& CategoryToSwitch);
	void ActivateInventoryScreen();
	void ActivateMapScreen();
	void ActivateSocialScreen();
	void BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Close_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Social_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_14_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_CBU_Previous_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_CBU_Next_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_WBP_GuideBook_Screen_K2Node_ComponentBoundEvent_13_OnEnterPlacementMode__DelegateSignature();
	void BndEvt__WBP_GameplayMenus_Button_Map_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Inventory_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Guidebook_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Options_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_Social_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_16_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__WBP_GameplayMenus_Button_System_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_GameplayMenus(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_20, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_19, bool K2Node_ComponentBoundEvent_Selected_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_18, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_17, bool K2Node_ComponentBoundEvent_Selected_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_16, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_15, bool K2Node_ComponentBoundEvent_Selected_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, bool K2Node_ComponentBoundEvent_Selected_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, bool CallFunc_TryToSwitchScreens_IsSameTab, bool CallFunc_TryToSwitchScreens_IsSameTab_1, bool CallFunc_TryToSwitchScreens_IsSameTab_2, bool CallFunc_TryToSwitchScreens_IsSameTab_3, bool CallFunc_TryToSwitchScreens_IsSameTab_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_TryToSwitchScreens_IsSameTab_5);
};

}


