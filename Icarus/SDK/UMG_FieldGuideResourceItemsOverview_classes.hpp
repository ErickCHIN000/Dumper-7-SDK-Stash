#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C
class UUMG_FieldGuideResourceItemsOverview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IcarusGrid_C*                     Grid;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnResourceClicked;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideResourceItemsOverview_C* GetDefaultObj();

	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void Populate_Resource_Detail(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItemsCategoryIconAndLabel_C* CallFunc_Create_ReturnValue, TArray<struct FFieldGuideCategoriesRowHandle>& CallFunc_GetAllCategoryDisplayOrder_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview(int32 EntryPoint);
	void OnResourceClicked__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
};

}


