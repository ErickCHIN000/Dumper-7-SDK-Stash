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

// 0x40 (0x40 - 0x0)
// Function Passive_Rogue_15.Passive_Rogue_15_C.OakPassiveOnCausedElementalEffect
struct UPassive_Rogue_15_C_OakPassiveOnCausedElementalEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     Spec;                                              // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function Passive_Rogue_15.Passive_Rogue_15_C.ExecuteUbergraph_Passive_Rogue_15
struct UPassive_Rogue_15_C_ExecuteUbergraph_Passive_Rogue_15_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1551[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Target;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_Event_Spec;                                 // 0x10(0x38)(NoDestructor)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x48(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x80(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


