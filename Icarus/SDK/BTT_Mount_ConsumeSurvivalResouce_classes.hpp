#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x208 - 0x1C0)
// BlueprintGeneratedClass BTT_Mount_ConsumeSurvivalResouce.BTT_Mount_ConsumeSurvivalResouce_C
class UBTT_Mount_ConsumeSurvivalResouce_C : public UBTTask_PerformAction_Mount_C
{
public:
	struct FBlackboardKeySelector                ContainerKey;                                      // 0x1C0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTagQueriesRowHandle                  TargetResourceItem;                                // 0x1E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class ESurvivalConsumableType           SurvivalResourceType;                              // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FillableUnitConsumption;                           // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_Mount_ConsumeSurvivalResouce_C* GetDefaultObj();

	void DoAction(class USurvivalCharacterState* SurvivalStateRef, int32 Temp_wildcard_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EIcarusResourceType Temp_byte_Variable, int32 Temp_int_Variable, enum class EIcarusResourceType Temp_byte_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EIcarusResourceType Temp_byte_Variable_2, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_GetMaxFood_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESurvivalConsumableType Temp_byte_Variable_3, enum class EIcarusResourceType K2Node_Select_Default, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxOxygen_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetOxygen_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, int32 CallFunc_RemoveUnits_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetWater_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, class USurvivalCharacterState* K2Node_DynamicCast_AsSurvival_Character_State, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue_1, class UInventory* K2Node_DynamicCast_AsInventory, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ConsumeItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_TameConsumeFoodItem_Success, bool CallFunc_Greater_IntInt_ReturnValue, const struct FItemDynamicData& CallFunc_GetItemProperty_DynamicData, enum class EDataValid CallFunc_GetItemProperty_Paths, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}


