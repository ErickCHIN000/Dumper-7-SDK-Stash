#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x771 - 0x760)
// BlueprintGeneratedClass BPCont_AI.BPCont_AI_C
class ABPCont_AI_C : public AOakAIController
{
public:
	class UGbxPerceptionComponent*               GbxPerception;                                     // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetingComponent*                   Targeting;                                         // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasTarget;                                         // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABPCont_AI_C* GetDefaultObj();

	void UserConstructionScript();
};

}


