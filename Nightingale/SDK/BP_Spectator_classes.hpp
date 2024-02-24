#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x4E0 - 0x488)
// BlueprintGeneratedClass BP_Spectator.BP_Spectator_C
class ABP_Spectator_C : public ANWXSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       MaxPossibleSpeed;                                  // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_DB_FlyCamOverlay_C*               UIOverlay;                                         // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UCameraModifier*>               Modifiers;                                         // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       SlowScaleModifier;                                 // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FastScaleModifier;                                 // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpectatorPawnMovement*                SpectatorMoveComp;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DollyMode;                                         // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ZoomIn;                                            // 0x4D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ZoomOut;                                           // 0x4D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5866[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RotateModifier;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Spectator_C* GetDefaultObj();

	void IsCardNotificationQueueEmpty(bool* bIsEmpty);
	void GetUIOverlay(class UWBP_DB_FlyCamOverlay_C** AsWBP_DB_Fly_Cam_Overlay, bool CallFunc_IsValid_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class UWBP_DB_FlyCamOverlay_C* K2Node_DynamicCast_AsWBP_DB_Fly_Cam_Overlay, bool K2Node_DynamicCast_bSuccess);
	void SetAcceleration(double InputValue);
	void LookUpInput(double AxisValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_AddControllerPitchInput_Val_ImplicitCast);
	void MoveRightInput(double AxisValue, float CallFunc_MoveRight_Val_ImplicitCast);
	void MoveForwardInput(double AxisValue, float CallFunc_MoveForward_Val_ImplicitCast);
	void TurnInput(double AxisValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_AddControllerYawInput_Val_ImplicitCast);
	void InpActEvt_I_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void DisplayHUD(bool ShowingHUD);
	void CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row);
	void RemoveMarker(class AActor* ActorToMark);
	void UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor);
	void DisplayCompass(bool bVisible, bool PlayFX);
	void DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly);
	void DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor);
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility);
	void DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type);
	void RemoveQuestNotification();
	void DisplayRecoil(bool IsRecoil);
	void DisplaySingleRecoil();
	void DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info);
	void RemoveBigLootNotification();
	void DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveToolTip();
	void DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText);
	void RemoveGlobalNotification();
	void CrosshairVisibility(bool bVisible);
	void HUD_FocusChatInput();
	void HUD_InputChatCommand();
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
	void HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext);
	void HUD_DisplayApexCreature_BossBar(bool Display_);
	void HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header);
	void HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header);
	void HUD_RemoveBossBar(const class FString& Label);
	void HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour);
	void HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image);
	void HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode);
	void DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage);
	void HUD_SetRealmStartTime(double RealmStartTime);
	void Crosshair_UpdateWeaponSpread(double Spread);
	void ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData);
	void HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay);
	void HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_);
	void HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display);
	void HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content);
	void HUD_StatusEffect_TextNotification_Remove();
	void UI_Spyglass_AdjustZoomLevel();
	void UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality);
	void UI_VFX_CC_ChangeCharacter();
	void DisplayErrorNotification(class FText MainText, class FText BodyText);
	void FadeToBlack_andBack(double TimeToStayBlack);
	void FadeToBlack_Manual(bool To_Black_true__From_Black__False);
	void BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback);
	void BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback);
	void BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation);
	void BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min);
	void ClearNotificationCardQueue();
	void UpdateNextNotificationCard();
	void OnActorSelected(class AActor* ActorSelected, struct FVector& SelectedLocation, struct FVector& SelectedNormal, struct FHitResult& Hit);
	void OnClearSelection();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Spectator(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key, class AActor* K2Node_Event_ActorToMark, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, bool K2Node_Event_bVisible_1, bool K2Node_Event_PlayFX, double K2Node_Event_DisplayTime_3, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_2, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, bool K2Node_Event_IsRecoil, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, bool K2Node_Event_bVisible, const class FString& K2Node_Event_ChatMessage, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, int32 K2Node_Event_ChannelID_1, int32 K2Node_Event_ChannelID, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, bool K2Node_Event_Away, const class FString& K2Node_Event_message_2, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message, bool K2Node_Event_Show, double K2Node_Event_Time, bool K2Node_Event_Show_, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool K2Node_Event_Display_, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Label_1, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display_1, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay_1, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, class AActor* K2Node_Event_ActorSelected, const struct FVector& K2Node_Event_SelectedLocation, const struct FVector& K2Node_Event_SelectedNormal, const struct FHitResult& K2Node_Event_Hit, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark_2, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, float K2Node_Event_DeltaSeconds, float CallFunc_GetCurrentSpeed_ReturnValue, float CallFunc_GetCurrentFOV_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, bool K2Node_Event_ShowingHUD, class UWBP_DB_FlyCamOverlay_C* CallFunc_GetUIOverlay_AsWBP_DB_Fly_Cam_Overlay, class UWBP_DB_FlyCamOverlay_C* CallFunc_GetUIOverlay_AsWBP_DB_Fly_Cam_Overlay_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_DB_FlyCamOverlay_C* CallFunc_GetUIOverlay_AsWBP_DB_Fly_Cam_Overlay_2, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1);
};

}


