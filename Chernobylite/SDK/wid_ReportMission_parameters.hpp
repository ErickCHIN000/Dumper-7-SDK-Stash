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
// Function wid_ReportMission.wid_ReportMission_C.Initialize
struct UWid_ReportMission_C_Initialize_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_791[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     MissionReportRequiredInformation;                  // 0x8(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x980 (0x980 - 0x0)
// Function wid_ReportMission.wid_ReportMission_C.ExecuteUbergraph_wid_ReportMission
struct UWid_ReportMission_C_ExecuteUbergraph_wid_ReportMission_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_872[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x8(0x18)(None)
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x20(0x50)(None)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_879[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0x88(0x150)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_87F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x1E0(0x58)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue_1;             // 0x258(0x150)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue_1;        // 0x3B0(0x58)(None)
	struct FReportItems                          CallFunc_GetQuestResultItems_ReturnValue;          // 0x408(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x420(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_897[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue;                       // 0x448(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_5;    // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReportsTextsDataTableRow             CallFunc_GetQuestResultText_ReturnValue;           // 0x460(0x38)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x498(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x4A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x4B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportInfo                           K2Node_MakeStruct_ReportInfo;                      // 0x4C8(0x60)(None)
	class FString                                CallFunc_ParseReport_ReturnValue;                  // 0x528(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_GenericReports                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x540(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8AE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReportItemsInfo                      CallFunc_Array_Get_Item;                           // 0x57C(0xC)(NoDestructor)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x588(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_8B8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8BA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x680(0x18)(None)
	uint8                                        Pad_8C1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x6A0(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x7F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x808(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Condition;                      // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     K2Node_CustomEvent_MissionReportRequiredInformation; // 0x820(0x40)(ConstParm)
	class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Array_Get_Item_1;                         // 0x860(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x868(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x928(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_Dictionary                        CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x940(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue_1;                     // 0x970(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x978(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x97C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


