#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x14C - 0xA8)
// BlueprintGeneratedClass BTT_FindNearbyFoodContainer.BTT_FindNearbyFoodContainer_C
class UBTT_FindNearbyFoodContainer_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                TargetLocationKey;                                 // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        NearbyDistance2D;                                  // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AvoidNearbyPlayers;                                // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_357B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                FoodContainerKey;                                  // 0x108(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         OnlyAcceptUnshelteredContainers;                   // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_357F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagQueriesRowHandle                  ContainerQuery;                                    // 0x134(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_FindNearbyFoodContainer_C* GetDefaultObj();

	void IsLocationFreeFromHostileTargets(const struct FVector& Location, bool* FreeFromHostiles, class AIcarusPlayerCharacter* CallFunc_GetNearestAlivePlayer_Player, TArray<class AActor*>& CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void FindValidItem(const struct FVector& AroundLocation, float MaxDistance, class AIcarusActor** Item, bool* Success, class UInventory* InventoryObject, class AIcarusActor* ContainerRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries_1, enum class EValid CallFunc_GetTagQueriesStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, int32 CallFunc_FindFirstItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class UInventory*>& CallFunc_Map_Values_Values, class UInventory* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess_1, class UBP_ShelteredComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocationFreeFromHostileTargets_FreeFromHostiles, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries_2, enum class EValid CallFunc_GetTagQueriesStruct_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_FindFirstItem_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_FindNearbyFoodContainer(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusActor* CallFunc_FindValidItem_Item, bool CallFunc_FindValidItem_Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
};

}


