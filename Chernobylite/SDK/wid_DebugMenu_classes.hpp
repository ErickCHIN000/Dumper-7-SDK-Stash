#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_DebugMenu.wid_DebugMenu_C
class UWid_DebugMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_debug_EventSystem_C*              EventSystem;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableList_C*                 MainMenu;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MenuSelectior;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_debug_SaveMenu_C*                 SaveMenu;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DebugMenu_C* GetDefaultObj();

	void MenuBack();
	void Construct();
	void Up();
	void Down();
	void Left();
	void Right();
	void Accept();
	void Back();
	void ExecuteUbergraph_wid_DebugMenu(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCategoryName_Name, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_3, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue_3, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_4, bool K2Node_DynamicCast_bSuccess_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_4, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_5, bool K2Node_DynamicCast_bSuccess_5, class UWidget* CallFunc_GetActiveWidget_ReturnValue_5, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, int32 CallFunc_GetCurrentIndex_CurrentIndex, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


