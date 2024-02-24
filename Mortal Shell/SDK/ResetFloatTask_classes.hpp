#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xDC - 0xA8)
// BlueprintGeneratedClass ResetFloatTask.ResetFloatTask_C
class UResetFloatTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        Float;                                             // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UResetFloatTask_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_ResetFloatTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn);
};

}


