#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass WBP_LevelGateItem.WBP_LevelGateItem_C
class UWBP_LevelGateItem_C : public UUserWidget
{
public:
	class UImage*                                CheckBox;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DisplayText;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LevelGateItem_C* GetDefaultObj();

	void SetTextSatColor(class UTextBlock* TheText, bool bIsSatisfied, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	void UpdateFromPack(const struct FLevelRestrictionItem& Pack, bool* IsSatisfied, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UTexture2D* Temp_object_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UTexture2D* Temp_object_Variable_1, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1);
};

}


