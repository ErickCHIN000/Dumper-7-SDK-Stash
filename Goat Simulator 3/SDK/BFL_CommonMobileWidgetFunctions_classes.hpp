#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BFL_CommonMobileWidgetFunctions.BFL_CommonMobileWidgetFunctions_C
class UBFL_CommonMobileWidgetFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBFL_CommonMobileWidgetFunctions_C* GetDefaultObj();

	void Set_Element_Font_Size(class UTextBlock* TextElement, int32 NewFontSize, class UObject* __WorldContext, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void Check_if_Aspect_Ratio_Is_Lower(float Aspect_ratio_cutoff, class UObject* __WorldContext, bool* IsLowerThanProvided, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Set_Scale_Box_Alignment(class UScaleBoxSlot* ScaleBoxSlot, enum class EHorizontalAlignment InHorizontalAlignment, enum class EVerticalAlignment InVerticalAlignment, class UObject* __WorldContext);
};

}


