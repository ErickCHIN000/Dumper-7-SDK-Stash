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

// 0x38 (0x38 - 0x0)
// Function de_seshat_fight.de_seshat_fight_C.call_event
struct ADe_seshat_fight_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1BAF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x348 (0x348 - 0x0)
// Function de_seshat_fight.de_seshat_fight_C.ExecuteUbergraph_de_seshat_fight
struct ADe_seshat_fight_C_ExecuteUbergraph_de_seshat_fight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANPC_Seshat_C*                         CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x20(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_get_dlg_actor_is_valid;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_get_dlg_actor_is_component_valid;         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CBB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_dlg_actor_actor_index;                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_get_dlg_actor_actor_reference;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_component_C*                   CallFunc_get_dlg_actor_dlg_component;              // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_bind_actor_info                CallFunc_get_dlg_actor_actor_dynamic;              // 0x68(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class Ubp_quest_component_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_quest_is_valid;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CDF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_quest_found_index;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     CallFunc_get_quest_quest_actor;                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_objective_objective_exist;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_get_objective_objective_is_current;       // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D24[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_objective_objective_index;            // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_objective_data               CallFunc_get_objective_objective_data;             // 0xC0(0x188)(HasGetValueTypeHash)
	bool                                         CallFunc_get_objective_sub_objective_exist;        // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_objective_sub_objective_index;        // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_sub_objective_data           CallFunc_get_objective_sub_objective_data;         // 0x250(0xF8)(HasGetValueTypeHash)
};

}
}

