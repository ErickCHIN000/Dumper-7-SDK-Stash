#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x26C - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C
class UUI_StormMode_Menu_Warning_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_StormMode_Menu_SmallButton_C*      UI_StormMode_Menu_Cancel;                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SmallButton_C*      UI_StormMode_Menu_Confirm;                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnConfirmSelected;                                 // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCancelSelected;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_Warning_C* GetDefaultObj();

	void GetSelectedCharacter(enum class EArmorTypes* Character);
	void GetVerticalIndex(int32* Index);
	void Sound_OnHovered();
	void Close();
	void Nav_Confirm(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput_1, bool K2Node_SwitchInteger_CmpSuccess);
	void Nav_LeftRight(bool CheckIndex, bool Custom, int32 Index, int32 Local_CustomIndex, bool Local_CheckIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_2, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_3, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_4, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_5, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_6, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_7);
	void OnCharacterHighlighted(enum class EArmorTypes Character);
	void OnWeaponHighlighted(enum class EComboTypes Weapon);
	void NavUp();
	void NavDown();
	void OnClose();
	void SetParentWidget(class UWidget* Widget);
	void SetSeedManager(class ABP_SeedManager_C* SeedManager);
	void OnCharacterSelected(enum class EArmorTypes Character);
	void OnSettingConfirmed(int32 Value);
	void OnWeaponSelected(enum class EComboTypes Weapon);
	void SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState);
	void OnRiposteHighlighted(enum class ERiposteTypes Riposte);
	void OnRiposteSelected(enum class ERiposteTypes Riposte);
	void OnButtonHovered(class UUserWidget* Widget);
	void NavSpecialButton();
	void NavBack();
	void NavConfirm();
	void NavRight();
	void NavLeft();
	void OnOpen();
	void BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(int32 Index);
	void BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(int32 Index);
	void BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UI_StormMode_Menu_Warning(int32 EntryPoint, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class UWidget* K2Node_Event_Widget_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index);
	void OnCancelSelected__DelegateSignature();
	void OnConfirmSelected__DelegateSignature();
};

}


