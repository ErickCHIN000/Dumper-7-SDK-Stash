#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x330 - 0x330)
// WidgetBlueprintGeneratedClass UMG_CameraSetting_Exposure.UMG_CameraSetting_Exposure_C
class UUMG_CameraSetting_Exposure_C : public UW_CameraEntry_GenericSlider_C
{
public:

	static class UClass* StaticClass();
	static class UUMG_CameraSetting_Exposure_C* GetDefaultObj();

	void UpdatePostProcess(struct FPostProcessSettings& Settings, float CallFunc_GetSliderValue_ReturnValue);
};

}


