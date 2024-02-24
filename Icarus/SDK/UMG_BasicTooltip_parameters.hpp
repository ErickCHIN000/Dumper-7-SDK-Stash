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

// 0x18 (0x18 - 0x0)
// Function UMG_BasicTooltip.UMG_BasicTooltip_C.SetText
struct UUMG_BasicTooltip_C_SetText_Params
{
public:
	class FText                                  ToolTipText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function UMG_BasicTooltip.UMG_BasicTooltip_C.ExecuteUbergraph_UMG_BasicTooltip
struct UUMG_BasicTooltip_C_ExecuteUbergraph_UMG_BasicTooltip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_ToolTipText;                    // 0x8(0x18)(None)
};

}
}


