#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SettingTooltip_TextBlock.UMG_SettingTooltip_TextBlock_C
class UUMG_SettingTooltip_TextBlock_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextWidget;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SettingTooltip_TextBlock_C* GetDefaultObj();

	void Set_Text(class FText InText, bool State);
	void ExecuteUbergraph_UMG_SettingTooltip_TextBlock(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Variable_2, class FText K2Node_CustomEvent_InText, bool K2Node_CustomEvent_State, class UObject* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2);
};

}


