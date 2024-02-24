#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x300 - 0x2B1)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C
class UUMG_FieldGuide_List_Category_Items_C : public UUMG_FieldGuide_List_Category_C
{
public:
	uint8                                        Pad_6AF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            FilterItems;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFieldGuideCategoriesRowHandle        FieldGuideCategoryRow;                             // 0x2D0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x2E8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Category_Items_C* GetDefaultObj();

	void ClickedInternal();
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Items(int32 EntryPoint);
	void FilterItems__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item);
};

}


