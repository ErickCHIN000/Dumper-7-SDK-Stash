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

// 0x48 (0x48 - 0x0)
// Function wid_ReportMissonFood_v3.wid_ReportMissonFood_v3_C.Initialize
struct UWid_ReportMissonFood_v3_C_Initialize_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     MissionReportRequiredInformation;                  // 0x8(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x800 (0x800 - 0x0)
// Function wid_ReportMissonFood_v3.wid_ReportMissonFood_v3_C.ExecuteUbergraph_wid_ReportMissonFood_v3
struct UWid_ReportMissonFood_v3_C_ExecuteUbergraph_wid_ReportMissonFood_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C02[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x10(0x50)(None)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Condition;                      // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     K2Node_CustomEvent_MissionReportRequiredInformation; // 0x78(0x40)(ConstParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReportItems                          CallFunc_GetQuestResultItems_ReturnValue;          // 0xC0(0x18)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0xE0(0x150)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x258(0x58)(None)
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x2B0(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportInfo                           K2Node_MakeStruct_ReportInfo;                      // 0x380(0x60)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x3E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReportsTextsDataTableRow             CallFunc_GetQuestResultText_ReturnValue;           // 0x400(0x38)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x438(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ParseReport_ReturnValue;                  // 0x448(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_5;    // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_6;    // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x468(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_1C5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue_1;             // 0x560(0x150)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x6B0(0x18)(None)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue_1;        // 0x6C8(0x58)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x720(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x738(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x758(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C7A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_GenericReports                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x770(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x7A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLocalizedTextInfo                    CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x7B0(0x20)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x7D8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x7F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


