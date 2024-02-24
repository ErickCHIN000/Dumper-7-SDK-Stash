#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_CaveCheatMarker.BP_CaveCheatMarker_C
class ABP_CaveCheatMarker_C : public AActor
{
public:
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UCavePrefabAsset>       Prefab;                                            // 0x230(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CaveCheatMarker_C* GetDefaultObj();

};

}


