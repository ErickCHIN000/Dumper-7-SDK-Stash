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

// 0x4 (0x4 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.SetAppTab
struct UWid_pda_IFullScreen_C_SetAppTab_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.GetName
struct UWid_pda_IFullScreen_C_GetName_Params
{
public:
	int32                                        AltNameID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.CanHidePhone
struct UWid_pda_IFullScreen_C_CanHidePhone_Params
{
public:
	bool                                         CanHide;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputAxisX
struct UWid_pda_IFullScreen_C_InputAxisX_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputAxisY
struct UWid_pda_IFullScreen_C_InputAxisY_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.SwitchToMapApp
struct UWid_pda_IFullScreen_C_SwitchToMapApp_Params
{
public:
	class Abp_MinimapTag_C*                      Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.ExecuteUbergraph_wid_pda_IFullScreen
struct UWid_pda_IFullScreen_C_ExecuteUbergraph_wid_pda_IFullScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Axis_1;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Axis;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_MinimapTag_C*                      K2Node_CustomEvent_Tag;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


