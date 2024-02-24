#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BT_Fail.BT_Fail_C
class UBT_Fail_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBT_Fail_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BT_Fail(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


