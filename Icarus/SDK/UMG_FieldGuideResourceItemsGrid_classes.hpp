#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2E8 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsGrid.UMG_FieldGuideResourceItemsGrid_C
class UUMG_FieldGuideResourceItemsGrid_C : public UFieldGuidePageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CategoryLabel;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IcarusGrid_C*                     Grid;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideResourceItemsGrid_C* GetDefaultObj();

	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void Populate_Resource_Detail(const struct FFieldGuideCategoriesRowHandle& CategoryRow, int32 Temp_int_Array_Index_Variable, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, const struct FFieldGuideCategories& CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories, enum class EValid CallFunc_GetFieldGuideCategoriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FItemsStaticRowHandle>& CallFunc_GetAllItemsForCategory_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, const struct FFieldGuideCategories& CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1, enum class EValid CallFunc_GetFieldGuideCategoriesStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideResourceItemsGrid(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


