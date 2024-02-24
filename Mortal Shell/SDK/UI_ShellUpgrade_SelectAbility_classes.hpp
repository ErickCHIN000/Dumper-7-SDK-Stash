#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x2D0 - 0x230)
// WidgetBlueprintGeneratedClass UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C
class UUI_ShellUpgrade_SelectAbility_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Cancel;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Confirm;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Navigate;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_ScrollBox;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Abilities;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SelectShellText;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Cancel;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Confirm;                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShellUpgrade_AbilityRow_C*         UI_ShellUpgrade_AbilityRow;                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          RowNames;                                          // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UDataTable*                            DataTable;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_ShellUpgrade_AbilityRow_C*> AbilityWidgets;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Temp;                                        // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Shell;                                             // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_HadernSkills                 HadernSlot;                                        // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C2E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellUpgradeMenu_C*                UI_ShellUpgradeMenu;                               // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ShellUpgrade_SelectAbility_C* GetDefaultObj();

	void UnlockHadernAchievement(bool Local_UnlockAchievement, const TArray<class FName>& Local_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ShouldResetSuperStoneForm(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldResetRiposteStacks(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldResetParryStacks(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetAbilityCost(int32 Glimpse, int32 Tar, int32* Glimpse_Out, int32* Tar_Out, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1);
	void RemoveGlimpses(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void RemoveTar(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void AbilityCantBuy(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item);
	void AbilityAlreadySelected(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item);
	void UpdateHadernAbilityDescription(class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item);
	void UpdateHadernAbility(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item);
	void SetTitleText(enum class EArmorTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default);
	void CreateAbilities(enum class Enum_HadernSkills HadernSlot, enum class EArmorTypes Shell, TArray<class FName>& Upgrades, class FName Local_UpgradeName, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Create_ReturnValue, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_GetAbilityCost_Glimpse_Out, int32 CallFunc_GetAbilityCost_Tar_Out, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	int32 GetNavIndex(int32 SelectedIndex, int32 Delta, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavSelectAbilityRow(bool SkipSound, bool UseWidget, bool Hovering, bool CustomIndex, class UUI_ShellUpgrade_AbilityRow_C* Button, int32 Index, int32 Delta, bool Local_SkipSound, int32 Local_Delta, int32 Local_Index_Selected, bool Local_CustomIndex, bool Local_Hovering, bool Local_UseWidget, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNavIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Find_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4);
	void SetDataTable(enum class EArmorTypes Shell, enum class EArmorTypes Temp_byte_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* K2Node_Select_Default);
	void OnOpen(enum class Enum_HadernSkills HadernSlot, enum class EArmorTypes Shell, TArray<class FName>& Upgrades);
	void Nav_Up();
	void Nav_Down();
	void NavSelect();
	void OnRowHovered(class UUI_ShellUpgrade_AbilityRow_C* Widget);
	void OnRowClicked(class UUI_ShellUpgrade_AbilityRow_C* Widget);
	void BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void NavSelect_Reset();
	void ExecuteUbergraph_UI_ShellUpgrade_SelectAbility(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, enum class Enum_HadernSkills K2Node_CustomEvent_HadernSlot, enum class EArmorTypes K2Node_CustomEvent_Shell, TArray<class FName>& K2Node_CustomEvent_Upgrades, bool CallFunc_IsValid_ReturnValue_1, class UUI_ShellUpgrade_AbilityRow_C* K2Node_CustomEvent_Widget_1, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item_1, class UUI_ShellUpgrade_AbilityRow_C* K2Node_CustomEvent_Widget, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
};

}


