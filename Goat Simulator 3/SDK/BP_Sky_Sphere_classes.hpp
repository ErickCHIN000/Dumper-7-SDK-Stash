#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x2D0 - 0x230)
// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
class ABP_Sky_Sphere_C : public AActor
{
public:
	class UStaticMeshComponent*                  SkySphereMesh;                                     // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Base;                                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sky_material;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Refresh_material;                                  // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ADirectionalLight*                     Directional_light_actor;                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Colors_determined_by_sun_position;                 // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sun_height;                                        // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sun_brightness;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Horizon_Falloff;                                   // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zenith_Color;                                      // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Horizon_color;                                     // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cloud_Color;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Overall_Color;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_speed;                                       // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_opacity;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stars_brightness;                                  // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     Horizon_color_curve;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Zenith_color_curve;                                // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Cloud_color_curve;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Sky_Sphere_C* GetDefaultObj();

	void RefreshMaterial(float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void UpdateSunDirection(bool CallFunc_Less_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Abs_ReturnValue_1, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetClampedLinearColorValue_ReturnValue_2);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


