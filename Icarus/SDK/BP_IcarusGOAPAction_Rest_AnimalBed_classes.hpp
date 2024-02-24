#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Rest_AnimalBed.BP_IcarusGOAPAction_Rest_AnimalBed_C
class UBP_IcarusGOAPAction_Rest_AnimalBed_C : public UBP_IcarusGOAPAction_Rest_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Rest_AnimalBed_C* GetDefaultObj();

	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimalBedUnoccupied_Unoccupied, bool CallFunc_BooleanAND_ReturnValue);
	void IsAnimalBedUnoccupied(class AActor* BedActor, bool* Unoccupied, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetNearestUnoccupiedAnimalBed(class AActor** ValidBed, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByPathCostFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAnimalBedUnoccupied_Unoccupied);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, class AActor* CallFunc_GetNearestUnoccupiedAnimalBed_ValidBed, bool CallFunc_GetNearestUnoccupiedAnimalBed_Success, bool CallFunc_PlanAction_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


