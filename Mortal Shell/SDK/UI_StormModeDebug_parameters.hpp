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

// 0x38 (0x38 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_25
struct UUI_StormModeDebug_C_GetText_25_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsInputEnabled_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2267[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x20(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_24
struct UUI_StormModeDebug_C_GetText_24_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_StormMode_GetEquippedLute_Lute;           // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x38(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_23
struct UUI_StormModeDebug_C_GetText_23_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_22
struct UUI_StormModeDebug_C_GetText_22_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_GoldenPathDialogueCounterName_PCIntName;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2319[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_21
struct UUI_StormModeDebug_C_GetText_21_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_234B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_20
struct UUI_StormModeDebug_C_GetText_20_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FName                                  CallFunc_GetAscensionName_ID;                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_19
struct UUI_StormModeDebug_C_GetText_19_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_SeedDial_NextIndex_PCIntName;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_18
struct UUI_StormModeDebug_C_GetText_18_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormModeContentIsEnabled_Enabled_;       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x30(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_17
struct UUI_StormModeDebug_C_GetText_17_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TScriptInterface<class IGameInstanceHUDInterface_C> CallFunc_StormModeIsActive_self_CastInput;         // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormModeIsActive_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2420[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x30(0x18)(None)
};

// 0x211 (0x211 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetUpgradesProgress
struct UUI_StormModeDebug_C_GetUpgradesProgress_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     SelectCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_249C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
	int32                                        Local_MiscLenght;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Local_Category;                                    // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Value;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24AE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24BD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x50(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x68(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSpecialEffectRune__ReturnValue;        // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_3;             // 0xC0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasImprovementRune__ReturnValue;          // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x100(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_4;             // 0x118(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_5;             // 0x140(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x168(0x18)(None)
	bool                                         CallFunc_HasSpecialEffectRune__ReturnValue_1;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_6;             // 0x188(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_7;             // 0x1B0(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1D8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_8;             // 0x1F0(0x18)(None)
	bool                                         CallFunc_HasImprovementRune__ReturnValue_1;        // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2509[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_12
struct UUI_StormModeDebug_C_UpgradeProgress_12_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_11
struct UUI_StormModeDebug_C_UpgradeProgress_11_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_10
struct UUI_StormModeDebug_C_UpgradeProgress_10_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_9
struct UUI_StormModeDebug_C_UpgradeProgress_9_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_8
struct UUI_StormModeDebug_C_UpgradeProgress_8_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_7
struct UUI_StormModeDebug_C_UpgradeProgress_7_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_6
struct UUI_StormModeDebug_C_UpgradeProgress_6_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_5
struct UUI_StormModeDebug_C_UpgradeProgress_5_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_4
struct UUI_StormModeDebug_C_UpgradeProgress_4_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_3
struct UUI_StormModeDebug_C_UpgradeProgress_3_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_Rune_Category_Randomizer     Local_Category;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Value;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_2
struct UUI_StormModeDebug_C_UpgradeProgress_2_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_1
struct UUI_StormModeDebug_C_UpgradeProgress_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_0
struct UUI_StormModeDebug_C_UpgradeProgress_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_GetUpgradesProgress_ReturnValue;          // 0x18(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_16
struct UUI_StormModeDebug_C_GetText_16_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2732[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_15
struct UUI_StormModeDebug_C_GetText_15_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2764[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_14
struct UUI_StormModeDebug_C_GetText_14_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_13
struct UUI_StormModeDebug_C_GetText_13_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_12
struct UUI_StormModeDebug_C_GetText_12_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_11
struct UUI_StormModeDebug_C_GetText_11_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_10
struct UUI_StormModeDebug_C_GetText_10_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_9
struct UUI_StormModeDebug_C_GetText_9_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2895[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_8
struct UUI_StormModeDebug_C_GetText_8_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_7
struct UUI_StormModeDebug_C_GetText_7_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_TransformToText_ReturnValue;         // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_6
struct UUI_StormModeDebug_C_GetText_6_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_5
struct UUI_StormModeDebug_C_GetText_5_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_4
struct UUI_StormModeDebug_C_GetText_4_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_3
struct UUI_StormModeDebug_C_GetText_3_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_TransformToText_ReturnValue;         // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_2
struct UUI_StormModeDebug_C_GetText_2_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_1
struct UUI_StormModeDebug_C_GetText_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_0
struct UUI_StormModeDebug_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_3
struct UUI_StormModeDebug_C_GetStormModeAreaProgress_3_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_2
struct UUI_StormModeDebug_C_GetStormModeAreaProgress_2_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_1
struct UUI_StormModeDebug_C_GetStormModeAreaProgress_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_3
struct UUI_StormModeDebug_C_GetStormModeFallgrimProgress_3_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_2
struct UUI_StormModeDebug_C_GetStormModeFallgrimProgress_2_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_1
struct UUI_StormModeDebug_C_GetStormModeFallgrimProgress_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeProgress            Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCathtEntrance
struct UUI_StormModeDebug_C_GetStormModeCathtEntrance_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeArea                Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeAreaState           CallFunc_Map_Find_Value;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C08[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCryptEntrance
struct UUI_StormModeDebug_C_GetStormModeCryptEntrance_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeArea                Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeAreaState           CallFunc_Map_Find_Value;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C5D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFireEntrance
struct UUI_StormModeDebug_C_GetStormModeFireEntrance_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class Enum_StormModeArea                Temp_byte_Variable;                                // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeAreaState           CallFunc_Map_Find_Value;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CA7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentWeapon
struct UUI_StormModeDebug_C_GetStormModeCurrentWeapon_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentShell
struct UUI_StormModeDebug_C_GetStormModeCurrentShell_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentProgress
struct UUI_StormModeDebug_C_GetStormModeCurrentProgress_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_StormModeProgress            CallFunc_GetStormModeProgress_Progress;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x40(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function UI_StormModeDebug.UI_StormModeDebug_C.ExecuteUbergraph_UI_StormModeDebug
struct UUI_StormModeDebug_C_ExecuteUbergraph_UI_StormModeDebug_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URuneInventoryComponent_C*             CallFunc_GetRuneInventory_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_StormMode_C*               K2Node_DynamicCast_AsGameplay_PC_Storm_Mode;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


