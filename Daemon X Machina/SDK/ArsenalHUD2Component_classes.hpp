#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x42C - 0x418)
// BlueprintGeneratedClass ArsenalHUD2Component.ArsenalHUD2Component_C
class UArsenalHUD2Component_C : public UTTLArsenalHUD2Component
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(Transient, DuplicateTransient)
	int32                                        HitAnimationPhase;                                 // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceChangeWarning;                                // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverlapAnimationPhase;                             // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalHUD2Component_C* GetDefaultObj();

	void UpdateOuterOtherInstrumentsHUD(class UUserWidget* UI, class AActor* OwnerActor, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_01, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SetVisibilityOuterHUDBPMain(bool Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess1);
	void PlayAnimationOuterHUDBPMain(bool IsIn, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable2, enum class EUMGSequencePlayMode Temp_byte_Variable3, bool Temp_bool_Variable1, enum class EUMGSequencePlayMode K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess);
	void PlayAnimationArsenalHUDBPMain(bool IsIn, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class EUMGSequencePlayMode Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable3, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, enum class EUMGSequencePlayMode K2Node_Select1_Default, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess);
	void InitSight(class UUserWidget* UI, enum class ETTLLockonSightType SightType, const struct FVector2D& Size, bool IsVisibleCrosshairExtend, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ETTLLockonSightType Temp_byte_Variable2, class FName Temp_name_Variable, class FName Temp_name_Variable1, enum class ETTLLockonSightType Temp_byte_Variable3, class FName K2Node_Select_Default, class FName CallFunc_MakeLiteralName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, float CallFunc_GetSystemSettingFloatValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, enum class ETTLLockonSightType Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default);
	void PlayAttackAnimation(class UMsn_hud_sight00_C* UI);
	void UpdateArsenalOtherInstrumentsHUD(class UMsn_hud_top00_C* UI, class ABaseCharacter_C* BaseCharacter, float G, float LockonTargetAngleDegree, bool IsEnabledLockonTarget, bool IsAttackHit, float PitchDegree, float RollDegree, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, class AActor* CallFunc_IsHitCrossHair_outTargetActor, const struct FVector& CallFunc_IsHitCrossHair_outHitLocation, bool CallFunc_IsHitCrossHair_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default);
	void ChangeModeBPMain(bool IsArsenalMode);
	void OnAttack();
	void OnMissionTimerChanged_0(float CurrentTimer, bool IsVisibleHUD);
	void UpdatePlayerHUDBP(float DeltaSeconds);
	void PlayAnimationOutArsenalHUDBP();
	void PlayAnimationInOuterHUDBP();
	void PlayAnimationOutOuterHUDBP();
	void PlayAnimationInArsenalHUDBP();
	void ChangeModeBP(bool IsArsenalMode, bool IsFirst);
	void SetVisibilityOuterHUDBP(bool NewVisibility);
	void PlayAnimationOuterAttackBP();
	void PlayAnimationOuterHitBP();
	void TTLBeginPlay();
	void PlayAnimationInMissionProgressHUDBP();
	void PlayAnimationOutMissionProgressHUDBP();
	void PlayAnimationSubGoalMissionProgressHUDBP(int32 Index);
	void PlayAnimationShowSupportWeaponHUDBP();
	void SwitchCoolingAnimation(bool IsOn, class UUserWidget* Widget);
	void PlayAnimationWhenArsenalGotRebooting(class UUserWidget* Widget);
	void StopAnimationWhenArsenalGotRebooting(class UUserWidget* Widget);
	void ExecuteUbergraph_ArsenalHUD2Component(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsPlayableOgreCharacter_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsPlayableOgreCharacter_ReturnValue1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess3, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_NeedsFemtoGaugeUpdate_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess5, float K2Node_CustomEvent_CurrentTimer, bool K2Node_CustomEvent_IsVisibleHUD, float K2Node_Event_DeltaSeconds, bool K2Node_Event_isArsenalMode, bool K2Node_Event_isFirst, bool K2Node_Event_newVisibility, bool CallFunc_IsValid_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess6, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_001, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsArsenalMode_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsArsenalMode_ReturnValue1, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_002, bool K2Node_DynamicCast_bSuccess8, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_003, bool K2Node_DynamicCast_bSuccess9, int32 K2Node_Event_index, bool K2Node_SwitchInteger_CmpSuccess, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_004, bool K2Node_DynamicCast_bSuccess10, bool K2Node_Event_isOn, class UUserWidget* K2Node_Event_widget2, class UMsn_hud_gauge01_C* K2Node_DynamicCast_AsMsn_Hud_Gauge_01, bool K2Node_DynamicCast_bSuccess11, class UUserWidget* K2Node_Event_widget1, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_01, bool K2Node_DynamicCast_bSuccess12, class UUserWidget* K2Node_Event_Widget, class UMsn_hud_top01_C* K2Node_DynamicCast_AsMsn_Hud_Top_011, bool K2Node_DynamicCast_bSuccess13, bool CallFunc_IsAnimationPlaying_ReturnValue1, bool CallFunc_IsAnimationPlaying_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue3, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character2, bool K2Node_DynamicCast_bSuccess14, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main, bool K2Node_DynamicCast_bSuccess15, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character2, bool K2Node_DynamicCast_bSuccess16, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityAll_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_005, bool K2Node_DynamicCast_bSuccess17, class AActor* CallFunc_GetOwner_ReturnValue4, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character1, bool K2Node_DynamicCast_bSuccess18, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main1, bool K2Node_DynamicCast_bSuccess19, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main2, bool K2Node_DynamicCast_bSuccess20, class AActor* CallFunc_GetOwner_ReturnValue5, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue6, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue7, bool CallFunc_IsPlayableOgreCharacter_ReturnValue2, class UTTLHUDMissionMain* K2Node_DynamicCast_AsTTLHUDMission_Main3, bool K2Node_DynamicCast_bSuccess21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


