#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x181 (0x3B1 - 0x230)
// WidgetBlueprintGeneratedClass NewHUDLayout.NewHUDLayout_C
class UNewHUDLayout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimFadeIn_NoNotify;                               // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimFadeOut_NoNotify;                              // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_HUD_Large;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_HUD_Medium;                                   // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_HUD_Default;                                  // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAbilities_C*                          Abilities;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAreaNotification_C*                   AreaNotification;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBoneShardsUI_C*                       BoneShardsUI;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBoss_HealthBar_C*                     Boss_HealthBar;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBoss_HealthBar_C*                     Boss_HealthBar_Second;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBottomRightNotification_C*            BottomRightNotification_475;                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_HUD;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHealth_C*                             Health;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HealthBeginning;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteractText_C*                       InteractText;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULootContainerLabel_C*                 LootContainerLabel_977;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResolve_C*                            Resolve;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_BossHealthBar;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Currency;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_QuickItems;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_ResolveBars;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_RunesContainer;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_SecondBossHealthBar;                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_SmallTutorial;                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Stats;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USecondChance_C*                       SecondChance;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallTutorial_C*                      SmallTutorial;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStamina_C*                            Stamina;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Ballistazooka_Crosshair_C*         UI_Ballistazooka_Crosshair;                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotificationQueueContainer_C*         UI_Notifications;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrow_Slot_C*                         UI_QuickItems;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneNotifyContainer_C*             UI_RuneNotifyContainer;                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Runes_StatusContainer_C*           UI_Runes_StatusContainer;                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StatusEffectContainer_C*           UI_StatusEffectContainer;                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABarbarous_C*                          OwningChar;                                        // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredResolve;                                    // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentlyInterpedResolve;                          // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBottomLeftAndAllThatShown_;                     // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Controller;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DontHideNotifications;                             // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Debug_Visibility;                                  // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                        Debug_Visibility_Array;                            // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_HUD_Size                     HUDScale_Current;                                  // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNewHUDLayout_C* GetDefaultObj();

	void HUD_FadeIn_NoNotify(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HUD_FadeOut_NoNotify(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideHUD(float Temp_float_Variable, float Temp_float_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetIsInCutscene_ReturnValue, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_HUD_Size Temp_byte_Variable, float K2Node_Select_Default);
	void HandleScale(enum class Enum_HUD_Size Size, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void Hide_Immediately();
	void ShowImmediately();
	void UpdateResolve(float CallFunc_GetWorldDeltaSeconds_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_FInterpTo_Constant_ReturnValue);
	void UpdateStamina(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_FMax_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void UpdateHealth(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void PlayFadeInAnim(bool NoHideNotifies);
	void PlayFadeOutAnim(bool NoHideNotifies);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void HideBottomLeftHealthAndAllThat();
	void ShowBottomLeftHealthAndAllThat();
	void OnInitialized();
	void OnHUDSizeChanged(enum class Enum_HUD_Size Size);
	void OnMaxResolveChanged();
	void ChangedShells_Event_0();
	void Construct();
	void OnNotEnoughResolve_Event_0();
	void OnIncompleteResolveSegmentDrained_Event_0(int32 Segment);
	void ExecuteUbergraph_NewHUDLayout(int32 EntryPoint, bool K2Node_CustomEvent_NoHideNotifies_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_NoHideNotifies, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, enum class Enum_HUD_Size K2Node_CustomEvent_Size, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_FTrunc_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_Segment);
};

}


