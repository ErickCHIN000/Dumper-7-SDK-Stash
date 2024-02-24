#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x5A8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_HUD_SCREEN.WBP_HUD_Screen_C
class UWBP_HUD_Screen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_DetailMode;                                   // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInHudScreen;                                   // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Mode_Deconstruct;                                  // 0x4E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BlendCompass;                                      // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_ActionProgressBar_C*          ActionProgressBar;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrosshairBase_C*                  Crosshairs;                                        // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_DamageIndicator_C*            DMG_Indicator;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_AbilityIcons;                                   // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_AbilityBar_MainHand_C*         MainhandAbilityBar;                                // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_AbilityBar_Offhand_C*          OffhandAbilityBar;                                 // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_AttributeWarnings_C*          PersistentWarnings;                                // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_HUD_Toolbar;                                    // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_StatusEffects_C*              StatusEffects;                                     // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerBars_10Slot_C*              ToolBar;                                           // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_Compass_C*                    WB_Compass;                                        // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossCreatureNameplate_C*          WBP_BossCreatureNameplate;                         // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BuildMode_Message_C*              WBP_BuildMode_Message;                             // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugStats_C*                     WBP_DebugStats;                                    // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FoodBuffsContainer_C*             WBP_FoodBuffsContainer_1;                          // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_OffscreenIndicator_C*         WBP_HUD_OffscreenIndicator;                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerBar_Stamina_C*              WBP_HUD_PlayerStamina_Rect;                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InteractionTimer_C*               WBP_InteractionTimer;                              // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerBar_Fed_C*                  WBP_PlayerBar_Fed_Rectangular;                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerBar_Rest_C*                 WBP_PlayerBar_Rest_Rectangular;                    // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerBar_Health_C*               WBP_PlayerHealthBar;                               // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatusEffectAccumulationBox_C*    WBP_StatusEffectAccumulationBox;                   // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          FadeTimer;                                         // 0x5A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Screen_C* GetDefaultObj();

	void OnSettingsUpdated();
	void On_Build_Mode_State_Changed(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, bool K2Node_SwitchEnum_CmpSuccess);
	void OnFadeTimerExpired(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ResetFadeTimer(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetAutoHideHUD_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void OnItemAbilityUsed(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry);
	void OnAnyAttributeChanged(struct FGameplayAttribute& Attribute);
	void OnOwnedGameplayTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue);
	void ListenForPlayerGameplayChanges(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnVoipRoomMemberChanged(const class FString& PlayerName, bool IsListening, bool IsLocalPlayer, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText Temp_text_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetLocalPlayerName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo);
	void HandleAbilityFailedEvent(class UGameplayAbility* Ability, struct FGameplayTagContainer& Reason, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class FText CallFunc_GetErrorNotificationFromGameplayTagContainer_ErrorNotification, bool CallFunc_GetErrorNotificationFromGameplayTagContainer_ReturnValue);
	void ListenForAbilityFailedEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess);
	void Check_if_in_Tutorial_Realms(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_HasOnboardingRealmsTags_ReturnValue);
	void Show_Hud(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Contextual_Controls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData);
	void UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText DisplayText, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image, double Temp_real_Variable, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, double Temp_real_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, bool Temp_bool_Variable_1, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void GetDebugModeState(class UBP_DebugModeStateComponent_C** DebugModeState, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class UBP_DebugModeStateComponent_C* CallFunc_GetDebugModeStateInterface_DebugModeState);
	class FText Bind_GetCheatModeText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStateActive_ReturnValue, class FText K2Node_Select_Default);
	void GetPlayerAttribute(const struct FGameplayAttribute& Attribute, bool* Success, double* Value, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void CrosshairVisibility(bool bVisible);
	void DisplaySingleRecoil();
	void DisplayRecoil(bool bRecoil);
	void DisplayHitIndicator(double IndicationTime, const struct FLinearColor& Color, enum class E_HitType Hit_Type);
	void DisplayCrosshair(enum class E_CrosshairTypes CrosshairType, bool bCrosshairVisible, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicatorType, bool bHitIndicatorVisible);
	void DisplayCompass(bool bVisible, bool Visible, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideCrosshair(double Duration);
	void Construct();
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Screen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_NewPawn, double K2Node_CustomEvent_Duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


