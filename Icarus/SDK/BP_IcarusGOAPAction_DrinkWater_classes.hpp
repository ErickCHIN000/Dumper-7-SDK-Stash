#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BP_IcarusGOAPAction_DrinkWater.BP_IcarusGOAPAction_DrinkWater_C
class UBP_IcarusGOAPAction_DrinkWater_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_DrinkWater_C* GetDefaultObj();

	void GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success, const struct FVector& TargetLocation, class AIcarusNPCGOAPController* Controller, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& Temp_wildcard_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, TArray<class AWaterBody*>& CallFunc_GetActorsOfClassInWorld_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USplineComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_FindTransformClosestToWorldLocation_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetLocationAtSplineInputKey_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MaxDistance, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<class AWaterBody*>& CallFunc_GetActorsOfClassInWorld_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


