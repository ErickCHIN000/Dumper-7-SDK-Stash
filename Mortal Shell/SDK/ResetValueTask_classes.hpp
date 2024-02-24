#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass ResetValueTask.ResetValueTask_C
class UResetValueTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xB0(0x28)(Edit, BlueprintVisible)
	class AActor*                                Actor;                                             // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UResetValueTask_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_ResetValueTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


