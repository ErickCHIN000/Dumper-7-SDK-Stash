#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass NavmeshAIController.NavmeshAIController_C
class ANavmeshAIController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANavmeshAIController_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_NavmeshAIController(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn);
};

}


