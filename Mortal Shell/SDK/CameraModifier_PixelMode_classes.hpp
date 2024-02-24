#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass CameraModifier_PixelMode.CameraModifier_PixelMode_C
class UCameraModifier_PixelMode_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UCameraModifier_PixelMode_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


