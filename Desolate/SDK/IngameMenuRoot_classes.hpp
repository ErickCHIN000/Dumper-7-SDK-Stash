#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2F9 - 0x285)
// WidgetBlueprintGeneratedClass IngameMenuRoot.IngameMenuRoot_C
class UIngameMenuRoot_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1EF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeExit;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAdvancedOptions_v3_C*                 AdvancedOptions_v3;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioOptions_v3_C*                    AudioOptions_v3;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsOptions_v3_C*                 GraphicsOptions_v3;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIngameMenuScreen_v3_C*                IngameMenuScreen_v3;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyBindingScreen_v3_C*                KeyBindingScreen_v3;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadGameScreen_C*                     LoadGameScreen;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuOverlay;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsScreen_v3_C*                   OptionsScreen_v3;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USaveGameScreen_C*                     SaveGameScreen;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Tint;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBaseAutoHideWidget_C*                 CurrentScreen;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MainTheme;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bConfirmScreenShown;                               // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UIngameMenuRoot_C* GetDefaultObj();

	void FocusCurrentScreen(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AMyPlayerController_C* K2Node_DynamicCast_AsMy_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ShowScreen(class UBaseAutoHideWidget_C* Screen, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CustomEvent_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPressed_Event_0();
	void OnPressed_Event_1();
	void OnPressed_Event_2();
	void OnPressed_Event_3();
	void OnPressed_Event_4();
	void OnPressed_Event_5();
	void ExitToMainMenu();
	void Suicide();
	void ExitGame();
	void OnPressed_Event_6();
	void CustomEvent();
	void CustomEvent_0();
	void CustomEvent_2();
	void RestartGame();
	void CustomEvent_3();
	void CustomEvent_4();
	void OnViewportReceiveFocus();
	void SaveGameBeforeQuit(bool bQuit);
	void OpenSavingScreen();
	void CancelSaving();
	void ExecuteUbergraph_IngameMenuRoot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UConfirmScreen_v3_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsGamePaused_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_3, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SetGamePaused_ReturnValue_2, bool CallFunc_IsGamePaused_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AMyPlayerController_C* K2Node_DynamicCast_AsMy_Player_Controller, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_4, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_4, bool K2Node_DynamicCast_bSuccess_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess_7, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_CustomEvent_bQuit, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_9, enum class ESaveSlot CallFunc_GetCurrentSaveSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15);
};

}


