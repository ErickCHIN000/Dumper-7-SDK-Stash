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
// Function Passive_Necromancer_05.Passive_Necromancer_05_C.OakPassiveTriggerKillSkillEffect
struct UPassive_Necromancer_05_C_OakPassiveTriggerKillSkillEffect_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bWasAutoTrigger;                                   // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function Passive_Necromancer_05.Passive_Necromancer_05_C.ExecuteUbergraph_Passive_Necromancer_05
struct UPassive_Necromancer_05_C_ExecuteUbergraph_Passive_Necromancer_05_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageComponent*                      K2Node_Event_Damaged;                              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   K2Node_Event_Details;                              // 0x10(0x68)(None)
	bool                                         K2Node_Event_bWasAutoTrigger;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x88(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0xC0(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


