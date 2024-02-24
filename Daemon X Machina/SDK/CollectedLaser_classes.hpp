#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x370 - 0x360)
// BlueprintGeneratedClass CollectedLaser.CollectedLaser_C
class ACollectedLaser_C : public ATTLCollectedLaser
{
public:
	class USkeletalMeshComponent*                LaserMesh;                                         // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACollectedLaser_C* GetDefaultObj();

	void UserConstructionScript();
};

}


