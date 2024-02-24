#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_Map_PointerMap_Desc.wid_pda_Map_PointerMap_Desc_C
class UWid_pda_Map_PointerMap_Desc_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_TasksPanel_C*                     Wid_TasksPanel;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_pda_Map_PointerMap_Desc_C* GetDefaultObj();

	void SetDesc(class FText Text, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_pda_Map_PointerMap_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


