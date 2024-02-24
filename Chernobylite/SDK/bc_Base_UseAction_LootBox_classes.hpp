#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x64 - 0x40)
// BlueprintGeneratedClass bc_Base_UseAction_LootBox.bc_Base_UseAction_LootBox_C
class Ubc_Base_UseAction_LootBox_C : public Ubc_Base_UseAction_C
{
public:
	TArray<struct FSt_LootItem>                  GivenItemsMap;                                     // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSt_LootItem>                  ItemPool;                                          // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Item_Count;                                        // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_Base_UseAction_LootBox_C* GetDefaultObj();

	void ActionBody(bool* Success, class USoundBase** SoundToPlay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<int32>& Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<int32>& Temp_int_Variable_3, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_LootSet& K2Node_MakeStruct_st_LootSet, const struct FSt_LootItem& CallFunc_Array_Get_Item_2, int32 Temp_int_Variable_4, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Remove_ReturnValue);
};

}


