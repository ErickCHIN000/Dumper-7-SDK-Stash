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

// 0x90 (0x90 - 0x0)
// Function Ability_Bladesinger_Spell.Ability_Bladesinger_Spell_C.ExecuteUbergraph_Ability_Bladesinger_Spell
struct UAbility_Bladesinger_Spell_C_ExecuteUbergraph_Ability_Bladesinger_Spell_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x18(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue1;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue1;                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x40(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x78(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}

