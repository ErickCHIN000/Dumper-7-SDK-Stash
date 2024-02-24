#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x268 - 0x220)
// BlueprintGeneratedClass BP_SquadManager.BP_SquadManager_C
class ABP_SquadManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SquadLeader;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        SquadFollowers;                                    // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AAITargetNode_C*>               TargetNodes;                                       // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        FollowDistance;                                    // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FlankingAngle;                                     // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SquadTargetActor;                                  // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SquadManager_C* GetDefaultObj();

	void OnFollowerEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason, int32 IndexToRemove, int32 CallFunc_Array_Find_ReturnValue);
	void GetTargetLocationForFollower(int32 FollowerIndex, struct FVector* TargetLocation, const struct FVector& FirstPositionDirection, const struct FVector& OutLocation, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void RequestFollowTarget(class AActor* Follower, class AActor** TargetNode, int32 FollowerIndex, const struct FVector& CallFunc_GetTargetLocationForFollower_TargetLocation, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAITargetNode_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AAITargetNode_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SquadManager(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_GetTargetLocationForFollower_TargetLocation, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AAITargetNode_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


