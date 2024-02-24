#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E8 - 0x3E0)
// BlueprintGeneratedClass BP_MountAIController.BP_MountAIController_C
class ABP_MountAIController_C : public AIcarusNPCController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_MountAIController_C* GetDefaultObj();

	void ReceiveUnPossess(class APawn* UnpossessedPawn);
	void ExecuteUbergraph_BP_MountAIController(int32 EntryPoint, class APawn* K2Node_Event_UnpossessedPawn);
};

}


