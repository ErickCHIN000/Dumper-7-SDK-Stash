#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x299 - 0x260)
// WidgetBlueprintGeneratedClass wid_CraftingMenuEntry_03.wid_CraftingMenuEntry_03_C
class UWid_CraftingMenuEntry_03_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemAmountText;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UpperText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RecipeName;                                        // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpdateDescription;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PreviewSelected;                                   // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_CraftingMenuEntry_03_C* GetDefaultObj();

	void SetSelected(bool NewSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	class FText GetItemCountText(class UInventoryComponent2* Inventory, class FName ItemClass, const class FString& CurrentAmount, float CallFunc_Count_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetHighlighted(bool NewHighlighted, enum class ECraftingResult CanBeCrafted, bool ForceNoAnimation);
	void Update(class UCrafting* CraftingComponent, class UInventoryComponent2* InventoryComponent);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_CraftingMenuEntry_03(int32 EntryPoint, bool K2Node_CustomEvent_NewHighlighted, enum class ECraftingResult K2Node_CustomEvent_CanBeCrafted, bool K2Node_CustomEvent_ForceNoAnimation, class UCrafting* K2Node_CustomEvent_CraftingComponent, class UInventoryComponent2* K2Node_CustomEvent_InventoryComponent, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetItemCountText_ReturnValue);
	void UpdateDescription__DelegateSignature(const class FString& Description);
};

}


