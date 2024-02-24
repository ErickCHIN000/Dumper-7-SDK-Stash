#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x348 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_DebugDeepMining.CF_DebugDeepMining_C
class UCF_DebugDeepMining_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FOreDepositRowHandle, int32>     OreDepositMap;                                     // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCF_DebugDeepMining_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_DebugDeepMining(int32 EntryPoint, TArray<class ABP_Deep_Mining_Ore_Deposit_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABP_Deep_Mining_Ore_Deposit_Base_C* CallFunc_Array_Get_Item, enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FOreDepositRowHandle>& CallFunc_Map_Keys_Keys, const struct FOreDepositRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


