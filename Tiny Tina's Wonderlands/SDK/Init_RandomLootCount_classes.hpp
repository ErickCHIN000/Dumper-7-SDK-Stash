#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass Init_RandomLootCount.Init_RandomLootCount_C
class UInit_RandomLootCount_C : public UAttributeInitializer
{
public:
	struct FDataTableRowHandle                   LootTableEntry;                                    // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_RandomLootCount_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 MyCount, float MyRandom, float CallFunc_GetValueOfAttribute_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStruct_RandomLootTable& CallFunc_GetDataTableRowFromHandle_OutRow, bool CallFunc_GetDataTableRowFromHandle_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FStruct_RandomLootOdds& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


