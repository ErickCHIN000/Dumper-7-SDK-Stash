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
// Function de_update_fightmered.de_update_fightmered_C.call_event
struct ADe_update_fightmered_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1BED[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function de_update_fightmered.de_update_fightmered_C.ExecuteUbergraph_de_update_fightmered
struct ADe_update_fightmered_C_ExecuteUbergraph_de_update_fightmered_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_merednew_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 CallFunc_Get_Player_Reference_Player;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_quest_component_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x28(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1C3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_get_quest_is_valid;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_quest_found_index;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     CallFunc_get_quest_quest_actor;                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


