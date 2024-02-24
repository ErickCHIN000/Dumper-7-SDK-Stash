#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x491 - 0x458)
// BlueprintGeneratedClass HUD_CommonNWX.HUD_CommonNWX_C
class AHUD_CommonNWX_C : public ANWXCommonHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ChatComponent_C*                   BP_ChatComponent;                                  // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_NotificationLayer_C*          HUD_NotificationLayer;                             // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_ChatLayer_C*                  WBP_ChatLayer;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_InteractionLayer_C*           InteractLayer;                                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Subtitle_Window_C*                SubtitleLayer;                                     // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHUDVisible;                                     // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHUD_CommonNWX_C* GetDefaultObj();

	void IsCardNotificationQueueEmpty(bool* bIsEmpty, bool CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty);
	void OnActiveWindowClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ActivateLayers();
	void UninitializeHUD();
	void InitializeHUD(class UNWXCommonWindowWidget* LActiveWindow, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue);
	void ActivateSubtitles(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Subtitle_Window_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void DeactivateInteract(bool CallFunc_IsValid_ReturnValue);
	void ActivateInteract(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_InteractionLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void OnSkillUnlocked(struct FSkillDataReference& UnlockedSkill, const struct FSkillPresentationData& LCurrentUnlockedSkill, bool CallFunc_AreNotificationsEnabled_Enabled, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSkillDataReference& CallFunc_Array_Get_Item, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo_1);
	void ToggleHUDVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class UNWXPrimaryGameLayout*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UNWXPrimaryGameLayout* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DeactivateSpectatorHUD(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue);
	void ActivateSpectatorHUD(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_DB_FlyCamOverlay_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void AreNotificationsEnabled(bool* Enabled, class APlayerState* CallFunc_GetPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void DeactivateChat(bool CallFunc_IsValid_ReturnValue);
	void ActivateChat(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_ChatLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void DeactivateNotifications(bool CallFunc_IsValid_ReturnValue);
	void ActivateNotifications(class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_HUD_NotificationLayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void DisplayHUD(bool ShowingHUD);
	void CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row);
	void RemoveMarker(class AActor* ActorToMark);
	void UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor);
	void DisplayCompass(bool bVisible, bool PlayFX);
	void DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor);
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility);
	void DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type);
	void DisplayRecoil(bool IsRecoil);
	void DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info);
	void RemoveBigLootNotification();
	void Chat_Message_SendToServer(const class FString& ChatMessage);
	void Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS);
	void Chat_LeaveChannel(int32 ChannelID);
	void Chat_JoinChannel(int32 ChannelID);
	void Chat_PM_SendToServer(int32 PlayerId, const class FString& Message);
	void Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message);
	void Chat_SetStatus(bool Away);
	void Chat_ServerCommand(const class FString& Message);
	void Chat_Yell_SendToServer(const class FString& Message);
	void Chat_Yell_ReceiveFromServer(const class FString& Message);
	void Crosshair_ShowReloadText(bool Show);
	void Crosshair_UpdateReload(double Time);
	void ShowSpyglass(bool Show_);
	void HUD_DisplayApexCreature_BossBar(bool Display_);
	void HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header);
	void HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header);
	void HUD_RemoveBossBar(const class FString& Label);
	void HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode);
	void HUD_SetRealmStartTime(double RealmStartTime);
	void Crosshair_UpdateWeaponSpread(double Spread);
	void ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData);
	void HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content);
	void HUD_StatusEffect_TextNotification_Remove();
	void UI_Spyglass_AdjustZoomLevel();
	void UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality);
	void UI_VFX_CC_ChangeCharacter();
	void FadeToBlack_andBack(double TimeToStayBlack);
	void FadeToBlack_Manual(bool To_Black_true__From_Black__False);
	void BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback);
	void BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback);
	void BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation);
	void BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min);
	void HUD_FocusChatInput();
	void HUD_InputChatCommand();
	void RemoveQuestNotification();
	void DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly);
	void RemoveToolTip();
	void DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText);
	void RemoveGlobalNotification();
	void DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage);
	void HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_);
	void HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay);
	void HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display);
	void DisplayErrorNotification(class FText MainText, class FText BodyText);
	void ClearNotificationCardQueue();
	void UpdateNextNotificationCard();
	void HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext);
	void HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image);
	void HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour);
	void OnClientReady(bool Success);
	void CrosshairVisibility(bool bVisible);
	void DisplaySingleRecoil();
	void OnPlayerPawnPossessed(class APawn* NewPawn);
	void OnPlayerPawnUnPossessed(class APawn* OldPawn);
	void OnPlayerSpectatorPawnPossessed(class ASpectatorPawn* NewSpectatorPawn);
	void OnPlayerSpectatorPawnUnPossessed();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_HUD_CommonNWX(int32 EntryPoint, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay_1, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Event_DisplayTime_2, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, bool CallFunc_IsValid_ReturnValue_4, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display_1, bool CallFunc_IsValid_ReturnValue_5, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_AreNotificationsEnabled_Enabled, bool CallFunc_AreNotificationsEnabled_Enabled_1, bool CallFunc_AreNotificationsEnabled_Enabled_2, bool CallFunc_AreNotificationsEnabled_Enabled_3, bool CallFunc_AreNotificationsEnabled_Enabled_4, bool CallFunc_AreNotificationsEnabled_Enabled_5, bool CallFunc_AreNotificationsEnabled_Enabled_6, const class FString& K2Node_Event_Label_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, bool K2Node_Event_Display_, bool K2Node_Event_Show_, double K2Node_Event_Time, bool K2Node_Event_Show, const class FString& K2Node_Event_message, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message_2, bool K2Node_Event_Away, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_ChannelID, int32 K2Node_Event_ChannelID_1, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, const class FString& K2Node_Event_ChatMessage, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, bool K2Node_Event_IsRecoil, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_DisplayTime_3, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, bool K2Node_Event_bVisible_1, bool K2Node_Event_PlayFX, class AActor* K2Node_Event_ActorToMark, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark_2, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, bool K2Node_Event_ShowingHUD, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_GetActiveWindowInLayer_ReturnValue, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, class ABP_GameState_C* CallFunc_GetCoreGameState_GameState, bool CallFunc_IsValid_ReturnValue_18, bool K2Node_Event_Success, bool K2Node_Event_bVisible, class UCommonActivatableWidget* CallFunc_GetHUDScreen_ReturnValue, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_19, class UCommonActivatableWidget* CallFunc_GetHUDScreen_ReturnValue_1, class APawn* K2Node_Event_NewPawn, class UWBP_HUD_Screen_C* K2Node_DynamicCast_AsWBP_HUD_Screen_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* K2Node_Event_OldPawn, class ASpectatorPawn* K2Node_Event_NewSpectatorPawn, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


