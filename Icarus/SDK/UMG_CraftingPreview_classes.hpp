#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CraftingPreview.UMG_CraftingPreview_C
class UUMG_CraftingPreview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_54;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NoRecipeSelected;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RecipeName;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RecipeElement_C*                  UMG_RecipeElement;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_CraftingPreview_C* GetDefaultObj();

	void Recipe(struct FProcessorRecipesRowHandle* Recipe);
	void GetRecipe(struct FProcessorRecipesRowHandle* Recipe);
	void Set_Recipe(const struct FProcessorRecipesRowHandle& Recipe, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCraftingOutput& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UIcarusDataTable* CallFunc_GetDataTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void RecipeClicked(const struct FProcessorRecipesRowHandle& Recipe);
	void ExecuteUbergraph_UMG_CraftingPreview(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_Recipe);
	void Clicked__DelegateSignature();
};

}


