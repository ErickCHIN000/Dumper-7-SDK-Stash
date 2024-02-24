#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C
// (None)

class UClass* UUMG_BioLab_StatBox_Row_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_StatBox_Row_C");

	return Clss;
}


// UMG_BioLab_StatBox_Row_C UMG_BioLab_StatBox_Row.Default__UMG_BioLab_StatBox_Row_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_StatBox_Row_C* UUMG_BioLab_StatBox_Row_C::GetDefaultObj()
{
	static class UUMG_BioLab_StatBox_Row_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_StatBox_Row_C*>(UUMG_BioLab_StatBox_Row_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ShowComparison
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatComparisonResult       Comparison                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_BioLab_StatBox_Row_C::ShowComparison(const struct FStatComparisonResult& Comparison)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_Row_C", "ShowComparison");

	Params::UUMG_BioLab_StatBox_Row_C_ShowComparison_Params Parms{};

	Parms.Comparison = Comparison;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.HideComparison
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_StatBox_Row_C::HideComparison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_Row_C", "HideComparison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ShowStatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatsRowHandle             Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_StatBox_Row_C::ShowStatValue(const struct FStatsRowHandle& Stat, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_Row_C", "ShowStatValue");

	Params::UUMG_BioLab_StatBox_Row_C_ShowStatValue_Params Parms{};

	Parms.Stat = Stat;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_StatBox_Row_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_Row_C", "PreConstruct");

	Params::UUMG_BioLab_StatBox_Row_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ExecuteUbergraph_UMG_BioLab_StatBox_Row
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatComparisonResult       K2Node_CustomEvent_Comparison                                    (NoDestructor)
// struct FIcarusStatDescription      CallFunc_GetStatsStruct_Stats                                    (None)
// enum class EValid                  CallFunc_GetStatsStruct_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetStatTitleBP_TitleDescription                         (None)
// enum class EFunctionOutcome        CallFunc_GetStatTitleBP_Outcome                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsEnum                  CallFunc_RowHandleToStruct_ReturnValue_1                         (HasGetValueTypeHash)
// class FText                        CallFunc_GetStatTitleBP_TitleDescription_1                       (None)
// enum class EFunctionOutcome        CallFunc_GetStatTitleBP_Outcome_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatComparisonResult       K2Node_MakeStruct_StatComparisonResult                           (NoDestructor)
// struct FStatsRowHandle             K2Node_CustomEvent_Stat                                          (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusStatDescription      CallFunc_GetStatsStruct_Stats_1                                  (None)
// enum class EValid                  CallFunc_GetStatsStruct_Paths_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsEnum                  CallFunc_RowHandleToStruct_ReturnValue_2                         (HasGetValueTypeHash)
// class FText                        CallFunc_GetStatTitleBP_TitleDescription_2                       (None)
// enum class EFunctionOutcome        CallFunc_GetStatTitleBP_Outcome_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_StatBox_Row_C::ExecuteUbergraph_UMG_BioLab_StatBox_Row(int32 EntryPoint, const struct FStatComparisonResult& K2Node_CustomEvent_Comparison, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetStatTitleBP_TitleDescription, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue_1, class FText CallFunc_GetStatTitleBP_TitleDescription_1, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FStatComparisonResult& K2Node_MakeStruct_StatComparisonResult, const struct FStatsRowHandle& K2Node_CustomEvent_Stat, int32 K2Node_CustomEvent_Value, bool K2Node_Event_IsDesignTime, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats_1, enum class EValid CallFunc_GetStatsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FStatsEnum& CallFunc_RowHandleToStruct_ReturnValue_2, class FText CallFunc_GetStatTitleBP_TitleDescription_2, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_2, bool K2Node_SwitchEnum_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_Row_C", "ExecuteUbergraph_UMG_BioLab_StatBox_Row");

	Params::UUMG_BioLab_StatBox_Row_C_ExecuteUbergraph_UMG_BioLab_StatBox_Row_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Comparison = K2Node_CustomEvent_Comparison;
	Parms.CallFunc_GetStatsStruct_Stats = CallFunc_GetStatsStruct_Stats;
	Parms.CallFunc_GetStatsStruct_Paths = CallFunc_GetStatsStruct_Paths;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetStatTitleBP_TitleDescription = CallFunc_GetStatTitleBP_TitleDescription;
	Parms.CallFunc_GetStatTitleBP_Outcome = CallFunc_GetStatTitleBP_Outcome;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_1 = CallFunc_RowHandleToStruct_ReturnValue_1;
	Parms.CallFunc_GetStatTitleBP_TitleDescription_1 = CallFunc_GetStatTitleBP_TitleDescription_1;
	Parms.CallFunc_GetStatTitleBP_Outcome_1 = CallFunc_GetStatTitleBP_Outcome_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_StatComparisonResult = K2Node_MakeStruct_StatComparisonResult;
	Parms.K2Node_CustomEvent_Stat = K2Node_CustomEvent_Stat;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetStatsStruct_Stats_1 = CallFunc_GetStatsStruct_Stats_1;
	Parms.CallFunc_GetStatsStruct_Paths_1 = CallFunc_GetStatsStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_2 = CallFunc_RowHandleToStruct_ReturnValue_2;
	Parms.CallFunc_GetStatTitleBP_TitleDescription_2 = CallFunc_GetStatTitleBP_TitleDescription_2;
	Parms.CallFunc_GetStatTitleBP_Outcome_2 = CallFunc_GetStatTitleBP_Outcome_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


