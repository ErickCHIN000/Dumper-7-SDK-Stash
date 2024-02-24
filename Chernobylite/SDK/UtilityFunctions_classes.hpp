#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UtilityFunctions.UtilityFunctions_C
class UUtilityFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUtilityFunctions_C* GetDefaultObj();

	void ValidateDataTableRowHandle(class UDataTable* DataTable, class FName Row_Name, class UObject* __WorldContext, bool* DoesDataTableContainRow, bool IsContained, class UDataTable* InputDataTable, class FName InputHandle, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_Array_Contains_ReturnValue);
	bool CompareFloatByComparsionType(float A, float B, uint8 ComparsionType1, class UObject* __WorldContext, uint8 ComparsionType, float ValueB, float ValueA, uint8 Temp_byte_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_Select_Default);
	void CallFunctionOnActorWithParameter(class UObject* Object, const class FString& FunctionName, const class FString& ParameterName, class UObject* __WorldContext, const class FString& CallFunc_GetPathName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void GetNamesFromRowHandles(TArray<struct FDataTableRowHandle>& Input_row_handles, class UObject* __WorldContext, TArray<class FName>* OutputNames, const TArray<class FName>& OutputArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetTextFromDataTableByColumnName(class FName Column, struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext, class FText* OutputPin, const TArray<class FString>& Array, int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class FName Temp_name_Variable, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable_1, class FName K2Node_Select_Default, const class FString& CallFunc_GetStringFromArrayOrEmpty_ReturnValue, class FName K2Node_Select_Default_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, TArray<class FString>& CallFunc_GetDataTableColumnAsString_ReturnValue, const class FString& CallFunc_GetStringFromArrayOrEmpty_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetStringFromArrayOrEmpty_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetStringFromArrayOrEmpty_ReturnValue_3, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	class FString Swap_word(const class FString& Input_string, const class FString& Search_for, const class FString& Swap_for, class UObject* __WorldContext, const TArray<class FString>& Sentence, const class FString& Space_character, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue);
	void DiffArray(TArray<class UObject*>& A, TArray<class UObject*>& B, class UObject* __WorldContext, TArray<class UObject*>* Result, const TArray<class UObject*>& SubtractedArray, const TArray<class UObject*>& ResultingArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


