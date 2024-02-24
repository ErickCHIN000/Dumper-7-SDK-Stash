#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x4C8 - 0x458)
// BlueprintGeneratedClass HUD_NWX.HUD_NWX_C
class AHUD_NWX_C : public ANWXHUDBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ChatComponent_C*                   BP_ChatComponent;                                  // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_Screen_C*                     WBP_HUDScreen;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PlaceSchematicRecipe;                              // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               ControlGuide;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_DB_FlyCamOverlay_C*               HUD_Screen_FlyCam;                                 // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_NotificationLayer_C*          HUD_NotificationLayer;                             // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         NotificationsEnabled;                              // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Ping_Spyglass_C*                  SpyglassHud_Overlay;                               // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EBuildModeContext                 BuildMode;                                         // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_HUD_Indicator_IncorrectActionFeedback_C* WBP_InvalidActionIndicator;                        // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_ChatLayer_C*                  WBP_ChatLayer;                                     // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHUD_NWX_C* GetDefaultObj();

	void IsEntityPinned(class FName ID, bool* IsPinned);
	void IsCardNotificationQueueEmpty(bool* bIsEmpty, bool CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty);
	bool IsChatComponentFocused(bool CallFunc_IsValid_ReturnValue);
	void SetChatVisible(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetHUDVisible(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
	void RefreshFeedbackIndicator(const struct FStructurePlacementFeedback& Feedback, bool CallFunc_Not_PreBool_ReturnValue, class UWBP_HUD_Indicator_IncorrectActionFeedback_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnSkillUnlocked(struct FSkillDataReference& UnlockedSkill, const struct FSkillPresentationData& LCurrentUnlockedSkill, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo, const struct FSkillReferenceContainer& CallFunc_GetSkillUnlockables_OutSkillUnlockables, bool CallFunc_GetSkillUnlockables_ReturnValue, const struct FSkillDataReference& CallFunc_Array_Get_Item, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo_1, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void BUILDMODEPrototype_SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue);
	void SetupBinding_EnableNotifications(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void SetBuildModeVisibilty(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility CallFunc_UI_BoolSet_Visibility_Visible_Result);
	void BuildModeSwitch(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void ToggleHUDNotifications(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void HideHUD(bool CallFunc_IsValid_ReturnValue);
	void Init_NWXPostProcessActor();
	void DrawColouredBox(const struct FVector2D& Min, const struct FVector2D& Max, const struct FLinearColor& Colour, double Thickness, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, double CallFunc_BreakVector2D_X_7, double CallFunc_BreakVector2D_Y_7, float CallFunc_DrawLine_StartScreenY_ImplicitCast, float CallFunc_DrawLine_EndScreenX_ImplicitCast, float CallFunc_DrawLine_StartScreenX_ImplicitCast, float CallFunc_DrawLine_EndScreenY_ImplicitCast, float CallFunc_DrawLine_LineThickness_ImplicitCast, float CallFunc_DrawLine_StartScreenX_ImplicitCast_1, float CallFunc_DrawLine_EndScreenY_ImplicitCast_1, float CallFunc_DrawLine_StartScreenY_ImplicitCast_1, float CallFunc_DrawLine_EndScreenX_ImplicitCast_1, float CallFunc_DrawLine_LineThickness_ImplicitCast_1, float CallFunc_DrawLine_StartScreenX_ImplicitCast_2, float CallFunc_DrawLine_EndScreenX_ImplicitCast_2, float CallFunc_DrawLine_EndScreenY_ImplicitCast_2, float CallFunc_DrawLine_StartScreenY_ImplicitCast_2, float CallFunc_DrawLine_LineThickness_ImplicitCast_2, float CallFunc_DrawLine_EndScreenX_ImplicitCast_3, float CallFunc_DrawLine_StartScreenX_ImplicitCast_3, float CallFunc_DrawLine_StartScreenY_ImplicitCast_3, float CallFunc_DrawLine_EndScreenY_ImplicitCast_3, float CallFunc_DrawLine_LineThickness_ImplicitCast_3);
	void CreateHUD(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_ChatLayer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UWBP_HUD_NotificationLayer_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UWBP_HUD_Screen_C* CallFunc_Create_ReturnValue_2);
	void IsAnyWindowOpen(bool* bIsAnyWindowOpen, class UBP_UIMenusComponent_C* CallFunc_GetLocalPlayerMenusComponent_MenusComponent, bool CallFunc_IsWindowOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor);
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
	void HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext);
	void HUD_DisplayApexCreature_BossBar(bool Display_);
	void HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header);
	void HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header);
	void HUD_RemoveBossBar(const class FString& Label);
	void HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode);
	void HUD_SetRealmStartTime(double RealmStartTime);
	void Crosshair_UpdateWeaponSpread(double Spread);
	void HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content);
	void HUD_StatusEffect_TextNotification_Remove();
	void UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality);
	void UI_VFX_CC_ChangeCharacter();
	void FadeToBlack_andBack(double TimeToStayBlack);
	void FadeToBlack_Manual(bool To_Black_true__From_Black__False);
	void BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback);
	void BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation);
	void BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min);
	void BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback);
	void UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor);
	void HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image);
	void RemoveMarker(class AActor* ActorToMark);
	void CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row);
	void GameStateReady();
	void TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding);
	void TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding);
	void DisplayRecoil(bool IsRecoil);
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility);
	void DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type);
	void CrosshairVisibility(bool bVisible);
	void DisplaySingleRecoil();
	void DisplayCompass(bool bVisible, bool PlayFX);
	void HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour);
	void ToggleHUD();
	void ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData);
	void ShowSpyglass(bool Show_);
	void UI_Spyglass_AdjustZoomLevel();
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
	void ReceiveBeginPlay();
	void DisplayHUD(bool ShowingHUD);
	void OnClientReady(bool Success);
	void HUD_FocusChatInput();
	void HUD_InputChatCommand();
	void DisplayHUD_Internal(bool bShowingHUD);
	void CallServerUpdatePlayerStateCharacterState(bool bAddState, bool bDialogue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void RefreshHUD();
	void ClearNotificationCardQueue();
	void UpdateNextNotificationCard();
	void OnPlayerControllerReady(bool Success);
	void ExecuteUbergraph_HUD_NWX(int32 EntryPoint, bool K2Node_Event_Show, double K2Node_Event_Time, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool K2Node_Event_Display_, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Label_1, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay_1, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, class AActor* K2Node_Event_ActorToMark_2, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, const class FString& K2Node_Event_message, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message_2, bool K2Node_Event_Away, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_ChannelID, int32 K2Node_Event_ChannelID_1, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding_1, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsRecoil, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, bool K2Node_Event_bVisible_1, bool K2Node_Event_bVisible, bool K2Node_Event_PlayFX, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, const class FString& K2Node_Event_ChatMessage, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display_1, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_GetHideHUDAndChatInFlycam_ReturnValue, class UWBP_Ping_Spyglass_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, double K2Node_Event_DisplayTime_3, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, enum class E_CharacterGameStatus Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_CharacterGameStatus Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_Show_, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UWBP_DB_FlyCamOverlay_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetIsSpectator_ReturnValue, double K2Node_Event_DisplayTime_2, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, bool CallFunc_IsValid_ReturnValue_11, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_18, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, bool K2Node_Event_ShowingHUD, bool CallFunc_IsValid_ReturnValue_22, class UBasicAwaiter* CallFunc_GetHUDAwaiter_ReturnValue, bool K2Node_Event_Success, bool CallFunc_GetHideHUDAndChatInFlycam_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_IsValid_ReturnValue_23, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsPlayInEditorSimulateMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsAnyWindowOpen_bIsAnyWindowOpen, bool CallFunc_Not_PreBool_ReturnValue_4, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, bool K2Node_Event_bShowingHUD, bool K2Node_Event_bAddState, bool K2Node_Event_bDialogue, bool CallFunc_IsValid_ReturnValue_29, enum class E_CharacterGameStatus K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_5, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetIsStartMenu_IsStartMenu, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsPlayInEditorSimulateMode_ReturnValue_1, bool CallFunc_GetIsSpectator_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_7, const class FString& CallFunc_SelectString_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_32, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, class ABP_GameState_C* CallFunc_GetCoreGameState_GameState, bool CallFunc_IsValid_ReturnValue_33, bool CallFunc_AreAutomatedTestsRunning_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_34, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, bool K2Node_CustomEvent_Success, bool CallFunc_IsValid_ReturnValue_35, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_36, bool CallFunc_IsVisible_ReturnValue_1);
	void PlaceSchematicRecipe__DelegateSignature(class UClass* PlaceableClass);
};

}


