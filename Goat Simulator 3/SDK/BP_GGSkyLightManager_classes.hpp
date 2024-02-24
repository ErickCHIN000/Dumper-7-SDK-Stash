#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// BlueprintGeneratedClass BP_GGSkyLightManager.BP_GGSkyLightManager_C
class ABP_GGSkyLightManager_C : public AGGSkyLightManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GGSkyLightManager_C* GetDefaultObj();

	void OnTurnedOffSun(const struct FGGSkyLightSettings& Settings);
	void OnTurnedOnSun(const struct FGGSkyLightSettings& Settings);
	void ExecuteUbergraph_BP_GGSkyLightManager(int32 EntryPoint, class ABP_GG_Sky_Sphere_C* K2Node_DynamicCast_AsBP_GG_Sky_Sphere, bool K2Node_DynamicCast_bSuccess, const struct FGGSkyLightSettings& K2Node_Event_Settings_1, class ABP_GG_Sky_Sphere_C* K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGGSkyLightSettings& K2Node_Event_Settings);
};

}


