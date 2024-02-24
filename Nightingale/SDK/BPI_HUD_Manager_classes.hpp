#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HUD_Manager.BPI_HUD_Manager_C
class IBPI_HUD_Manager_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_HUD_Manager_C* GetDefaultObj();

	void UpdateNextNotificationCard();
	void ClearNotificationCardQueue();
	void IsCardNotificationQueueEmpty(bool* bIsEmpty);
	void BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min);
	void BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation);
	void BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback);
	void BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback);
	void FadeToBlack_Manual(bool To_Black_true__From_Black__False);
	void FadeToBlack_andBack(double TimeToStayBlack);
	void DisplayErrorNotification(class FText MainText, class FText BodyText);
	void UI_VFX_CC_ChangeCharacter();
	void UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality);
	void UI_Spyglass_AdjustZoomLevel();
	void HUD_StatusEffect_TextNotification_Remove();
	void HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content);
	void HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display);
	void HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_);
	void HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay);
	void ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData);
	void Crosshair_UpdateWeaponSpread(double Spread);
	void HUD_SetRealmStartTime(double RealmStartTime);
	void DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage);
	void HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode);
	void HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image);
	void HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour);
	void HUD_RemoveBossBar(const class FString& Label);
	void HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header);
	void HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header);
	void HUD_DisplayApexCreature_BossBar(bool Display_);
	void HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext);
	void ShowSpyglass(bool Show_);
	void Crosshair_UpdateReload(double Time);
	void Crosshair_ShowReloadText(bool Show);
	void Chat_Yell_ReceiveFromServer(const class FString& Message);
	void Chat_Yell_SendToServer(const class FString& Message);
	void Chat_ServerCommand(const class FString& Message);
	void Chat_SetStatus(bool Away);
	void Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message);
	void Chat_PM_SendToServer(int32 PlayerId, const class FString& Message);
	void Chat_JoinChannel(int32 ChannelID);
	void Chat_LeaveChannel(int32 ChannelID);
	void Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS);
	void Chat_Message_SendToServer(const class FString& ChatMessage);
	void HUD_InputChatCommand();
	void HUD_FocusChatInput();
	void CrosshairVisibility(bool bVisible);
	void RemoveGlobalNotification();
	void DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText);
	void RemoveToolTip();
	void DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2);
	void RemoveBigLootNotification();
	void DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info);
	void DisplaySingleRecoil();
	void DisplayRecoil(bool IsRecoil);
	void RemoveQuestNotification();
	void DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type);
	void DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility);
	void DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor);
	void DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly);
	void DisplayCompass(bool bVisible, bool PlayFX);
	void UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor);
	void RemoveMarker(class AActor* ActorToMark);
	void CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row);
	void DisplayHUD(bool ShowingHUD);
};

}


