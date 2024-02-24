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

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.FocusDefaultWidget
struct UWBP_DB_Shard_sw_ListEntry_C_FocusDefaultWidget_Params
{
public:
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.OnFocusReceived
struct UWBP_DB_Shard_sw_ListEntry_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.Get Select Is Enabled
struct UWBP_DB_Shard_sw_ListEntry_C_Get_Select_Is_Enabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry
struct UWBP_DB_Shard_sw_ListEntry_C_ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.SelectClicked__DelegateSignature
struct UWBP_DB_Shard_sw_ListEntry_C_SelectClicked__DelegateSignature_Params
{
public:
	class FString                                Shard;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


