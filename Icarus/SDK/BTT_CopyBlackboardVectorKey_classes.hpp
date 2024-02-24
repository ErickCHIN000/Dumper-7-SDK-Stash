#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C
class UBTT_CopyBlackboardVectorKey_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Source;                                            // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                Target;                                            // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_CopyBlackboardVectorKey_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_CopyBlackboardVectorKey(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue);
};

}


