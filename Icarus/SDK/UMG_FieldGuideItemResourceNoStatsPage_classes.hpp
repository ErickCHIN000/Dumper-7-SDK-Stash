#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F0 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItemResourceNoStatsPage.UMG_FieldGuideItemResourceNoStatsPage_C
class UUMG_FieldGuideItemResourceNoStatsPage_C : public UFieldGuidePageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_FieldGuideItem_Itemable_C*        Itemable;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Uses_C*            ItemUses;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_RecipeOrCost_C*    RecipeOrCost;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItemResourceNoStatsPage_C* GetDefaultObj();

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow);
	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void PopulateResourceDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Construct();
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItemResourceNoStatsPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


