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
// Function de_diamond_finishQuest.de_diamond_finishQuest_C.call_event
struct ADe_diamond_finishQuest_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2B9 (0x2B9 - 0x0)
// Function de_diamond_finishQuest.de_diamond_finishQuest_C.ExecuteUbergraph_de_diamond_finishQuest
struct ADe_diamond_finishQuest_C_ExecuteUbergraph_de_diamond_finishQuest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_bodySystem                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x118)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_bodySystem                         CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x128(0x118)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x250(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1E80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CombatCharacter_C*                 CallFunc_Get_Player_Reference_Player;              // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_layout_widget_is_valid;               // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_01_quest_layout_C*                  CallFunc_get_layout_widget_quest_widget;           // 0x298(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_quest_is_valid;                       // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_quest_found_index;                    // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     CallFunc_get_quest_quest_actor;                    // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANpc_guard1_C*                         CallFunc_GetActorOfClass_ReturnValue;              // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


