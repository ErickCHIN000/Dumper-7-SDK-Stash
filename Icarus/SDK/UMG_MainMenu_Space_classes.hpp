#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3E0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MainMenu_Space.UMG_MainMenu_Space_C
class UUMG_MainMenu_Space_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CharacterFadeIn;                                   // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MailNotification;                                  // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_BioLab_Space_C*                   BioLab;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonBioLab;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonDropships;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonInventory;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonLeaveSession;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonLoadout;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonOpenWorld;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonOrbitalTree;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonOutposts;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonProspects;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ButtonReadyUp;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Buttons;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ExitButton;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header_1;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        HomeButton;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SpaceMenu_Cargo_ViewOnly_C*       Loadout;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     MailboxButton;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MailboxOverlay;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainBackground;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MainInventory_Space_C*            MainInventory;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Menus;                                             // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MetaItemShop_C*                   MetaShop;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        NewMail;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Notification;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NotificationOverlay;                               // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pattern;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ReadyUp_C*                        ReadyUp;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     SettingsButton;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_HabitatTerminal_C*                Terminal;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SpaceMenus_TopLevel_C*            TopLevel;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CloseButton_2_C*                  UMG_CloseButton_2;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Mailbox_C*                        UMG_Mailbox;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SpacePlayerInfo_C*                UMG_SpacePlayerInfo;                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Vignette;                                          // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            WorkshopTreeSlot;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5700[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterfaceSpace_C*             UserInterace_Space;                                // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpaceMainMenuOptions             CurrentMenu;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpaceMainMenuOptions             LastMenu;                                          // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BackReturnsToLastMenu;                             // 0x3BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5715[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ChatKeyBind;                                       // 0x3C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PlayerPreview_HAB_C*               PlayerPreview;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MainMenu_Space_C* GetDefaultObj();

	void EscapePressed(bool* Handled, bool CallFunc_ResetProspectView_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void InitCharacterData(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FAssociatedProspectInfo& CallFunc_GetLastProspect_AssociatedProspectInfo, bool CallFunc_GetLastProspect_ReturnValue, class UWorkshopTalentControllerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void NotificationsUpdated(class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FNotification>& CallFunc_GetNotifications_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ContractUpdated(bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ProspectInfoIsValid_Valid);
	void ShowOption(enum class ESpaceMainMenuOptions Option, bool K2Node_SwitchEnum_CmpSuccess);
	void SetContentState(enum class ESpaceMainMenuOptions State, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetBackReturnsToLastMenu(bool ShouldReturn, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void Initialise(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ResetContentSwitcher();
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
	void ShowTopMenu();
	void GoToHost(class UUMG_ButtonBase_C* Button);
	void GoToContract(class UUMG_ButtonBase_C* Button);
	void BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void CreateDropship(class UUMG_ButtonBase_C* Button);
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
	void BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void LeaveToMainMenu();
	void ReturnToCharacterSelect(class UUMG_ButtonBase_C* Button);
	void BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void CancelLeaveToMainMenu();
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer);
	void GoToJoin(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void GoToOutpostScreen(class UUMG_ButtonBase_C* Button);
	void GoBackToHome();
	void GoToOpenWorldScreen(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ResumeLastProspectClicked(class UUMG_ButtonBase_C* Button);
	void Construct();
	void GoToOpenProspectScreen(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_MainMenu_Space(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_8, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_6, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_5, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_4, bool CallFunc_IsValid_ReturnValue_2, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_3, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_5, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class ABP_PlayerPreview_HAB_C* CallFunc_GetActorOfClass_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_4, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class AIcarusPlayerControllerSpace* K2Node_DynamicCast_AsIcarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess_4, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_2, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const struct FAssociatedProspectInfo& CallFunc_GetLastProspect_AssociatedProspectInfo, bool CallFunc_GetLastProspect_ReturnValue, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button);
};

}


