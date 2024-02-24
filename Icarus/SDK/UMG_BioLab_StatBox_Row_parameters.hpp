#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ShowComparison
struct UUMG_BioLab_StatBox_Row_C_ShowComparison_Params
{
public:
	struct FStatComparisonResult                 Comparison;                                        // 0x0(0x24)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ShowStatValue
struct UUMG_BioLab_StatBox_Row_C_ShowStatValue_Params
{
public:
	struct FStatsRowHandle                       Stat;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Value;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.PreConstruct
struct UUMG_BioLab_StatBox_Row_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2EA (0x2EA - 0x0)
// Function UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C.ExecuteUbergraph_UMG_BioLab_StatBox_Row
struct UUMG_BioLab_StatBox_Row_C_ExecuteUbergraph_UMG_BioLab_StatBox_Row_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatComparisonResult                 K2Node_CustomEvent_Comparison;                     // 0x4(0x24)(NoDestructor)
	struct FIcarusStatDescription                CallFunc_GetStatsStruct_Stats;                     // 0x28(0xF0)(None)
	enum class EValid                            CallFunc_GetStatsStruct_Paths;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            CallFunc_RowHandleToStruct_ReturnValue;            // 0x120(0x10)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetStatTitleBP_TitleDescription;          // 0x138(0x18)(None)
	enum class EFunctionOutcome                  CallFunc_GetStatTitleBP_Outcome;                   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            CallFunc_RowHandleToStruct_ReturnValue_1;          // 0x158(0x10)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetStatTitleBP_TitleDescription_1;        // 0x168(0x18)(None)
	enum class EFunctionOutcome                  CallFunc_GetStatTitleBP_Outcome_1;                 // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5505[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatComparisonResult                 K2Node_MakeStruct_StatComparisonResult;            // 0x184(0x24)(NoDestructor)
	struct FStatsRowHandle                       K2Node_CustomEvent_Stat;                           // 0x1A8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Value;                          // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5516[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusStatDescription                CallFunc_GetStatsStruct_Stats_1;                   // 0x1C8(0xF0)(None)
	enum class EValid                            CallFunc_GetStatsStruct_Paths_1;                   // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5526[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            CallFunc_RowHandleToStruct_ReturnValue_2;          // 0x2C0(0x10)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetStatTitleBP_TitleDescription_2;        // 0x2D0(0x18)(None)
	enum class EFunctionOutcome                  CallFunc_GetStatTitleBP_Outcome_2;                 // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


