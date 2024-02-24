#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_ResourceGlossaryHelper.BP_ResourceGlossaryHelper_C
class UBP_ResourceGlossaryHelper_C : public UResourceGlossaryHelper
{
public:

	static class UClass* StaticClass();
	static class UBP_ResourceGlossaryHelper_C* GetDefaultObj();

	void GetItemRewardsFromCreatureDataTable(TArray<struct FCreatureRewardAndRealm>* CreatureRewardAndRealms, const TArray<struct FCreatureRewardAndRealm>& LCreatureDataAndRealms, class UDataTable* L_CDT_CreatureData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_BPCreatureData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_CreatureUIData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FCreatureRewardAndRealm& K2Node_MakeStruct_CreatureRewardAndRealm, int32 CallFunc_Array_Add_ReturnValue);
};

}


