#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ResourceNetworkPreview.UMG_ResourceNetworkPreview_C
class UUMG_ResourceNetworkPreview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            IconValue;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture*                              ResourceIcon;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Colour;                                            // 0x280(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_ResourceNetworkPreview_C* GetDefaultObj();

	void Update(enum class EIcarusResourceType ResourceType, bool Provider, int32 ResourceValue, const struct FSlateColor& Temp_struct_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSlateColor& Temp_struct_Variable_1, const struct FSlateColor& Temp_struct_Variable_2, const struct FSlateColor& Temp_struct_Variable_3, enum class EIcarusResourceType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* K2Node_Select_Default, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, enum class EIcarusResourceType Temp_byte_Variable_1, const struct FSlateColor& K2Node_Select_Default_2);
	void ExecuteUbergraph_UMG_ResourceNetworkPreview(int32 EntryPoint);
};

}


