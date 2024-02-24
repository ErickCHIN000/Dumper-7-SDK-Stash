#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x388 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormModeUpgradesPanel.UI_StormModeUpgradesPanel_C
class UUI_StormModeUpgradesPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Widget_FadeIn;                                // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Close;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Navigate;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Obtain;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_NextPage;                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_PreviousPage;                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_StormModeUpgrades;                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Arrow_Left;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Arrow_Right;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_BG;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Effect_Glow;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Page_1;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Page_2;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_NextPage;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Obtain;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_PreviousPage;                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CurrencyPanel_C*                   UI_CurrencyPanel;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Left;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Right;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry_1;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry_2;                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry_3;                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry_4;                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          UI_StormModeUpgrade_Entry_5;                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Upgrades_Page_1;                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Upgrades_Page_2;                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Upgrades;                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_StormModeUpgrade_Entry_C*>  Buttons_Page_1;                                    // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_StormModeUpgrade_Entry_C*>  Buttons_Page_2;                                    // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Index_UpDown;                                      // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Page;                                        // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumPages;                                          // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConsumeInput;                                      // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1463[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StormModeUpgradesStation_C*        BP_Actor;                                          // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClosing;                                         // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1469[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AllUpgradeIDs;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUI_StormModeUpgrade_Entry_C*          SelectedUpgrade;                                   // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormModeUpgradesPanel_C* GetDefaultObj();

	enum class ESlateVisibility Get_Overlay_Arrow_Right_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_Overlay_Arrow_Left_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshPage(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormModeUpgrade_Entry_C*>& CallFunc_GetCurrentButtons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_StormModeUpgrade_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_StormMode_PermanentUpgrade& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void NavConfirmListen(FDelegateProperty_ Pressed);
	void NavigationTab(bool SkipSound, bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_MainMenu_Button_C* Widget, int32 Index, bool Local_SkipSound, int32 Local_IndexSelected, class UUI_MainMenu_Button_C* Local_SelectedWidget, int32 Local_Delta, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array_1, int32 CallFunc_NavigationGetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_5);
	TArray<class UUI_StormModeUpgrade_Entry_C*> GetCurrentButtons(int32 Temp_int_Variable, TArray<class UUI_StormModeUpgrade_Entry_C*>& K2Node_Select_Default);
	int32 NavigationGetIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavigationUpDown(bool SkipSound, bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_StormModeUpgrade_Entry_C* Widget, int32 Index, bool Local_SkipSound, int32 Local_IndexSelected, class UUI_StormModeUpgrade_Entry_C* Local_SelectedWidget, int32 Local_Delta, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UUI_StormModeUpgrade_Entry_C*>& CallFunc_GetCurrentButtons_ReturnValue, class UUI_StormModeUpgrade_Entry_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TArray<class UUI_StormModeUpgrade_Entry_C*>& CallFunc_GetCurrentButtons_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_StormModeUpgrade_Entry_C*>& CallFunc_GetCurrentButtons_ReturnValue_2, int32 CallFunc_NavigationGetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_StormModeUpgrade_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_5);
	void OnOpen(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnClose(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void NavCloseListen(FDelegateProperty_ Pressed);
	void NavTabNext(FDelegateProperty_ Pressed);
	void NavTabPrevious(FDelegateProperty_ Pressed);
	void NavDownListen(FDelegateProperty_ Pressed);
	void NavUpListen(FDelegateProperty_ Pressed);
	void CreatePages(int32 Local_IndexPage, const struct FStruct_StormMode_PermanentUpgrade& Local_Row, class UUI_StormModeUpgrade_Entry_C* Local_Widget, int32 Local_Index, class FName Local_Name, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FStruct_StormMode_PermanentUpgrade& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_StormModeUpgrade_Entry_C* CallFunc_Create_ReturnValue, class FName CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames);
	void PreConstruct(bool IsDesignTime);
	void OnOpenEvent();
	void OnCloseEvent();
	void NavTabPrevious_ListenEvent();
	void NavTabPrevious_Set();
	void OnButtonHovered(class UUI_StormModeUpgrade_Entry_C* Widget);
	void NavTabNext_Set();
	void NavTabNext_ListenEvent();
	void NavUp_ListenEvent();
	void NavUp_Set();
	void NavDown_ListenEvent();
	void NavDown_Set();
	void OnClose_Set();
	void OnClose_Bind();
	void Destruct();
	void NavConfirm_Set();
	void NavConfirm_Bind();
	void ExecuteUbergraph_UI_StormModeUpgradesPanel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CanBuy__ReturnValue, bool CallFunc_ReachedMaxRank__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_IsDesignTime, class UUI_StormModeUpgrade_Entry_C* K2Node_CustomEvent_Widget, bool CallFunc_Not_PreBool_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Multiply_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName CallFunc_MakeLiteralName_ReturnValue_1, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


