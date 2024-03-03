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

// 0x9 (0x9 - 0x0)
// Function example_npc_base.example_npc_base_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
struct AExample_npc_base_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    Dlg_status;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6A (0x6A - 0x0)
// Function example_npc_base.example_npc_base_C.ExecuteUbergraph_example_npc_base
struct AExample_npc_base_C_ExecuteUbergraph_example_npc_base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       K2Node_ComponentBoundEvent_dlg_actor;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_start                    K2Node_ComponentBoundEvent_dlg_status;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1342[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPrimitiveComponent*>             K2Node_MakeSet_Set;                                // 0x18(0x50)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


