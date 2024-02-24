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
// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.Set Requirements
struct UUMG_SettingTooltipHover_C_Set_Requirements_Params
{
public:
	TArray<class FText>                          Descriptions;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                 States;                                            // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x31 (0x31 - 0x0)
// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.ExecuteUbergraph_UMG_SettingTooltipHover
struct UUMG_SettingTooltipHover_C_ExecuteUbergraph_UMG_SettingTooltipHover_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_CustomEvent_Descriptions;                   // 0x8(0x10)(ConstParm, ReferenceParm)
	TArray<bool>                                 K2Node_CustomEvent_States;                         // 0x18(0x10)(ConstParm, ReferenceParm)
	class UUMG_SettingTooltipText_C*             CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


