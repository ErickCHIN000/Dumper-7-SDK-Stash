#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xD8 - 0xA0)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C
class UBP_IcarusGOAPAction_EatPlantFood_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:
	struct FTagQueriesRowHandle                  ValidFoodQuery;                                    // 0xA0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAPInteractable_FoodNode_C*       SpawnedFoodNode;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_Index;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             Tile;                                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecordIndex;                                       // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FLODInstanceIndex;                                 // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EatPlantFood_C* GetDefaultObj();

	void SpawnDummyNode(class AIcarusNPCGOAPController* ForController, const struct FVector& Spawn_Transform_Location, class ABP_GOAPInteractable_Base_C** SpawnedNode, class ABP_GOAPInteractable_Base_C* CallFunc_SpawnDummyNode_SpawnedNode, class ABP_GOAPInteractable_FoodNode_C* K2Node_DynamicCast_AsBP_GOAPInteractable_Food_Node, bool K2Node_DynamicCast_bSuccess);
	void GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success, class AFLODTile* Tile, float SearchRadius, class UFLODFISMComponent* CurrentFISM, const TArray<int32>& NearbyInstances, class AIcarusNPCGOAPController* Controller, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_wildcard_Variable, int32 CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_RandomIntegerFromStream_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AFLODTile*>& CallFunc_GetActorsOfClassInWorld_OutActors, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class AFLODTile* K2Node_DynamicCast_AsFLODTile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UFLODRecord*>& CallFunc_Map_Values_Values, class AFLOD* K2Node_DynamicCast_AsFLOD, bool K2Node_DynamicCast_bSuccess_1, class UFLODRecord* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFLODDescription& CallFunc_GetDescription_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, TArray<int32>& CallFunc_GetInstancesOverlappingSphere_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


