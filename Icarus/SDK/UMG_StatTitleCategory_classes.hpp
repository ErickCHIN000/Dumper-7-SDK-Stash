#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatTitleCategory.UMG_StatTitleCategory_C
class UUMG_StatTitleCategory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TitleText;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStatCategoriesEnum                   Category;                                          // 0x270(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_StatTitleCategory_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_StatTitleCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class FText Temp_text_Variable, const struct FStatCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FStatCategory& CallFunc_GetStatCategoriesStruct_StatCategories, enum class EValid CallFunc_GetStatCategoriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
};

}


