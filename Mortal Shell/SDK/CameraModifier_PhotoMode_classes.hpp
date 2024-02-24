#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x88 - 0x48)
// BlueprintGeneratedClass CameraModifier_PhotoMode.CameraModifier_PhotoMode_C
class UCameraModifier_PhotoMode_C : public UCameraModifier
{
public:
	float                                        Contrast;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverrideContrast;                                 // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Saturation;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temperature;                                       // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Red;                                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Green;                                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        blue;                                              // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FilmGrain;                                         // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MotionBlur;                                        // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChromaticAberration;                               // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VignetteIntensity;                                 // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1228[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              LUT_Texture;                                       // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LUT_Intensity;                                     // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraModifier_PhotoMode_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FVector4& K2Node_MakeStruct_Vector4, float CallFunc_SelectFloat_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


