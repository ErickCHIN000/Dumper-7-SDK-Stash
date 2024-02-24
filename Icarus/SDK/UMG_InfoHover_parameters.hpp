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
// Function UMG_InfoHover.UMG_InfoHover_C.SetInnerTooltipText
struct UUMG_InfoHover_C_SetInnerTooltipText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function UMG_InfoHover.UMG_InfoHover_C.ExecuteUbergraph_UMG_InfoHover
struct UUMG_InfoHover_C_ExecuteUbergraph_UMG_InfoHover_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_InfoHoverText_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_InText;                         // 0x10(0x18)(None)
};

}
}


