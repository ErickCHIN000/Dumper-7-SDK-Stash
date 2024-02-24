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
// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_TimeText_Text_0
struct UWid_FractalDateSplash_C_Get_TimeText_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x30 (0x30 - 0x0)
// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_Countdown_Text_0
struct UWid_FractalDateSplash_C_Get_Countdown_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_Current_Text_0
struct UWid_FractalDateSplash_C_Get_Current_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x41 (0x41 - 0x0)
// Function wid_FractalDateSplash.wid_FractalDateSplash_C.ExecuteUbergraph_wid_FractalDateSplash
struct UWid_FractalDateSplash_C_ExecuteUbergraph_wid_FractalDateSplash_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStr_FractalLocationsDates            CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


