#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C
class UUMG_BioLab_StatBox_Row_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ComparisonArrow;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ComparisonStat;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatName;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatValue;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_BioLab_StatBox_Row_C* GetDefaultObj();

	void ShowComparison(const struct FStatComparisonResult& Comparison);
	void HideComparison();
	void ShowStatValue(const struct FStatsRowHandle& Stat, int32 Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_BioLab_StatBox_Row(int32 EntryPoint, const struct FStatComparisonResult& K2Node_CustomEvent_Comparison, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetStatTitleBP_TitleDescription, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue_1, class FText CallFunc_GetStatTitleBP_TitleDescription_1, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FStatComparisonResult& K2Node_MakeStruct_StatComparisonResult, const struct FStatsRowHandle& K2Node_CustomEvent_Stat, int32 K2Node_CustomEvent_Value, bool K2Node_Event_IsDesignTime, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats_1, enum class EValid CallFunc_GetStatsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue_2, class FText CallFunc_GetStatTitleBP_TitleDescription_2, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_2, bool K2Node_SwitchEnum_CmpSuccess_4);
};

}


