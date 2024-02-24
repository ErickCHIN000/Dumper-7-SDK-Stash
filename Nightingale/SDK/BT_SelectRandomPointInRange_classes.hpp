#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BT_SelectRandomPointInRange.BT_SelectRandomPointInRange_C
class UBT_SelectRandomPointInRange_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Radius;                                            // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                Target;                                            // 0xB8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBT_SelectRandomPointInRange_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BT_SelectRandomPointInRange(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast);
};

}


