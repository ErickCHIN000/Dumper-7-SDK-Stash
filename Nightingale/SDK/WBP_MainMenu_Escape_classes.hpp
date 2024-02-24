#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x538 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Escape.WBP_MainMenu_Escape_C
class UWBP_MainMenu_Escape_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StageVisible;                                      // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Guidebook;                                     // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Inventory;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Logout;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Map;                                           // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Party;                                         // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Quit;                                          // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Redemptions;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ReportBug;                                     // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Resume;                                        // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Settings;                                      // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Stuck;                                         // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXUserWidget*                        LastSelectedTab;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Escape_C* GetDefaultObj();

	void SetButtonVisibilityFromRealmSettings(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_OutRealmSettings, bool CallFunc_GetCurrentRealmSettings_ReturnValue, bool CallFunc_HasOnboardingRealmsTags_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget();
	class UWidget* GetDefaultFocusWidget(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void ResetCursorToCenter(double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector2D& CallFunc_GetAlignmentInViewport_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void EscMenu_OpenToUniquePage(const struct FGameplayTag& GuidebookCategory);
	void Construct();
	void Destruct();
	void BndEvt__WBP_MainMenu_Escape_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Map_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Party_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Inventory_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Resume_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Settings_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Stuck_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_ReportBug_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Quit_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainMenu_Escape_CBU_Redemptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MainMenu_Escape(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGameplayTag& K2Node_CustomEvent_GuidebookCategory, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_QuitGame_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class UWBP_PlayerMap_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, bool Temp_bool_Variable, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, class UWBP_InventoryScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4, double Temp_real_Variable, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_SocialScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5, double Temp_real_Variable_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, class UWBP_Options_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnConsolePlatform_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_5, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_6, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_1, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_2, class UWBP_Redemption_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_7, double K2Node_Select_Default_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


