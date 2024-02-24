#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x310 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItemWorkshopPackPage.UMG_FieldGuideItemWorkshopPackPage_C
class UUMG_FieldGuideItemWorkshopPackPage_C : public UFieldGuidePageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_FieldGuideItem_Itemable_C*        Itemable;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Uses_C*            ItemUses;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_RecipeOrCost_C*    RecipeOrCost;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItems_Sets_C*           Sets;                                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Stats_C*           Stats;                                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IcarusGrid_C*                     SuppliesGrid;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_NA_Supplies;                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItemWorkshopPackPage_C* GetDefaultObj();

	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow);
	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void PopulateResourceDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, int32 StackCount, int32 PacketCount, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, const struct FItemsStaticRowHandle& CallFunc_GetItemFromItemPack_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FItemableRowHandle& CallFunc_GetSeedDescriptionFromPack_ReturnValue, class UUMG_FieldGuideItemResourceDescription_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1);
	void Construct();
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItemWorkshopPackPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


