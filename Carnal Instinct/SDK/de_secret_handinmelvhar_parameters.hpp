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
// Function de_secret_handinmelvhar.de_secret_handinmelvhar_C.call_event
struct ADe_secret_handinmelvhar_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1E15[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// Function de_secret_handinmelvhar.de_secret_handinmelvhar_C.ExecuteUbergraph_de_secret_handinmelvhar
struct ADe_secret_handinmelvhar_C_ExecuteUbergraph_de_secret_handinmelvhar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 CallFunc_Get_Player_Reference_Player;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           CallFunc_Get_Equipment_Item_by_ID_item;            // 0x18(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Equipment_Item_by_ID_Found;           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Ubp_quest_component_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_layout_widget_is_valid;               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_01_quest_layout_C*                  CallFunc_get_layout_widget_quest_widget;           // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_get_quest_is_valid;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_quest_found_index;                    // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     CallFunc_get_quest_quest_actor;                    // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x138(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}

