#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x348 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_PrintWorldStats.CF_PrintWorldStats_C
class UCF_PrintWorldStats_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FStatsRowHandle, int32>          WorldStats;                                        // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCF_PrintWorldStats_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_PrintWorldStats(int32 EntryPoint, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UWorldStatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TArray<struct FStatsRowHandle>& CallFunc_Map_Keys_Keys, TMap<struct FStatsRowHandle, int32> CallFunc_GetWorldStats_ReturnValue, const struct FStatsRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_HasActiveProspect_ReturnValue);
};

}


