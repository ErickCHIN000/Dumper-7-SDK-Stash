#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass BaseAIController.BaseAIController_C
class ABaseAIController_C : public ADetourCrowdAIController
{
public:
	class UBehaviorTree*                         Behavior_Tree;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseAIController_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_RunBehaviorTree_ReturnValue);
};

}


