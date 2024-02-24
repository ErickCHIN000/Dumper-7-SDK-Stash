#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x2FC - 0x220)
// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
class ABP_Sky_Sphere_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Sky_Sphere_mesh;                                   // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Base;                                              // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessChange_Value_E4B35C5942409D39C2A6F986D1ED501E; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BrightnessChange__Direction_E4B35C5942409D39C2A6F986D1ED501E; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_176D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BrightnessChange;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverallColorChange_Value_0935599C4F0407D24109868E9688BE95; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OverallColorChange__Direction_0935599C4F0407D24109868E9688BE95; // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1786[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OverallColorChange;                                // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sky_material;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Refresh_material;                                  // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_179B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADirectionalLight*                     Directional_light_actor;                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Colors_determined_by_sun_position;                 // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_179F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sun_height;                                        // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sun_brightness;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Horizon_Falloff;                                   // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zenith_Color;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Horizon_color;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cloud_color;                                       // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Overall_Color;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_speed;                                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_opacity;                                     // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stars_brightness;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     Horizon_color_curve;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Zenith_color_curve;                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     Cloud_color_curve;                                 // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SourceMaterial;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TextureBrightness;                                 // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CustomTextureRotation;                             // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TextureRotation;                                   // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Sky_Sphere_C* GetDefaultObj();

	void SetSunBrightness(float Value);
	void SetCloudOpacity(float Value);
	void GetTextureBirghtness(float* Value, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
	void ChangeBrightness(float NewBrightness, float InTime);
	void ChangeOverallColor(const struct FLinearColor& NewColor, float InTime);
	void UpdateSunDirection(bool CallFunc_Less_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Abs_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void OverallColorChange__FinishedFunc();
	void OverallColorChange__UpdateFunc();
	void BrightnessChange__FinishedFunc();
	void BrightnessChange__UpdateFunc();
	void ChangeOverallColorTimeline(const struct FLinearColor& NewColor, const struct FLinearColor& CurrentColor, float InTime);
	void ChangeBrightnessTimeline(float NewBrightness, float CurrentBrightness, float InTime);
	void ExecuteUbergraph_BP_Sky_Sphere(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_NewColor, const struct FLinearColor& K2Node_CustomEvent_CurrentColor, float K2Node_CustomEvent_InTime_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float K2Node_CustomEvent_NewBrightness, float K2Node_CustomEvent_CurrentBrightness, float K2Node_CustomEvent_InTime, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue);
};

}


