#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF8 - 0x30)
// BlueprintGeneratedClass Init_MinGameStage_Spell.Init_MinGameStage_Spell_C
class UInit_MinGameStage_Spell_C : public UAttributeInitializer
{
public:
	TMap<enum class EOakElementalType, bool>     IsElementUsed;                                     // 0x30(0x50)(Edit, BlueprintVisible, ZeroConstructor)
	struct FDataTableValueHandle                 SpellHandle;                                       // 0x80(0x18)(Edit, BlueprintVisible, NoDestructor)
	TArray<float>                                MinArray;                                          // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EOakElementalType, struct FDataTableValueHandle> ElementMinStageHandle;                             // 0xA8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UInit_MinGameStage_Spell_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TArray<enum class EOakElementalType>& CallFunc_Map_Keys_Keys, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, enum class EOakElementalType CallFunc_Array_Get_Item, float CallFunc_FMax_ReturnValue, const struct FDataTableValueHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, bool CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


