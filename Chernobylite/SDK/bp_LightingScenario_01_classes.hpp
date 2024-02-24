#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x85A (0x88A - 0x30)
// BlueprintGeneratedClass bp_LightingScenario_01.bp_LightingScenario_01_C
class Ubp_LightingScenario_01_C : public UPrimaryDataAsset
{
public:
	bool                                         OverwriteSkyLight;                                 // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OverwriteAtmosphericFog;                           // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OverwriteExponentialHeightFog;                     // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnablePostProcess;                                 // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1844[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x680)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSt_LightingSetup_01_SkyLight         SkyLightSettings;                                  // 0x6C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_AtmosphericFog   AtmosphericFogSettings;                            // 0x6F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_ExponentialHeightFog ExponentialHeightFogSettings;                      // 0x720(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_DirectionalLight DirectionalLightSettings;                          // 0x7A0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_SkySphere        SkySphereSettings;                                 // 0x800(0x84)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1869[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         OverwriteDirectionalLight;                         // 0x888(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OverwriteSkySphere;                                // 0x889(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubp_LightingScenario_01_C* GetDefaultObj();

};

}


