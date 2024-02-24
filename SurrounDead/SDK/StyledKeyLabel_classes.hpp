#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass StyledKeyLabel.StyledKeyLabel_C
class UStyledKeyLabel_C : public UKeyLabel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LabelText;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStyledKeyLabel_C* GetDefaultObj();

	struct FSlateBrush GetIconBrush(class UTexture* CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	class FText GetDisplayNameUpper(class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateKeyLabel();
	void ExecuteUbergraph_StyledKeyLabel(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetDisplayNameVisibility_ReturnValue, bool CallFunc_HasIcon_ReturnValue, class FText CallFunc_GetDisplayNameUpper_ReturnValue, const struct FSlateBrush& CallFunc_GetIconBrush_ReturnValue, enum class ESlateVisibility CallFunc_GetIconVisibility_ReturnValue);
};

}


