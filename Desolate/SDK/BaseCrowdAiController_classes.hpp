#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass BaseCrowdAiController.BaseCrowdAiController_C
class ABaseCrowdAiController_C : public ADetourCrowdAIController
{
public:
	class UBehaviorTree*                         Behavior_Tree;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseCrowdAiController_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_RunBehaviorTree_ReturnValue);
};

}


