#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// BlueprintGeneratedClass ctrl_npc_00.ctrl_npc_00_C
class ACtrl_npc_00_C : public ACGAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ACtrl_npc_00_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_ctrl_npc_00(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn);
};

}


