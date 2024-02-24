#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass CameraModifier_FilmGrain.CameraModifier_FilmGrain_C
class UCameraModifier_FilmGrain_C : public UCameraModifier
{
public:
	bool                                         Enabled;                                           // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_987[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentResolutionScale;                            // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraModifier_FilmGrain_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


