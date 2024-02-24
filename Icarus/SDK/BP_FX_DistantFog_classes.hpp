#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass BP_FX_DistantFog.BP_FX_DistantFog_C
class ABP_FX_DistantFog_C : public AActor
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AtmosphereController_C*            AtmosphereController;                              // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FX_DistantFog_C* GetDefaultObj();

	void UpdateScale(class ABP_AtmosphereController_C* AtmosController, const struct FVector& CallFunc_GetDistFogScale_Scale);
};

}


