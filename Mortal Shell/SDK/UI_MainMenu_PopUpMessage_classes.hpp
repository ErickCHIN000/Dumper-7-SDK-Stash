#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x298 - 0x230)
// WidgetBlueprintGeneratedClass UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C
class UUI_MainMenu_PopUpMessage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeInDismiss;                                // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Dismiss;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_LoreText;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_LoreTitle;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Controller_Dismiss;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_OpenDiscord;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HoldToDismiss;                                     // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanDismiss;                                        // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1853[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x290(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_MainMenu_PopUpMessage_C* GetDefaultObj();

	void OpenDiscord(bool CallFunc_TryToLaunchURL_ReturnValue);
	void FadeInDismiss(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CloseMessage(bool CallFunc_SetGamePaused_ReturnValue);
	void GetHoldToDismiss(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold);
	void OnInitialized();
	void OnHoldToDismissChanged(bool Hold);
	void OnFaceButtonPressAndHold_Set();
	void OnFaceButtonPressAndHold_Bind();
	void OnClose_Set();
	void OnFadeInEnd();
	void OnOpen();
	void BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature();
	void ForcedClose();
	void Discord();
	void BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_MainMenu_PopUpMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_CustomEvent_Hold, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_SetGamePaused_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


