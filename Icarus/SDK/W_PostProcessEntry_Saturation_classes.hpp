#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x31C - 0x31C)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_Saturation.W_PostProcessEntry_Saturation_C
class UW_PostProcessEntry_Saturation_C : public UW_PostProcessEntry_Slider_C
{
public:

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_Saturation_C* GetDefaultObj();

	void UpdatePostProcess(struct FPostProcessSettings& Settings, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetSliderValue_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FVector4& CallFunc_MakeVector4_ReturnValue);
};

}

