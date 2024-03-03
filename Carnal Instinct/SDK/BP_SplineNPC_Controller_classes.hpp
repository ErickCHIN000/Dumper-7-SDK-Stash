#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass BP_SplineNPC_Controller.BP_SplineNPC_Controller_C
class ABP_SplineNPC_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SplineNPC_Controller_C* GetDefaultObj();

	void EventRunBT();
	void ExecuteUbergraph_BP_SplineNPC_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
};

}


