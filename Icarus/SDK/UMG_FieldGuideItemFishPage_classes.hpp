#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x310 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C
class UUMG_FieldGuideItemFishPage_C : public UFieldGuidePageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        FilletAt_L;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        FilletAt_R;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        FishingGrid;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_254;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageFishing;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FieldGuideItem_Itemable_C*        Itemable;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TearingApartGrid;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItemFishPage_C* GetDefaultObj();

	void DoFishLinkClickedByRef(const struct FFishDataRowHandle& Creature, bool Discovered);
	void SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow);
	void SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow);
	void PopulateFishDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1, const struct FFishDataRowHandle& CallFunc_GetFishData_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsFreshWaterFish_ReturnValue, class UUMG_FieldGuide_Fish_Entry_C* CallFunc_Create_ReturnValue_2, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_2, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_3, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, bool Temp_bool_Variable, const struct FItemsStaticEnum& K2Node_Select_Default, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_2);
	void Construct();
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItemFishPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


