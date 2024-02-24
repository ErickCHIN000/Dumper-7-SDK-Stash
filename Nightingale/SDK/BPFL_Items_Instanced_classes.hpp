#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Instanced.BPFL_Items_Instanced_C
class UBPFL_Items_Instanced_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Instanced_C* GetDefaultObj();

	class FString GenerateItemTraitsDebugTextFromEntry(const struct FInventoryEntry& Item, class UObject* __WorldContext, bool* Success, const class FString& Output, const TArray<struct FGameplayTag>& TraitArray, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	class FString GenerateItemQualityDebugTextFromEntry(const struct FInventoryEntry& Item, class UObject* __WorldContext, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	class FText GenerateInstancedDataDebugTextFromEntry(const struct FInventoryEntry& Item, class UObject* __WorldContext, const class FString& Output, bool CallFunc_GenerateItemTraitsDebugTextFromEntry_Success, const class FString& CallFunc_GenerateItemTraitsDebugTextFromEntry_ReturnValue, const class FString& CallFunc_GenerateItemQualityDebugTextFromEntry_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FString GenerateItemEntriesTelemetryStrings(TArray<struct FInventoryEntry>& ItemEntries, class UObject* __WorldContext, const class FString& CurrentItem, const class FString& Separator, const class FString& Output, const struct FDynamicTypedStructs& DummyDynamicStructs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, const class FString& CallFunc_GenerateItemEntryTelemetryString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class FString GenerateItemEntryTelemetryString(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, const struct FInventoryEntry& LocalInventoryEntry, const struct FDynamicTypedStructs& DummyDynamicTypedStructs, class FText CallFunc_GenerateItemEntryDebugText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1);
	class FText GenerateItemEntryDebugText(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, class FText InstancedDataText, class FText CallFunc_GenerateInstancedDataDebugTextFromEntry_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int64 CallFunc_Conv_ByteToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_Conv_IntToInt64_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SplitItemEntry(const struct FInventoryEntry& InputItem, int32 SplitQuantity, class UObject* __WorldContext, bool* Success, struct FInventoryEntry* OriginalEntry, struct FInventoryEntry* NewEntry, const struct FInventoryEntry& NewSplit, const struct FInventoryEntry& SplitOriginal, int32 InputSplitQuantity, int32 BaseQuantity, const struct FGuid& CallFunc_NewUniqueInstanceId_InstanceId, const struct FInventoryEntry& CallFunc_CloneInventoryEntry_ReturnValue, int32 K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue_1);
};

}


