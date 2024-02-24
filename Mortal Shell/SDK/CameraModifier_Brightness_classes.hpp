#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4C - 0x48)
// BlueprintGeneratedClass CameraModifier_Brightness.CameraModifier_Brightness_C
class UCameraModifier_Brightness_C : public UCameraModifier
{
public:
	float                                        Brightness;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraModifier_Brightness_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FVector4& K2Node_MakeStruct_Vector4, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


