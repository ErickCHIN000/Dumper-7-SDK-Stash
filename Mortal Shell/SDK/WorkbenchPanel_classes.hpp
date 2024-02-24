#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x618 (0x848 - 0x230)
// WidgetBlueprintGeneratedClass WorkbenchPanel.WorkbenchPanel_C
class UWorkbenchPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Background;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Filter;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_WorkbenchItems;                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_ControllerButton_Upgrade;                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchMenu_TopNav_C*            UI_WorkbenchMenu_TopNav;                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_Balistazooka;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_HallowedSword_Super_0;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_HallowedSword_Super_1;                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_HammerAndChisel_Super_0;                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_HammerAndChisel_Super_1;                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_MartyrBlade_Super_0;                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_MartyrBlade_Super_1;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_QuenchidAcid_0;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_QuenchidAcid_1;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_QuenchidAcid_2;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_QuenchidAcid_3;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_SmolderingMace_Super_0;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_SmolderingMace_Super_1;                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_TarnishedSealUpgrade_1;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      WB_TarnishedSealUpgrade_2;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWorkbenchItem_C*>              UpgradeItems;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBuySelected;                                    // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWorkbenchItem_C*>              NotYetUnlockedUpgradeItems;                        // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         bIsPopupDisplayed;                                 // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClosed;                                          // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHasBalistazookaUpgrade;                           // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bHasSuperUpgrades;                                 // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1FE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUsable_Workbench_C*                   Workbench;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorkbenchItem_C*                      UI_UpgradeObtained;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x340(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x5B8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  WorkBenchName;                                     // 0x830(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWorkbenchPanel_C* GetDefaultObj();

	void UpdateName(class FText Name);
	void UpdateCanBuy(class UWorkbenchItem_C* Widget, bool CallFunc_HasItemToUnlock_bHasIt, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	int32 GetIndex(int32 Delta, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void SetWaitingForTutorial(bool IsWaitingForTutorialScreen, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous);
	void ResolveAcquisitionNotify(class FText CallFunc_MakeLiteralText_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void SealHealImprovedNotify(class FText CallFunc_MakeLiteralText_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void QuenchidAcidNotify(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CreateUpgradeItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWorkbenchItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWorkbenchItem_C*>& K2Node_MakeArray_Array);
	void OnOpen();
	void UpdateAvailableUpgrades(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void Navigation_Set(bool Hovering, bool CustomIndex, int32 Index, int32 Delta, int32 Local_Index, class UWorkbenchItem_C* Local_Button, int32 Local_Delta, int32 Local_UserIndex, bool Local_CustomIndex, bool Local_Hovering, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWorkbenchItem_C* CallFunc_Array_Get_Item, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UWorkbenchItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_GetIndex_ReturnValue);
	void ReInitializeItems(int32 Local_Count, class UWorkbenchItem_C* Local_WorkbenchItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsNotCurrentWeapon_ReturnValue, bool CallFunc_IsUnlocked_bUnlocked, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UWorkbenchItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavClose_Listen(FDelegateProperty_ Callback);
	void NavDown_Listen(FDelegateProperty_ Callback);
	void NavUp_Listen(FDelegateProperty_ Callback);
	void OnClose(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void HasAnyLockedUpgrade(bool* bHasAny, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWorkbenchItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsNotCurrentWeapon_ReturnValue, bool CallFunc_IsUnlocked_bUnlocked, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Open();
	void Construct();
	void OnItemClicked(class UWidget* Widget);
	void OnItemHovered(class UWorkbenchItem_C* Widget, int32 Index);
	void NavUp_Set();
	void NavDown_Set();
	void NavClose_Set();
	void NavConfirm_Set();
	void CloseAfterUpgrade();
	void BndEvt__UI_ControllerButtonCloseHint_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void FillResolveAfterUpgrade();
	void ManualConstruct();
	void NavUp_Bind();
	void NavDown_Bind();
	void NavClose_Bind();
	void NavConfirm_Bind();
	void OnItemPressed();
	void OnItemReleased();
	void OnKeyboardModeChanged_Set(bool KeyboardMode);
	void OnKeyboardModeChanged_Bind();
	void ExecuteUbergraph_WorkbenchPanel(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* K2Node_CustomEvent_Widget_1, class UWorkbenchItem_C* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_Index, class UWorkbenchItem_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ULargeTutorial_C* CallFunc_Create_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2, class FName CallFunc_GetUpgradeID_UpgradeID, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetUpgradeID_UpgradeID_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_KeyboardMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void OnClosed__DelegateSignature();
};

}


