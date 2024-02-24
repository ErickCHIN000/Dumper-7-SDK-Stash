#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x31C - 0x31C)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_DofRadius.W_PostProcessEntry_DofRadius_C
class UW_PostProcessEntry_DofRadius_C : public UW_PostProcessEntry_Slider_C
{
public:

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_DofRadius_C* GetDefaultObj();

	void UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue);
};

}


