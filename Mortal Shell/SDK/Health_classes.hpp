#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x31C - 0x230)
// WidgetBlueprintGeneratedClass Health.Health_C
class UHealth_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHealRiposte;                                     // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHarden_Ready;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StoneFormTriggerWhenOnCD;                          // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHarden_Disabled;                                 // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHarden_Enabled;                                  // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Frame;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FrameCap;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_HealRiposte_Peripheral;                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_HealRiposte_Stains;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Health_Shadow;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Highlight;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ready_Sheen;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Underglow;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Emboss;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Health;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_StoneForm;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ready_emboss_peripheral;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Underglow;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGhostTrail_C*                         UI_HealtBar_GhostTrail;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        PreviewPercent;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3064[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          OwningChar;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStoneFormOnCD;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              HealthBarMat;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredStoneFormEffect;                            // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentStoneFormEffect;                            // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinHPBarSize;                                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHPBarSize;                                      // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviewHealth;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_307E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           HealthScaleCurve;                                  // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTrueDeath;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3083[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health_Old;                                        // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health_New;                                        // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHealth_C* GetDefaultObj();

	void PlayHardenRecharge(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ScaleBarElementBasedOnHealth(class UObject* Object, class UCanvasPanelSlot* Target, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FInterpTo_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateHealRiposte(class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void PlayHealRiposteAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetHealthCapPos(class UCanvasPanelSlot* LocFrameCapSlot, class UCanvasPanelSlot* LocHealthBarFrameSlot, const struct FVector2D& CallFunc_GetPosition_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void ScaleBarElementBasedOnMaxHealth(class UObject* Object, float Value, float Offset, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFloatValue_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetMaxHealth(float InMaxHealth, float Local_CurrentHealth, float LocMaxHealth, float CallFunc_MapRangeClamped_ReturnValue);
	void AddGhostTrailWithHealthValues(float PreviousHealth, float NewHealth, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1);
	struct FVector2D GetHealthBarSizeAtPercent(float Percent, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue);
	void GetHealthBarPosAtPercent(float AtPercent, struct FVector2D* EndPos, float LocHealthBarPercent, class UCanvasPanelSlot* LocHealthBarSlot, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void AddGhostTrail(float PreviousHealthPercent, float NewHealthPercent, float LocPreviousPercent, class UCanvasPanelSlot* LocGhostPanelCanvasSlot, float LocNewPercent, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos_1, const struct FVector2D& CallFunc_GetHealthBarPosAtPercent_EndPos_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void CreateAndAssignHealthBarMat(const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UpdateStoneFormRecharge(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateHighlightPosition(class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocHealthBarSlot, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnCharacterEnteredStoneForm_Event_0();
	void OnCharacterLeftStoneForm_Event_0();
	void OnStoneFormOnCooldown_Event_0();
	void OnStoneformRecharged();
	void OnPlayerHealthChanged_Event_0(float PreviousHealth, float NewHealth);
	void SetPercent(float NewPercent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnTrueDeath();
	void Construct();
	void OnStoneFormReady_Set();
	void OnStoneFormReady_Bind();
	void OnPoisonBuffChange(bool bStart);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Health(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float K2Node_CustomEvent_PreviousHealth, float K2Node_CustomEvent_NewHealth, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewPercent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_bStart, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormModeIsActive_ReturnValue, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


