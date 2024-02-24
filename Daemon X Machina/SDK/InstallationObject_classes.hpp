#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x358 - 0x348)
// BlueprintGeneratedClass InstallationObject.InstallationObject_C
class AInstallationObject_C : public ATTLInstallationObject
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AInstallationObject_C* GetDefaultObj();

	void UserConstructionScript();
};

}


