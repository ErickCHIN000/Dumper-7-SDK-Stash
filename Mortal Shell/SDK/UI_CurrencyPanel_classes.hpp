#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2B8 - 0x230)
// WidgetBlueprintGeneratedClass UI_CurrencyPanel.UI_CurrencyPanel_C
class UUI_CurrencyPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IncrementGlimpses;                                 // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnGlimplesPickedUp;                                // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_Current;                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_PickedUpAmount;                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_Current;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_PickedUpAmount;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        BSCurrentAmount;                                   // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BSPreAmount;                                       // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BSHideTimer;                                       // 0x288(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        BSCurrentBonus;                                    // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActualAmount;                                      // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DisplayedBonus;                                    // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DisplayedAmount;                                   // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GHideTimer;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Zero_Base_Ref;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous_Ref;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_CurrencyPanel_C* GetDefaultObj();

	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateCurrent();
	void HidePickedAmount();
	void Destruct();
	void Construct();
	void OnGameLoaded();
	void UpdateCurrentGlimpse();
	void OnGameLoadedGlimpse();
	void OnCurrentShellChanged();
	void OnGlimpseChanged();
	void ConstructGlimpse();
	void DestructGlimpse();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnBoneShardsChanged();
	void ExecuteUbergraph_UI_CurrencyPanel(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, bool CallFunc_StormModeIsActive_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_NotEqual_IntInt_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Abs_Int_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_Abs_Int_ReturnValue_2, int32 CallFunc_GetShellBondingPoints_Points, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_1, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable_6, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_2, int32 CallFunc_GetShellBondingPoints_Points_1, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_Variable_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, int32 K2Node_Select_Default_3, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_5);
};

}


