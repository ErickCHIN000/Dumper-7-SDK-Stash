#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2F4 - 0x2E8)
// WidgetBlueprintGeneratedClass GridRadioSelect.GridRadioSelect_C
class UGridRadioSelect_C : public URadioSelect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ColumnCount;                                       // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGridRadioSelect_C* GetDefaultObj();

	void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
	void ExecuteUbergraph_GridRadioSelect(int32 EntryPoint, class URadioButton* K2Node_Event_Button, class UPanelSlot* K2Node_Event_NewSlot, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess, class UGridPanel* K2Node_DynamicCast_AsGrid_Panel, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
};

}


