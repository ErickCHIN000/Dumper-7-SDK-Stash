#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x2E8 - 0x220)
// BlueprintGeneratedClass ba_CustomSkySphere_01.ba_CustomSkySphere_01_C
class Aba_CustomSkySphere_01_C : public AActor
{
public:
	class UStaticMeshComponent*                  Sky_Sphere_mesh;                                   // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       Base;                                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sky_material;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Colors_determined_by_sun_position;                 // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sun_height;                                        // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SunPositionFromLight;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sun_brightness;                                    // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Horizon_Falloff;                                   // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zenith_Color;                                      // 0x24C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Horizon_color;                                     // 0x25C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cloud_color;                                       // 0x26C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Overall_Color;                                     // 0x27C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sun_radius;                                        // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_speed;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_opacity;                                     // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stars_brightness;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     Horizon_color_curve;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Zenith_color_curve;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Cloud_color_curve;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureOpacity;                              // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ZenithTextureRef;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureRotation;                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureBrighthness;                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureDesaturation;                         // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureExponent;                             // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SourceMaterial;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_CustomSkySphere_01_C* GetDefaultObj();

	void Update(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


