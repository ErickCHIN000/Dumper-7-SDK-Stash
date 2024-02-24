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

// 0x30 (0x30 - 0x0)
// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipBodyText
struct UWBP_PlayerDeathChestMapPin_C_GetTooltipBodyText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipCoordText
struct UWBP_PlayerDeathChestMapPin_C_GetTooltipCoordText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_Conv_VectorToText_ReturnValue;            // 0x18(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipTitleText
struct UWBP_PlayerDeathChestMapPin_C_GetTooltipTitleText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x18(0x120)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x138(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x150(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1B0(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.ExecuteUbergraph_WBP_PlayerDeathChestMapPin
struct UWBP_PlayerDeathChestMapPin_C_ExecuteUbergraph_WBP_PlayerDeathChestMapPin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


