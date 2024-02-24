#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x49 - 0x48)
// BlueprintGeneratedClass CameraModifier_MotionBlur.CameraModifier_MotionBlur_C
class UCameraModifier_MotionBlur_C : public UCameraModifier
{
public:
	bool                                         Enabled;                                           // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCameraModifier_MotionBlur_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


