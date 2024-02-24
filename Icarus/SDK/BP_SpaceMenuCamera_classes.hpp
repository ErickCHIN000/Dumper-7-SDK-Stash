#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x291 - 0x280)
// BlueprintGeneratedClass BP_SpaceMenuCamera.BP_SpaceMenuCamera_C
class ABP_SpaceMenuCamera_C : public APawn
{
public:
	class UCameraComponent*                      Camera;                                            // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ESpaceMenuScene                   MenuScene;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SpaceMenuCamera_C* GetDefaultObj();

	void CaptureScene();
};

}


