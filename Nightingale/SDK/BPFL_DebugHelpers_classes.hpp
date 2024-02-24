#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_DebugHelpers.BPFL_DebugHelpers_C
class UBPFL_DebugHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_DebugHelpers_C* GetDefaultObj();

	void GetPlayerOrNPCName(class AActor* Actor, class UObject* __WorldContext, class FString* Name, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void IndentString(const class FString& InString, int32 Depth, bool bSkipFirstLine, class UObject* __WorldContext, class FString* OutString, const class FString& StringToIndent, const class FString& BaseIndent, const class FString& Indent, int32 Temp_int_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void GetJoinedStringsOrNone(TArray<class FString>& InStrings, const class FString& Separator, bool bPrependLineBreak, class UObject* __WorldContext, class FString* Joined, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void GetObjectNameOrNone(class UObject* Object, class UObject* __WorldContext, class FString* Name, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue);
	void FormatSoftRefName(TSoftObjectPtr<class UObject> Reference, class UObject* LoadedReference, bool bShouldBeLoaded, class UObject* __WorldContext, class FString* Name, const class FString& RefName, const class FString& RefPath, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void FormatTableRowName(const struct FDataTableRowHandle& Row, class UObject* __WorldContext, class FString* Name, const class FString& TableName, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


