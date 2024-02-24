#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F0 (0x668 - 0x278)
// WidgetBlueprintGeneratedClass UMG_Stamina.UMG_Stamina_C
class UUMG_Stamina_C : public UStaminaBarBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PopinStamina;                                      // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StaminaDepleted;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutStamina;                                    // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProgressBar_C*                    AnimatedStaminaBar;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Border;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_1;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StaminaBarOverlay;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          StaminaBox;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StaminaBoxBorder;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StaminaDepletedBorder;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StaminaDepletedText;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          StaminaFoodLineCanvas;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StaminaIcon;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              StaminaSizeBox;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               StaminaSpacerAnchor;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                StaminaLinePositions;                              // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         StaminaFull;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LowStamina;                                        // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProgressBarStyle                     NormalStaminaBarStyle;                             // 0x318(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                     WarningStaminaBarStyle;                            // 0x4B8(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         NoStamina;                                         // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     StaminaColourCurve;                                // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Stamina_C* GetDefaultObj();

	void NoStaminaWarning(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetStamina_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void LowStaminaWarning(float CallFunc_GetStamina_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void HideStaminaBar(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float CallFunc_GetStamina_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnPaint(struct FPaintContext& Context);
	float GetStamina(class APawn* NewLocalVar_0, class UCharacterState* CharacterState, int32 CallFunc_GetMaxStamina_ReturnValue, int32 CallFunc_GetStamina_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UCharacterState* Temp_wildcard_Variable, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UActorState* CallFunc_GetAIActorState_ReturnValue, class UCharacterState* K2Node_DynamicCast_AsCharacter_State, bool K2Node_DynamicCast_bSuccess_1, class UCharacterState* CallFunc_GetComponentByClass_ReturnValue);
	void UpdateStaminaBar();
	void UpdateStaminaLines();
	void UpdateStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, enum class EStaminaBracket CurrentBracket, enum class EStaminaBracket LastBracket);
	void ResetStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, enum class EStaminaBracket CurrentBracket);
	void ExecuteUbergraph_UMG_Stamina(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FPlayerStartingStats& CallFunc_GetCharacterStartingStatsStruct_CharacterStartingStats, enum class EValid CallFunc_GetCharacterStartingStatsStruct_Paths, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_1, float CallFunc_GetStamina_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class UModifierStateComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_CurrentStamina_1, float K2Node_Event_MaxStamina_1, float K2Node_Event_StaminaPct_1, enum class EStaminaBracket K2Node_Event_CurrentBracket_1, enum class EStaminaBracket K2Node_Event_LastBracket, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UModifierStateComponent* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle_ReturnValue, bool CallFunc_EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle_ReturnValue_1, bool CallFunc_EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle_ReturnValue_2, bool CallFunc_EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle_ReturnValue_3, bool CallFunc_EqualEqual_FModifierStatesRowHandleFModifierStatesRowHandle_ReturnValue_4, const struct FModifierStateData& CallFunc_GetModifierStatesStruct_ModifierStates, enum class EValid CallFunc_GetModifierStatesStruct_Paths, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, float K2Node_Event_CurrentStamina, float K2Node_Event_MaxStamina, float K2Node_Event_StaminaPct, enum class EStaminaBracket K2Node_Event_CurrentBracket, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, const struct FStatsEnum& Temp_struct_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FStatsEnum& Temp_struct_Variable_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
};

}


