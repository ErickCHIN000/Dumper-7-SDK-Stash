#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x330 - 0x320)
// BlueprintGeneratedClass BP_AI_StatTracker.BP_AI_StatTracker_C
class ABP_AI_StatTracker_C : public ANWXAIStatTracker
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureManager_C*                 CreatureManager;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AI_StatTracker_C* GetDefaultObj();

};

}


