#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RecipeItemAmount.UMG_RecipeItemAmount_C
class UUMG_RecipeItemAmount_C : public UUserWidget
{
public:
	class UBorder*                               Border_132;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Count;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeItemAmount_C* GetDefaultObj();

	void UpdateColor(enum class EProcessorPreview Selected, enum class EProcessorPreview Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& K2Node_Select_Default);
	void SetRecipeAmount(const struct FItemData& Item, int32 Multiplier, int32 Current, bool Output, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FItemDynamicData& CallFunc_GetItemProperty_DynamicData, enum class EDataValid CallFunc_GetItemProperty_Paths, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


