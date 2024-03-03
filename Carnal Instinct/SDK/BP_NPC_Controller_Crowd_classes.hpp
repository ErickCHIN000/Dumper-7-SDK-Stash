#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass BP_NPC_Controller_Crowd.BP_NPC_Controller_Crowd_C
class ABP_NPC_Controller_Crowd_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_NPC_Controller_Crowd_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_Controller_Crowd(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
};

}


