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

// 0x3 (0x3 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.Get_Inactive_Visibility_0
struct UUMG_ProspectHistoryEntry_C_Get_Inactive_Visibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAvailable_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.GetProspectDifficulty
struct UUMG_ProspectHistoryEntry_C_GetProspectDifficulty_Params
{
public:
	enum class EMissionDifficulty                Difficulty;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.UpdateToolTip
struct UUMG_ProspectHistoryEntry_C_UpdateToolTip_Params
{
public:
	class FText                                  ToolTipText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.SetHasClaimedProspect
struct UUMG_ProspectHistoryEntry_C_SetHasClaimedProspect_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x319 (0x319 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.SetState
struct UUMG_ProspectHistoryEntry_C_SetState_Params
{
public:
	enum class E_ProspectState                   NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ButtonState                     Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51E2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectPinState                    CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State; // 0x8(0x2E5)(HasGetValueTypeHash)
	uint8                                        Pad_51E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_Map_Find_Value;                           // 0x2F0(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.GetTimeRemaining
struct UUMG_ProspectHistoryEntry_C_GetTimeRemaining_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRemainingProspectTime_ReturnValue;     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5280[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FormatRawSecondsToTimeLength_Formatted;   // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
};

// 0x660 (0x660 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.UpdateProspectInfo
struct UUMG_ProspectHistoryEntry_C_UpdateProspectInfo_Params
{
public:
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5382[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetProspectDifficulty_RowName;            // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ProspectState                   CallFunc_CalculateProspectState_ProspectState;     // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDifficultyColour                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x38(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x88(0x18)(None)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0xA0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0xB8(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x382(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53E5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusTerrain                        CallFunc_GetTerrainsStruct_Terrains;               // 0x388(0x130)(None)
	enum class EValid                            CallFunc_GetTerrainsStruct_Paths;                  // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x4C0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x500(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x540(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x558(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x568(0x18)(None)
	struct FProspectInfo                         CallFunc_GetProspectInfo_ReturnValue;              // 0x580(0x90)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x610(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x628(0x18)(None)
	enum class ELastProspectHostType             Temp_byte_Variable;                                // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELastProspectHostType             CallFunc_GetHostType_ReturnValue;                  // 0x641(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5428[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x648(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.BP_OnItemExpansionChanged
struct UUMG_ProspectHistoryEntry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.BP_OnItemSelectionChanged
struct UUMG_ProspectHistoryEntry_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.OnListItemObjectSet
struct UUMG_ProspectHistoryEntry_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C.ExecuteUbergraph_UMG_ProspectHistoryEntry
struct UUMG_ProspectHistoryEntry_C_ExecuteUbergraph_UMG_ProspectHistoryEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5674[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProspectHistoryResult*                K2Node_DynamicCast_AsProspect_History_Result;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_ButtonState                     K2Node_Select_Default;                             // 0x23(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ButtonState                     K2Node_Select_Default_1;                           // 0x24(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_Map_Find_Value;                           // 0x28(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x58(0x28)(None)
};

}
}


