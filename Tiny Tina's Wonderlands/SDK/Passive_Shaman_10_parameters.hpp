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
// Function Passive_Shaman_10.Passive_Shaman_10_C.OakPassiveOnCausedElementalEffect
struct UPassive_Shaman_10_C_OakPassiveOnCausedElementalEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     Spec;                                              // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function Passive_Shaman_10.Passive_Shaman_10_C.ExecuteUbergraph_Passive_Shaman_10
struct UPassive_Shaman_10_C_ExecuteUbergraph_Passive_Shaman_10_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Target;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_Event_Spec;                                 // 0x18(0x38)(NoDestructor)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x50(0x38)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x90(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


