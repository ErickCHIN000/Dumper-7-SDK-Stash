#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x2EC - 0x2D0)
// BlueprintGeneratedClass BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C
class ABP_GG_Sky_Sphere_C : public ABP_Sky_Sphere_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                              CachedRotation;                                    // 0x2D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CachedStars;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedSun;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GG_Sky_Sphere_C* GetDefaultObj();

	void TurnOffSun(const struct FGGSkyLightSettings& Settings);
	void TurnOnSun(const struct FGGSkyLightSettings& Settings);
	void ExecuteUbergraph_BP_GG_Sky_Sphere(int32 EntryPoint, const struct FGGSkyLightSettings& K2Node_CustomEvent_Settings_1, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FGGSkyLightSettings& K2Node_CustomEvent_Settings, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue);
};

}


