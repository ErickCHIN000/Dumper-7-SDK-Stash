#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C8 - 0x2B0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_Sets.UMG_FieldGuideItems_Sets_C
class UUMG_FieldGuideItems_Sets_C : public UFieldGuideItemWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IcarusGrid_C*                     SetGrid;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_NA;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItems_Sets_C* GetDefaultObj();

	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item);
	void Populate_Set_Detail(int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FItemsStaticRowHandle>& CallFunc_GetItemSet_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItems_Sets(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


