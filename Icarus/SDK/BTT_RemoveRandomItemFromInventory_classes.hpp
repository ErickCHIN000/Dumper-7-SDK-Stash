#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x104 - 0xA8)
// BlueprintGeneratedClass BTT_RemoveRandomItemFromInventory.BTT_RemoveRandomItemFromInventory_C
class UBTT_RemoveRandomItemFromInventory_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetContainerKey;                                // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTagQueriesRowHandle                  ValidItemQuery;                                    // 0xD8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        RemovedItemsCount;                                 // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RemovedItemsCountDeviation;                        // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SucceedIfAnyItemsFound;                            // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredItemNum;                                   // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumItemsRemoved;                                   // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_RemoveRandomItemFromInventory_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_RemoveRandomItemFromInventory(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<class UInventory*>& CallFunc_Map_Values_Values, class UInventory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_ConsumeItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue);
};

}


