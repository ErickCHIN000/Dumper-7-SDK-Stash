#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass ResetBoolTask.ResetBoolTask_C
class UResetBoolTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xB0(0x28)(Edit, BlueprintVisible)
	bool                                         Bool;                                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UResetBoolTask_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbort(class AActor* OwnerActor);
	void ExecuteUbergraph_ResetBoolTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor);
};

}


