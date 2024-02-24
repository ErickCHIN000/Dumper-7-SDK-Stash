#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B0 - 0x7A8)
// WidgetBlueprintGeneratedClass WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C
class UWBP_sw_EmptyGridEntry_C : public UWBP_sw_GridEntryItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_sw_EmptyGridEntry_C* GetDefaultObj();

	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_WBP_sw_EmptyGridEntry(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, enum class ECommonInputType K2Node_Event_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


