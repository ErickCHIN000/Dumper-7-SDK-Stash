#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x308 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItemRangedPage.UMG_FieldGuideItemRangedPage_C
class UUMG_FieldGuideItemRangedPage_C : public UFieldGuidePageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IcarusGrid_C*                     Ammo;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Attachments_C*     Attachments;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Itemable_C*        Itemable;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_RecipeOrCost_C*    RecipeOrCost;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Stats_C*           Stats;                                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_NA;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItemRangedPage_C* GetDefaultObj();

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow);
	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void PopulateResourceDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<struct FItemsStaticRowHandle>& CallFunc_GetAmmoTypesForFirearm_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue);
	void Construct();
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItemRangedPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


