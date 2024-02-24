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

// 0x1 (0x1 - 0x0)
// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.PreConstruct
struct UWBP_Tooltip_PocketWatch_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.Tick
struct UWBP_Tooltip_PocketWatch_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.ExecuteUbergraph_WBP_Tooltip_PocketWatch
struct UWBP_Tooltip_PocketWatch_C_ExecuteUbergraph_WBP_Tooltip_PocketWatch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name; // 0x48(0x18)(None)
	bool                                         CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_UI_MapTable                        CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details; // 0x68(0x68)(HasGetValueTypeHash)
};

}
}


