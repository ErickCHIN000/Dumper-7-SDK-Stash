#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x318 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_ResourceNetwork_Item.UMG_FieldGuideItem_ResourceNetwork_Item_C
class UUMG_FieldGuideItem_ResourceNetwork_Item_C : public UUserWidget
{
public:
	class UTextBlock*                            AmountText;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RecievingProgressBar;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ResourceIcon;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           OxygenWhite;                                       // 0x278(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           FuelGreen;                                         // 0x2A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           WaterBlue;                                         // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           EnergyYellow;                                      // 0x2F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItem_ResourceNetwork_Item_C* GetDefaultObj();

	void Setup(enum class EIcarusResourceType ResourceType, int32 Amount, bool Provides, bool Temp_bool_Variable, enum class EIcarusResourceType Temp_byte_Variable, const struct FSlateColor& Temp_struct_Variable, const struct FSlateColor& Temp_struct_Variable_1, const struct FSlateColor& Temp_struct_Variable_2, enum class EIcarusResourceType Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, enum class EIcarusResourceType Temp_byte_Variable_2, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, class UObject* Temp_object_Variable_6, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, class UObject* K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default_4);
};

}


