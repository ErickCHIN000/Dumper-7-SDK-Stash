#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// BlueprintGeneratedClass ALS_AI_Controller.ALS_AI_Controller_C
class AALS_AI_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class AALS_AI_Controller_C* GetDefaultObj();

	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_ALS_AI_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn);
};

}


