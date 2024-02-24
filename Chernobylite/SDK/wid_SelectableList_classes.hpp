#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x274 - 0x260)
// WidgetBlueprintGeneratedClass wid_SelectableList.wid_SelectableList_C
class UWid_SelectableList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          EntryContainer;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_SelectableList_C* GetDefaultObj();

	void ChangeText(int32 Index, class FText InText, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess);
	void Init(bool CallFunc_SelectEntry_Result);
	void GetCurrentIndex(int32* CurrentIndex);
	void MoveUp(bool CallFunc_SelectEntry_Result, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UnSelectEntry_Result, int32 CallFunc_Percent_IntInt_ReturnValue);
	void MoveDown(bool CallFunc_SelectEntry_Result, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UnSelectEntry_Result, int32 CallFunc_Percent_IntInt_ReturnValue);
	void ClearChildrean();
	void UnSelectEntry(int32 Index, bool* Result, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess);
	void SelectEntry(int32 Index, bool* Result, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess);
	bool RemoveEntryByIndex(int32 Index, bool CallFunc_RemoveChildAt_ReturnValue);
	bool RemoveEntry(class FText EntryToRemove, bool Found, int32 Index, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddEntry(class FText Entry, class UTextBlock* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void Construct();
	void ExecuteUbergraph_wid_SelectableList(int32 EntryPoint);
};

}


