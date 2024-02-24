#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x4B8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
class UUMG_ConnectingOverlay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowCompetitionPanel;                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideConnectingPrompt;                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowSidePanel;                                     // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowAnnouncementPanel;                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowMenuButtons;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AnnouncementBlack;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CloseButton_2_C*                  AnnouncementScreenCloseButton;                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ButtonCredits;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ButtonExit;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ButtonOffline;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ButtonPlay;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ButtonSettings;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ConnectingHbox;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ConnectingPromptBorder;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ConnectingSteam;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExternalTitleButton_C*            Discord;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExternalTitleButton_C*            Feedback;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          FrontLayer;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Logo;                                              // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVertBox;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PakMeta;                                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     PakMetaCopy;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InfoHover_C*                      PakMetaHover;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PakMetaImage;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PakMetaMessage;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExternalTitleButton_C*            PatchNotes;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Person;                                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ShowRoadmapButton;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Smoke;                                             // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpaceFiller;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SteamLocalAdmin;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_RetryStatus;                             // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Status;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AnnouncementPanel_C*              UMG_AnnouncementPanel;                             // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CompetitionPanel_C*               UMG_CompetitionPanel;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CreditsPage_C*                    UMG_CreditsPage_C_2;                               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FatalSkyTrailerButton_C*          UMG_FatalSkyTrailerButton;                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    UMG_LoadingIcon;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SeekerTrailerButton_C*            UMG_SeekerTrailerButton;                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SettingsMenu_C*                   UMG_SettingsMenu;                                  // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TitleScreenTrailerButton_C*       UMG_TitleScreenTrailerButton;                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcarusMessageListeners*               IcarusMessageListener;                             // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  RetryStatusFormat;                                 // 0x3C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ContentServerConnectionComplete;                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOfflineAccountMigrator*               OfflineAccountMigratorTest;                        // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_TitleScreen_C*      UserInterfaceRef;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MigrationFailureMsg;                               // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ForceDataMigration;                                // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPakMetaDetail                        PakMetaDetail;                                     // 0x410(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_ConnectingOverlay_C* GetDefaultObj();

	void IsEscapeMenuDisabled(bool* Disabled);
	void Show_Pak_Meta_Popup_if_Required(bool CallFunc_ShouldShowPopup_ReturnValue, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetPakMetaShortMessage_OutMessage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget);
	void GetPakMetaShortMessage(const struct FPakMetaDetail& PakDetail, class FText* OutMessage, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue_1, bool CallFunc_IsPakResultMatch_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
	void GetPakMetaLongMessage(const struct FPakMetaDetail& PakDetail, class FText* MessageOut, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsPakResultMatch_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_FileDetailsToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, bool CallFunc_IsPakResultMatch_ReturnValue_1, const class FString& CallFunc_FileDetailsToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_5, const class FString& CallFunc_FileDetailsToString_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, bool CallFunc_IsPakResultMatch_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class FText CallFunc_Conv_StringToText_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, bool CallFunc_IsPakResultMatch_ReturnValue_3, const class FString& CallFunc_FileDetailsToString_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4);
	void CheckPakMeta(class FText CallFunc_GetPakMetaShortMessage_OutMessage, bool CallFunc_IsPakResultMatch_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue_1, bool CallFunc_IsPakResultMatch_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FPakMetaDetail& CallFunc_CheckGameContentHash_ReturnValue);
	void DoNothing();
	void Log(const class FString& Description, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ShowCharacterSelectScreen(const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Initialise(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item, class ABP_TitleScreenGameMode_C* K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const class FString& CallFunc_CheckIfDriversAreUpToDate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Select_Default, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
	void Finished_E78F06674F46BAE2FA5469B944A0976A();
	void OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response);
	void OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response);
	void OnFail_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response);
	void OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response);
	void UpdateConnectingProgress();
	void OnConnectMessageEvent(bool bSuccess);
	void MoveToCharacterSelection();
	void QuitGame();
	void EscapeKeyPressed();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void OnContentServerConnectionSuccess();
	void CheckIfConnectionFinished();
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void Construct();
	void CloseSettings(class UUMG_ButtonBase_C* Button);
	void BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void LoginFailed(enum class ELoginFailure ErrorCode);
	void BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void CloseCredits(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
	void BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
	void BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature();
	void GetOwnedPackageIds();
	void RetryFetchPackages();
	void ShowMigrationError();
	void DoNothing2();
	void Visbility_Changed(enum class ESlateVisibility InVisibility);
	void FrameGenerationUpdated(bool Value);
	void UpdateDLSSMode(bool Enabled);
	void BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_ConnectingOverlay(int32 EntryPoint, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FResGetUserProfile& K2Node_CustomEvent_Response_3, const struct FResGetUserProfile& K2Node_CustomEvent_Response_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResGetUserProfile& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UOfflinePackageFlagsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FResGetUserProfile& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FResGetUserProfile& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FResGetUserProfile& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, TArray<int32>& CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags, const class FString& CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason, bool CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue_1, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Format_ReturnValue, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_bSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsConnectedIcarusBackend_ReturnValue, bool CallFunc_IsConnectedIcarusBackend_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ELoginFailure K2Node_CustomEvent_ErrorCode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FReqGetUserProfile& K2Node_MakeStruct_ReqGetUserProfile, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, class UGetUserProfileCallbackProxyGen* CallFunc_GetUserProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, const struct FDLCPackageDataEnum& CallFunc_IntToStruct_ReturnValue, const struct FDLCPackageDataEnum& CallFunc_MakeDLCPackageDataEnum_ReturnValue, class FName CallFunc_StructToName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue_1, const struct FReqGetUserProfile& K2Node_MakeStruct_ReqGetUserProfile_1, class UGetUserProfileCallbackProxyGen* CallFunc_GetUserProfile_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UDataMigratorManager* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PerformMigrations_ReturnValue, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsRunningLocalAdmin_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool K2Node_CustomEvent_Value, class FText Temp_text_Variable_2, bool K2Node_CustomEvent_Enabled, enum class EUStreamlineDLSSGMode CallFunc_GetDLSSGMode_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue_1, bool CallFunc_GetFrameGeneration_ReturnValue, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetPakMetaShortMessage_OutMessage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
};

}


