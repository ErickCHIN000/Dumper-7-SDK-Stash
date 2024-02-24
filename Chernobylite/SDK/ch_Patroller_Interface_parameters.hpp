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
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.SetHasSeenPlayer
struct ICh_Patroller_Interface_C_SetHasSeenPlayer_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.SetHasFoughtPlayer
struct ICh_Patroller_Interface_C_SetHasFoughtPlayer_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetHasFoughtPlayer
struct ICh_Patroller_Interface_C_GetHasFoughtPlayer_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetHasSeenPlayer
struct ICh_Patroller_Interface_C_GetHasSeenPlayer_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetIndicatorPosition
struct ICh_Patroller_Interface_C_GetIndicatorPosition_Params
{
public:
	class USceneComponent*                       IndicatorPosition;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetMapTag
struct ICh_Patroller_Interface_C_GetMapTag_Params
{
public:
	class Abp_MinimapTag_C*                      MapTag;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetDialogueComponent
struct ICh_Patroller_Interface_C_GetDialogueComponent_Params
{
public:
	class UDialogueComponent*                    DialogueComponent;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


