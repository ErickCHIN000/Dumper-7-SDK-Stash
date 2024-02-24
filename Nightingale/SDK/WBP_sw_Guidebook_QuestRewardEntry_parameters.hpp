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
// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.RefreshRewardData
struct UWBP_sw_Guidebook_QuestRewardEntry_C_RefreshRewardData_Params
{
public:
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.GetTooltipWidget_0
struct UWBP_sw_Guidebook_QuestRewardEntry_C_GetTooltipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_Guidebook_QuestRewardEntry.WBP_sw_Guidebook_QuestRewardEntry_C.ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry
struct UWBP_sw_Guidebook_QuestRewardEntry_C_ExecuteUbergraph_WBP_sw_Guidebook_QuestRewardEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


