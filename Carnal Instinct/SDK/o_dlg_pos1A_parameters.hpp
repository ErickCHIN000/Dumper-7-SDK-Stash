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
// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_cameras
struct AO_dlg_pos1A_C_Pack_cameras_Params
{
public:
	bool                                         Return_node;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_widgets
struct AO_dlg_pos1A_C_Pack_widgets_Params
{
public:
	bool                                         Return_node;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_actors
struct AO_dlg_pos1A_C_Pack_actors_Params
{
public:
	bool                                         Return_node;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_123D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_get_actor_actor_proxy;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_get_actor_actor_proxy_1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_get_actor_actor_proxy_2;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function o_dlg_pos1A.o_dlg_pos1A_C.ExecuteUbergraph_o_dlg_pos1A
struct AO_dlg_pos1A_C_ExecuteUbergraph_o_dlg_pos1A_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


