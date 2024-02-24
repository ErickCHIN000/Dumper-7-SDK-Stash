#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x118 - 0xA8)
// BlueprintGeneratedClass BTT_SetTargetLocationFleeTarget.BTT_SetTargetLocationFleeTarget_C
class UBTT_SetTargetLocationFleeTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterMovementComponent*           MoverComponent;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xB8(0x28)(Edit, BlueprintVisible)
	double                                       Distance;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                Target;                                            // 0xE8(0x28)(Edit, BlueprintVisible)
	class APawn*                                 ControlledPawn;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_SetTargetLocationFleeTarget_C* GetDefaultObj();

	void SelectDestination(bool* bSuccess, struct FVector* Destination, const struct FVector& LocationOfTarget, const struct FVector& RandomLocation, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation_1, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue_1, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast_1);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_SetTargetLocationFleeTarget(int32 EntryPoint, bool CallFunc_SelectDestination_bSuccess, const struct FVector& CallFunc_SelectDestination_Destination, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn);
};

}


