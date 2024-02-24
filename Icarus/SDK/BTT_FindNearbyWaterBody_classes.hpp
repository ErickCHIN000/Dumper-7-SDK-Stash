#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x118 - 0xA8)
// BlueprintGeneratedClass BTT_FindNearbyWaterBody.BTT_FindNearbyWaterBody_C
class UBTT_FindNearbyWaterBody_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocationKey;                                 // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        NearbyDistance;                                    // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MaxBodyDistance;                                   // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FWaterSetupRowHandle>          ValidSetupTypes;                                   // 0x108(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_FindNearbyWaterBody_C* GetDefaultObj();

	void FindValidLocation(const struct FVector& AroundLocation, float MaxDistance, class APawn* OwnerPawn, struct FVector* Location, class AActor** LocationActor, bool* Success, class USplineComponent* TargetSplineComponent, const struct FWaterSetupRowHandle& TargetWaterSetup, const TArray<class AActor*>& ValidActors, class AActor* Target, const struct FVector& TargetLocation, class UInventory* InventoryObject, class AIcarusActor* ContainerRef, TArray<class ABP_LakeAudio_C*>& CallFunc_GetActorsOfClassInWorld_OutActors, TArray<class ALake*>& CallFunc_GetActorsOfClassInWorld_OutActors_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_FindTransformClosestToWorldLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class USplineComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplineInputKey_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, class ABP_LakeAudio_C* K2Node_DynamicCast_AsBP_Lake_Audio, bool K2Node_DynamicCast_bSuccess, class ALake* K2Node_DynamicCast_AsLake, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& Temp_wildcard_Variable);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_FindNearbyWaterBody(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_FindValidLocation_Location, class AActor* CallFunc_FindValidLocation_LocationActor, bool CallFunc_FindValidLocation_Success);
};

}


