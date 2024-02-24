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

// 0x20 (0x20 - 0x0)
// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.UpdateTooltip
struct UWBP_DB_Realms_sw_ListEntry_C_UpdateTooltip_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.SetEnabled
struct UWBP_DB_Realms_sw_ListEntry_C_SetEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.SetPlayerCount
struct UWBP_DB_Realms_sw_ListEntry_C_SetPlayerCount_Params
{
public:
	int32                                        PlayerCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry
struct UWBP_DB_Realms_sw_ListEntry_C_ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_554B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x40(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x58(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.JoinClicked__DelegateSignature
struct UWBP_DB_Realms_sw_ListEntry_C_JoinClicked__DelegateSignature_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


