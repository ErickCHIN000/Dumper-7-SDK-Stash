#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x31C - 0x31C)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_CameraSmoothing.W_PostProcessEntry_CameraSmoothing_C
class UW_PostProcessEntry_CameraSmoothing_C : public UW_PostProcessEntry_Slider_C
{
public:

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_CameraSmoothing_C* GetDefaultObj();

	void UpdatePostProcess(struct FPostProcessSettings& Settings, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, float CallFunc_GetSliderValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


