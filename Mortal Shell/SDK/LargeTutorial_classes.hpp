#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18A (0x3BA - 0x230)
// WidgetBlueprintGeneratedClass LargeTutorial.LargeTutorial_C
class ULargeTutorial_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Buttons_FadeIn;                               // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ActionPrompts;                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ControllerButtons;                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Dismiss;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_EndOfPressPreview;                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Illustration;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemUsedForUpgrade;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Dismiss;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Prompts;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_ItemUsedForUpgrade;                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_PromptLeft;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_PromptRight;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_UnlockedDesc;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Prompts;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Tutorial_Text;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Prompts_Up;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_TutorialTitle;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Controller_Dismiss;                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_OpenDiscord;                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_Quit;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_Restart;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_ReturnToMainMenu;                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Prompts;                               // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDHGenericDataTableID                 Preview;                                           // 0x320(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  Upgrade;                                           // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            DataTable;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDismissed;                                       // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEndOfPreview;                                    // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldToDismiss;                                     // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanDismiss;                                        // 0x362(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D05[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tut_Description;                                   // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Image_Upgrade;                                     // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Tutorial_Illustration;                             // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_ControllerButton>      Tut_Buttons;                                       // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  Tut_Title;                                         // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AutoOpenTut;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         SaveOnClose;                                       // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ULargeTutorial_C* GetDefaultObj();

	void SetTutorialUpgradeImage();
	void SetTutorialIllustration();
	void SetTutorialTitle();
	void SetTutorialDescription(class FText CallFunc_CreateResolveDescription_ReturnValue);
	void UpgradeImageVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleScale(enum class Enum_HUD_Size Selection, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
	void HardenTut(class FText Right, class FText Left, int32 Index, class FText* ReturnValue_Right, class FText* ReturnValue_Left, int32 Local_Index, class FText Local_Left, class FText Local_Right, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	class FText CreateResolveDescription(const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetHoldToDismiss(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold);
	void OpenDiscord(bool CallFunc_TryToLaunchURL_ReturnValue);
	void QuitGame(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void ToMainMenu(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess);
	void RestartPressPreview(class FName Temp_name_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_Remove_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void HandleButtonsInPressPreview();
	void HidePromptsInPressPreview();
	void SetTutorial(class UDataTable* DataTable, class FName& UpgradeName, class FName Local_Upgrade, class UDataTable* Local_DataTable, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_Array_Contains_ReturnValue);
	void UnlockBalistazookaItem(class FName UpgradeName, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void HandleStoneForm();
	void SetRetainerEffect(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetGameState(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState);
	void OnClose(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_SetGamePaused_ReturnValue);
	void PlayFadeOut(FDelegateProperty_ Delegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreviewTutorial(const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PopulateTutorial(class UDataTable* DataTable, class FName Upgrade, class UTexture2D* NewLocalVar_0, class UTexture2D* Local_UpgradeImage, class UTexture2D* Local_Image, int32 Local_Index, class UUI_ControllerButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FStruct_ControllerButton& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_HardenTut_ReturnValue_Right, class FText CallFunc_HardenTut_ReturnValue_Left, bool Temp_bool_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, float Temp_float_Variable, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin);
	void PreConstruct(bool IsDesignTime);
	void DisplayUpgradeUnlocked(class UDataTable* DataTable, class FName Upgrade);
	void OnDismiss_Bind();
	void OnDismiss_Set();
	void CloseTutorial();
	void OnOpenEvent();
	void OnInitialized();
	void OnInputModeChanged_Set(bool bKeyboardMode);
	void OnInputModeChanged_Bind();
	void PressPreview_Bind();
	void Restart();
	void Discord();
	void MainMenu();
	void Quit();
	void BndEvt__UI_Controller_Restart_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void BndEvt__UI_Controller_ReturnToMainMenu_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void BndEvt__UI_Controller_Quit_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void BndEvt__UI_Controller_Dismiss_K2Node_ComponentBoundEvent_4_OnPressStart__DelegateSignature();
	void OnFadeInEnd();
	void OnHUDSizeChanged(enum class Enum_HUD_Size Size);
	void OnHUDSizeChanged_Unbind();
	void Construct();
	void ExecuteUbergraph_LargeTutorial(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetGamePaused_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, class UDataTable* K2Node_CustomEvent_DataTable, class FName K2Node_CustomEvent_Upgrade, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_bKeyboardMode, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_3, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_2, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class Enum_HUD_Size K2Node_CustomEvent_Size, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue);
	void OnDismissed__DelegateSignature();
};

}


