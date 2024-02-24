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

// 0x71 (0x71 - 0x0)
// Function _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C.OakPassiveTriggerKillSkillEffect
struct U_Passive_KillSkill_Parent_C_OakPassiveTriggerKillSkillEffect_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bWasAutoTrigger;                                   // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C.ExecuteUbergraph__Passive_KillSkill_Parent
struct U_Passive_KillSkill_Parent_C_ExecuteUbergraph__Passive_KillSkill_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageComponent*                      K2Node_Event_Damaged;                              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   K2Node_Event_Details;                              // 0x10(0x68)(None)
	bool                                         K2Node_Event_bWasAutoTrigger;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


