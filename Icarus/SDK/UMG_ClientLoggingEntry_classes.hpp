#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x284 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C
class UUMG_ClientLoggingEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            MessageText;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimeText;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ClientLogItem_C*                   ClientLogItem;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextSize;                                          // 0x280(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ClientLoggingEntry_C* GetDefaultObj();

	void Initialize(class FText LogCategory, enum class ELevel Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_LogTimestampToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FLogCategoriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FIcarusLogCategory& CallFunc_GetLogCategoriesStruct_LogCategories, enum class EValid CallFunc_GetLogCategoriesStruct_Paths, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_SwitchEnum_CmpSuccess);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_UMG_ClientLoggingEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_ClientLogItem_C* K2Node_DynamicCast_AsBP_Client_Log_Item, bool K2Node_DynamicCast_bSuccess);
};

}


