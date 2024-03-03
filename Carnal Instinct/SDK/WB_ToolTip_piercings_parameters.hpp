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
// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.GetText_1
struct UWB_ToolTip_piercings_C_GetText_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x51 (0x51 - 0x0)
// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Rarity Text Color
struct UWB_ToolTip_piercings_C_Set_Rarity_Text_Color_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           CallFunc_Set_Rarity_Color_Color;                   // 0x28(0x28)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Rarity
struct UWB_ToolTip_piercings_C_Set_Rarity_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.ExecuteUbergraph_WB_ToolTip_piercings
struct UWB_ToolTip_piercings_C_ExecuteUbergraph_WB_ToolTip_piercings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


