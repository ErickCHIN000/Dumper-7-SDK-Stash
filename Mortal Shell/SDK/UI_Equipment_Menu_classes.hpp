#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x289 - 0x230)
// WidgetBlueprintGeneratedClass UI_Equipment_Menu.UI_Equipment_Menu_C
class UUI_Equipment_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_CompendiumTab_C*         UI_Equipment_CompendiumTab;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_InventoryTab_C*          UI_Equipment_InventoryTab;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_RunesTab_C*              UI_Equipment_RunesTab;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RunicFamiliarity_C*                UI_Equipment_RunicFamiliarity;                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_ShellsTab_C*             UI_Equipment_ShellsTab;                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_TopNav_C*                UI_Equipment_TopNav;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Equipment;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_Tab;                                         // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConsumeInput;                                      // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_137C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPC;                                        // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStormMode;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Equipment_Menu_C* GetDefaultObj();

	void OpenRunicFamiliarityTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OpenCompendiumTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OpenInstinctsTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OpenShellsTab(bool IsSwitchingTab, bool Local_IsSwitchingTab);
	void OpenInventoryTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleStormMode(bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue);
	void GetCurrentKeyboardMode(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	void ResetMousePosition(bool KeyboardMode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void NavUpperLeftListen(FDelegateProperty_ Event);
	void NavUpperRightListen(FDelegateProperty_ Event);
	void UI_Sound_Hover();
	void Nav_Top_Click(int32 Index, class UUI_MainMenu_Button_C* Widget, int32 Local_IndexSelected, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void NavTopUnHover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavTopHover(int32 Index, class UUI_MainMenu_Button_C* Widget, class UUI_MainMenu_Button_C* Local_Widget, class UUI_MainMenu_Button_C* Local_WidgetSelected, int32 Local_IndexSelected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavUpper_Left(int32 Local_Index_Temp, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void NavUpper_Right(int32 Local_Index_Temp, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void UI_Sound_ChangeTab(bool PlaySound);
	void EquipmentMenu_UpdateTab(int32 Index, bool IsSwitchingTab, bool Local_IsSwitchingTab, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1);
	void OnOpenEvent();
	void NavUpperLeft();
	void NavUpperRight();
	void BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonUnhovered__DelegateSignature();
	void BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void Construct();
	void OnInitialized();
	void OnKeyboardModeChanged_Set(bool KeyboardMode);
	void OnKeyboardModeChanged_Bind();
	void Destruct();
	void ExecuteUbergraph_UI_Equipment_Menu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
};

}


