#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x2F1 - 0x230)
// WidgetBlueprintGeneratedClass MainMenuRoot.MainMenuRoot_C
class UMainMenuRoot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BGDynamic;                                         // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAdvancedOptions_v3_C*                 AdvandecOptions_v3;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioOptions_v3_C*                    AudioOptions_v3;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunityScreen_v3_C*                 CommunityScreen_v3;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfirmScreen_OK_v3_C*                ConfirmScreen_OK_v3;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConnectScreen_v3_C*                   ConnectScreen_v3;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreditsScreen_v3_C*                   CreditsScreen_v3;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomDifficultyScreen_v3_C*          CustomDifficultyScreen_v3;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomization_v3_C*                   Customization_v3;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameOptions_v3_C*                     GameOptions_v3;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsOptions_v3_C*                 GraphicsOptions_v3;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHostGameScreen_v3_C*                  HostGameScreen_v3;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyBindingScreen_v3_C*                KeyBindingScreen_v3;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadGameScreen_C*                     LoadGameScreen;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuScreen_v3_C*                  MainMenuScreen_v3;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuOverlay;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsScreen_v3_C*                   OptionsScreen_v3;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayScreen_v3_C*                      PlayScreen_v3;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStartScreen_v3_C*                     StartScreen_v3;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Tint;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBaseAutoHideWidget_C*                 CurrentScreen;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MainTheme;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bConfirmScreenShown;                               // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMainMenuRoot_C* GetDefaultObj();

	void SetNewSave(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue);
	void ProcessHardwareBenchmark(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess);
	void NeedShowProloguePopup(bool* Result, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_ParseOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void NeedShowDisclamer(bool* Result, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_ParseOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void StartPrologue();
	void IsPrologueComplete(bool* Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShowScreen(class UBaseAutoHideWidget_C* Screen, bool CallFunc_IsValid_ReturnValue);
	void OnFailure_8724CE62462C14297A2A07AA300377E4();
	void OnSuccess_8724CE62462C14297A2A07AA300377E4();
	void OnPlayButtonClicked();
	void OnClicked_Event_0();
	void CustomEvent();
	void OnClicked_Event_2();
	void CustomEvent_1();
	void CustomEvent_2();
	void OnClicked_Event_3();
	void OnClicked_Event_4();
	void OnClicked_Event_6();
	void OnClicked_Event_7();
	void OnClicked_Event_8();
	void OnClicked_Event_9();
	void OnClicked_Event_10();
	void OnClicked_Event_11();
	void OnClicked_Event_12();
	void OnClicked_Event_13();
	void OnStartScreenPlayComplete_Event_0();
	void OnStartScreenShown_Event_0();
	void Destruct();
	void CustomEvent_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnContinueButtonClicked();
	void OnClicked_Event_5();
	void OnClicked_Event_1();
	void OnClicked_Event_14();
	void ShowPrologueSkipConfirm(class UBaseAutoHideWidget_C* ConfirmedScreen);
	void CustomEvent_3();
	void OnEnterPress_Event_1();
	void OnEnterPress_Event_0();
	void OnPressed_Event_0();
	void OnClicked_Event_15();
	void CustomEvent_4();
	void OnConfirmed_Event_0();
	void CheckServer();
	void OnOkClicked();
	void OnExit();
	void JoinServer();
	void CustomEvent_5();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_MainMenuRoot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UConfirmScreen_v3_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UNotificationWindow_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UEnterPasswordScreen_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_NeedShowDisclamer_Result, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UBaseAutoHideWidget_C* K2Node_CustomEvent_ConfirmedScreen, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPrologueComplete_Result, bool CallFunc_IsPrologueComplete_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, const class FString& CallFunc_GetSessionPropertyString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue, class FText Temp_text_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_5, enum class ESaveSlot CallFunc_FindBestSaveSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


