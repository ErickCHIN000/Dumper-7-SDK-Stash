#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x130 - 0xA8)
// BlueprintGeneratedClass BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C
class UBTT_FindNearbyWaterSource_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocationKey;                                 // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        NearbyDistance;                                    // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3607[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                FillableContainerKey;                              // 0x108(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_FindNearbyWaterSource_C* GetDefaultObj();

	void FindValidItem(const struct FVector& AroundLocation, float MaxDistance, class APawn* OwnerPawn, class AIcarusActor** Item, bool* Success, class UInventory* InventoryObject, class AIcarusActor* ContainerRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByPathCostFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_FindNearbyWaterSource(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusActor* CallFunc_FindValidItem_Item, bool CallFunc_FindValidItem_Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
};

}


