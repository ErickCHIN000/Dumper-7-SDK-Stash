#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass IncrementIntValueTask.IncrementIntValueTask_C
class UIncrementIntValueTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Key;                                               // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UIncrementIntValueTask_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_IncrementIntValueTask(int32 EntryPoint, int32 Temp_int_Variable, class AActor* K2Node_Event_OwnerActor, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


