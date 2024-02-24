#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x281 - 0x260)
// WidgetBlueprintGeneratedClass wid_Demo_Menu_01.wid_Demo_Menu_01_C
class UWid_Demo_Menu_01_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          MapsToShow;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSt_Demo_Menu_entry>           Maps;                                              // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActivated;                                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Demo_Menu_01_C* GetDefaultObj();

	void Activate(bool Show);
	void OpenMap(int32 Index, const struct FSt_Demo_Menu_entry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Construct();
	void ExecuteUbergraph_wid_Demo_Menu_01(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_Demo_Menu_entry_01_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_Demo_Menu_entry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}


