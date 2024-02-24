#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x540 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_HUD_NotificationLayer.WBP_HUD_NotificationLayer_C
class UWBP_HUD_NotificationLayer_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_fadeToBlack;                                  // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      WYSWIG_EDITORPREVIEW;                              // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_NotificationCardWindow_C*         CardNotification;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_DamageIndicator_C*            DamageIndicator;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EncounterDetailsUpdater_C*        EncounterDetailsUpdater;                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FadeToBlack;                                   // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EncounterMessage_C*               WBP_EncounterMessage;                              // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ErrorNotification_C*              WBP_ErrorNotification;                             // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Global_Notification_C*            WBP_Global_Notification_C_0;                       // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_DamagedEquipmentIndicator_C*  WBP_HUD_DamagedEquipmentIndicator;                 // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_Notification_General_C*       WBP_HUD_Notification_General;                      // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_Quest_Notification_C*         WBP_HUD_Quest_Notifications;                       // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Popup_FTUE_nonmodal_C*            WBP_Popup_FTUE_nonmodal;                           // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_hud_notification_Challenge_C*  WBP_sw_hud_notification_Challenge;                 // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AnimPlaying;                                       // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_hud_DetailMode                  HUD_DetailedMode;                                  // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerResting;                                     // 0x532(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63D9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeToStayBlack;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_NotificationLayer_C* GetDefaultObj();

	void OnRequestTutorialNonModal(class UTutorialDataAsset* Tutorial, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo);
	void OnRequestTutorialModal(class UTutorialDataAsset_SlideDeck* TutorialData, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_Tutorial_Modal_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void Update_Net_Notification_Card();
	void Clear_Notification_Card_Queue();
	void Is_Card_Notification_Queue_Empty(bool* bIsEmpty, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void RefreshRestBar(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void PlayFadeToBlack_Animation(bool To_Black, double Temp_real_Variable, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, enum class EUMGSequencePlayMode K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void PlayerIsReady();
	void RemoveGlobalNotification();
	void DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText, bool UseSubBox, class FText SubBoxHeader, class FText SubBoxEntry);
	void RemoveToolTip();
	void DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveBigLootNotification();
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo& S_BigLootNotificationInfo);
	void RemoveQuestNotifier(TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess);
	void DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& Color);
	void Display_Card_Notification(struct FS_QuestNotificatorInfo& S_QuestNotificatorInfo);
	void ToggleHUD_DetailMode(enum class E_hud_DetailMode HUD_DetailedMode);
	void FadeToBlack(double TimeTo_StayBlack);
	void ResetAnim();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_NotificationLayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_hud_DetailMode K2Node_CustomEvent_HUD_DetailedMode, double K2Node_CustomEvent_TimeTo_StayBlack, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


