#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatList.UMG_StatList_C
class UUMG_StatList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Stats;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_StatList_C* GetDefaultObj();

	void AddElement(class UUserWidget* UserWidget);
	void Update();
	void ExecuteUbergraph_UMG_StatList(int32 EntryPoint, TArray<class UUMG_StatTitle_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUMG_StatTitle_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


