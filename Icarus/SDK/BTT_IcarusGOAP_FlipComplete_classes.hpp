#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_FlipComplete.BTT_IcarusGOAP_FlipComplete_C
class UBTT_IcarusGOAP_FlipComplete_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Complete;                                          // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_FlipComplete_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_IcarusGOAP_FlipComplete(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


