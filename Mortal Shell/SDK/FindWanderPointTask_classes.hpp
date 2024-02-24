#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass FindWanderPointTask.FindWanderPointTask_C
class UFindWanderPointTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                WanderKey;                                         // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UFindWanderPointTask_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_FindWanderPointTask(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue);
};

}


