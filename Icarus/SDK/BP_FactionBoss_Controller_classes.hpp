#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x340 - 0x328)
// BlueprintGeneratedClass BP_FactionBoss_Controller.BP_FactionBoss_Controller_C
class ABP_FactionBoss_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBlackboardData*                       DefaultBlackboard;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         DefaultBehaviourTree;                              // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FactionBoss_Controller_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FactionBoss_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue);
};

}


