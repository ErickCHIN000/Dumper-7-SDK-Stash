#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x440 (0x6A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox.UMG_BioLab_StatBox_C
class UUMG_BioLab_StatBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          StatContents;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             Base_Item;                                         // 0x270(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemData                             Comparison_Item;                                   // 0x460(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FStatsRowHandle, class UUMG_BioLab_StatBox_Row_C*> Stats;                                             // 0x650(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_BioLab_StatBox_C* GetDefaultObj();

	void SetBaseItem(const struct FItemData& BaseItem);
	void SetComparisonItem(const struct FItemData& ComparisonItem);
	void ClearComparison();
	void ShowComparison();
	void ShowBaseStats();
	void ExecuteUbergraph_UMG_BioLab_StatBox(int32 EntryPoint, class UUMG_BioLab_StatBox_Row_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FItemData& K2Node_CustomEvent_BaseItem, const struct FItemData& K2Node_CustomEvent_ComparisonItem, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FStatComparisonResult>& CallFunc_CompareItemStats_ComparisonResults, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TMap<struct FStatsRowHandle, int32> CallFunc_GetStatBoxItemStats_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FStatsRowHandle>& CallFunc_Map_Keys_Keys, const struct FStatComparisonResult& CallFunc_Array_Get_Item, const struct FStatsRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMG_BioLab_StatBox_Row_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

}


