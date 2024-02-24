#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// BlueprintGeneratedClass BP_AchievementBase.BP_AchievementBase_C
class ABP_AchievementBase_C : public AGGAchievement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AchievementBase_C* GetDefaultObj();

	void OnAchievementInitialize();
	void ExecuteUbergraph_BP_AchievementBase(int32 EntryPoint);
};

}


