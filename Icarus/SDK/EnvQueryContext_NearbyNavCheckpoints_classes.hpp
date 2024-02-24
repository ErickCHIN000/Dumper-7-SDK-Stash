#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_NearbyNavCheckpoints.EnvQueryContext_NearbyNavCheckpoints_C
class UEnvQueryContext_NearbyNavCheckpoints_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_NearbyNavCheckpoints_C* GetDefaultObj();

	void IsTileAdjacent(int32 A, int32 B, bool* A_AdjacentToB, int32 GridSize, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, int32 CallFunc_Percent_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_6, int32 CallFunc_Multiply_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_7, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_9, int32 CallFunc_Percent_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Subtract_IntInt_ReturnValue_7, int32 CallFunc_Percent_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, int32 CallFunc_Subtract_IntInt_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, const TArray<class AActor*>& Output, int32 CurrentTile, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetNearestTileIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_NavigationCheckpoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_NavigationCheckpoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_GetNearestTileIndex_ReturnValue_1, bool CallFunc_IsTileAdjacent_A_AdjacentToB, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


