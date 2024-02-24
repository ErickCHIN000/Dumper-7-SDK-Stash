#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x2D1 - 0x230)
// WidgetBlueprintGeneratedClass UI_Equipment_TopNav.UI_Equipment_TopNav_C
class UUI_Equipment_TopNav_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_Compendium;                               // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_Inventory;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_Runes;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_RunicFamiliarity;                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_Shells;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_RunesTab_BG;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Compendium;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Inventory;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Runes;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_RunicFamiliarity;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Shells;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Left;                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Right;                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTopNavButtonPressed;                             // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTopNavButtonHovered;                             // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTopNavButtonUnhovered;                           // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsStormMode;                                       // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Equipment_TopNav_C* GetDefaultObj();

	void GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, bool Temp_bool_Variable, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array_1, TArray<class UUI_MainMenu_Button_C*>& K2Node_Select_Default);
	void UpdateTopNav(int32 Index, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, TArray<class UCheckBox*>& K2Node_MakeArray_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, TArray<class UCheckBox*>& K2Node_MakeArray_Array_1, TArray<class UCheckBox*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UCheckBox* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__UI_Button_Compendium_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Compendium_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Compendium_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void UpdateTabs(bool Condition);
	void BndEvt__UI_Button_Runes_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Runes_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Runes_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_RunicFamiliarity_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_RunicFamiliarity_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_RunicFamiliarity_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void ExecuteUbergraph_UI_Equipment_TopNav(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, bool K2Node_CustomEvent_Condition, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget);
	void OnTopNavButtonUnhovered__DelegateSignature();
	void OnTopNavButtonHovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void OnTopNavButtonPressed__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
};

}


