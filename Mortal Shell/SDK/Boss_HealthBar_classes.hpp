#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC6 (0x2F6 - 0x230)
// WidgetBlueprintGeneratedClass Boss_HealthBar.Boss_HealthBar_C
class UBoss_HealthBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HitShake;                                          // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeBarOut;                                        // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeBarIn;                                         // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInBossName;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeBossName;                                      // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            BossNameText;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_HealthBar;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGhostTrail_C*                         GhostTrail;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Health;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Damage;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGameplayPC_C*                         ControllerReference;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DragWindowOffset;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  HealthbarVisible;                                  // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealthbarTimeOnScreen;                             // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthbarTimeOut;                                  // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade;                                              // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UI_Stamina;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UI_HP;                                             // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BossHPBarColor;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousHealthPercent;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarTargetOpacity;                                  // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarCurrentOpacity;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageValue;                                       // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageOpacity_Target;                              // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DamageTimer;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DamageOpacity;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayDamageNumbers;                             // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSecondBossBar;                                   // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBoss_HealthBar_C* GetDefaultObj();

	void GetCurrentBoss_2(class AEnemyCharacter_C** CurrentBoss, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentBoss_1(class AEnemyCharacter_C** CurrentBoss, bool CallFunc_IsValid_ReturnValue);
	void UpdateDamageNumbersState(bool Show);
	void GetDamageNumbers(bool* Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show);
	void ResetTextDamage();
	void SetTextDamageOpacity(float DeltaTime, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void SetBarOpacity(float DeltaTime, float CallFunc_FInterpTo_ReturnValue);
	void AddGhostTrailWhenNeeded(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void GetHealthBarPosAtPercent(float HealthBarPercent, struct FVector2D* HealthBarPos, float LocHealthBarPercent, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void AddGhostTrail(float PreviousPercent, float NewPercent, class UCanvasPanelSlot* LocGhostPanelCanvasSlot, float LocNewPercent, float LocPreviousPercent, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos_1, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_HealthBarPos_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateHighlightPosition(class UCanvasPanelSlot* LocGradientSlot, class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	class FText GetBossName(class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetName_Name, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, class FText CallFunc_GetName_Name_1, bool CallFunc_IsValid_ReturnValue_2);
	void Set_UI_HP(class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	float Get_StaminaFixed_Percent(class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Set_UI_Stamina(float CallFunc_Get_Stamina_Percent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	float Get_Stamina_Percent(class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	struct FLinearColor Get_StaminaBar_FillColorAndOpacity();
	struct FLinearColor Get_Health_FillColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue);
	class FText Get_HealthBar_Text(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	float Get_HealthBar_Percent();
	class FText Get_Name_Text(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FadeNameOnDeath();
	void PlayBossNameFadeInAnim();
	void FadeHPBarIn();
	void FadeHPBarOut();
	void Construct();
	void OnAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DamageText_Update(float Damage);
	void DamageText_Remove();
	void OnInitialized();
	void OnDamageNumbersChanged(bool Show);
	void ExecuteUbergraph_Boss_HealthBar(int32 EntryPoint, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_GetDamageNumbers_Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Show, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_1_CurrentBoss_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Divide_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AEnemyCharacter_C* CallFunc_GetCurrentBoss_2_CurrentBoss_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


