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

// 0x4 (0x4 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.IncreaseRank
struct UUI_StormModeUpgrade_Entry_C_IncreaseRank_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.ReachedMaxRank?
struct UUI_StormModeUpgrade_Entry_C_ReachedMaxRank__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CanBuy?
struct UUI_StormModeUpgrade_Entry_C_CanBuy__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_641[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_647[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CanBuyColor
struct UUI_StormModeUpgrade_Entry_C_CanBuyColor_Params
{
public:
	bool                                         CanBuy;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           SlateColor;                                        // 0x8(0x28)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_666[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x68(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.SetHighlighted
struct UUI_StormModeUpgrade_Entry_C_SetHighlighted_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CreateRankText
struct UUI_StormModeUpgrade_Entry_C_CreateRankText_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x28(0x18)(None)
	class FString                                Temp_string_Variable;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA0(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.PopulateUpgradeData
struct UUI_StormModeUpgrade_Entry_C_PopulateUpgradeData_Params
{
public:
	class FName                                  RowID;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RankID;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  UpgradeName;                                       // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  UpgradeDescription;                                // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        AmountOfRanks;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RankDelta;                                         // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RankStartingCost;                                  // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RankCostDelta;                                     // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormMode_CurrencyType       UpgradeCurrency;                                   // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MathSymbol;                                        // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Has_;                                              // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_71E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetTierColors_ReturnValue;                // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x88(0x28)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xB0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xC8(0x18)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBuy__ReturnValue;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_CanBuyColor_SlateColor;                   // 0xF0(0x28)(None)
	bool                                         CallFunc_ReachedMaxRank__ReturnValue;              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_731[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level;       // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CreateRankText_ReturnValue;               // 0x128(0x18)(None)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CreateRankText_ReturnValue_1;             // 0x148(0x18)(None)
	class FText                                  CallFunc_RuneUpgrade_BuildText_X__ReturnValue;     // 0x160(0x18)(None)
};

// 0x6 (0x6 - 0x0)
// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.ExecuteUbergraph_UI_StormModeUpgrade_Entry
struct UUI_StormModeUpgrade_Entry_C_ExecuteUbergraph_UI_StormModeUpgrade_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


