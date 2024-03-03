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
// Function de_shrine_quest_update.de_shrine_quest_update_C.call_event
struct ADe_shrine_quest_update_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1C4E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function de_shrine_quest_update.de_shrine_quest_update_C.ExecuteUbergraph_de_shrine_quest_update
struct ADe_shrine_quest_update_C_ExecuteUbergraph_de_shrine_quest_update_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_veranus_C*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Interactable_C*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x20(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_get_dlg_actor_is_valid;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_get_dlg_actor_is_component_valid;         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D65[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_dlg_actor_actor_index;                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_get_dlg_actor_actor_reference;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_component_C*                   CallFunc_get_dlg_actor_dlg_component;              // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_bind_actor_info                CallFunc_get_dlg_actor_actor_dynamic;              // 0x68(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ANpc_shrine_C*                         CallFunc_GetActorOfClass_ReturnValue_1;            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_quest_component_C*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Interactable_C*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_quest_is_valid;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_quest_found_index;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     CallFunc_get_quest_quest_actor;                    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


