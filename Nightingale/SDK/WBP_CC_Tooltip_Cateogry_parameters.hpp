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

// 0x50 (0x50 - 0x0)
// Function WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C.SetNewTooltipText
struct UWBP_CC_Tooltip_Cateogry_C_SetNewTooltipText_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringWithOutMarkUp_ReturnValue;       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_Tooltip_Cateogry.WBP_CC_Tooltip_Cateogry_C.ExecuteUbergraph_WBP_CC_Tooltip_Cateogry
struct UWBP_CC_Tooltip_Cateogry_C_ExecuteUbergraph_WBP_CC_Tooltip_Cateogry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


