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
// Function object_quest_event_parent.object_quest_event_parent_C.init_event_object
struct AObject_quest_event_parent_C_Init_event_object_Params
{
public:
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        Event_data;                                        // 0x8(0x25)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_20BC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function object_quest_event_parent.object_quest_event_parent_C.call_event
struct AObject_quest_event_parent_C_Call_event_Params
{
public:
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        Event_data;                                        // 0x8(0x25)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_20E1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function object_quest_event_parent.object_quest_event_parent_C.ExecuteUbergraph_object_quest_event_parent
struct AObject_quest_event_parent_C_ExecuteUbergraph_object_quest_event_parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_210C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_quest_actor_C*                     K2Node_CustomEvent_quest_actor;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        K2Node_CustomEvent_event_data;                     // 0x10(0x25)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_2113[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


