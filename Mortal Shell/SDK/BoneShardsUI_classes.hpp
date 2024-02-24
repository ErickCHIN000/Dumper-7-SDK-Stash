#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2A4 - 0x230)
// WidgetBlueprintGeneratedClass BoneShardsUI.BoneShardsUI_C
class UBoneShardsUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Glimpses_Increment;                           // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Glimpses_PickedUp;                            // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_Current;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_PickedUp;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_Shadow;                              // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_Current;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_PickedUp;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_Shadow;                                   // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        BSCurrentAmount;                                   // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BSPreAmount;                                       // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BSHideTimer;                                       // 0x280(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        BSCurrentBonus;                                    // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActualAmount;                                      // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DisplayedBonus;                                    // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DisplayedAmount;                                   // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GHideTimer;                                        // 0x298(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Glimpses;                                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBoneShardsUI_C* GetDefaultObj();

	void PlayGlimpsesAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	class FText Get_Text_Glimpses_Shadow_Text_0(class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Text_Tar_Shadow_Text_0(class FText CallFunc_Conv_IntToText_ReturnValue);
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
	void InitCurrency();
	void ExecuteUbergraph_BoneShardsUI(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, class FText CallFunc_Conv_IntToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_2, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FText CallFunc_Conv_IntToText_ReturnValue_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, bool Temp_bool_Variable_3, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Abs_Int_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_3, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, int32 K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_Abs_Int_ReturnValue_2, int32 CallFunc_GetShellBondingPoints_Points, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_1, int32 CallFunc_GetShellBondingPoints_Points_1, class FText CallFunc_Conv_IntToText_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_4, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_5);
};

}


