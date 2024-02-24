#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x330 - 0x330)
// WidgetBlueprintGeneratedClass UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C
class UUMG_CameraSetting_Speed_C : public UW_CameraEntry_GenericSlider_C
{
public:

	static class UClass* StaticClass();
	static class UUMG_CameraSetting_Speed_C* GetDefaultObj();

	void ManualIncrease(float Increase, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue, class ABP_PhotoCamera_C* CallFunc_GetPhotoCameraPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


