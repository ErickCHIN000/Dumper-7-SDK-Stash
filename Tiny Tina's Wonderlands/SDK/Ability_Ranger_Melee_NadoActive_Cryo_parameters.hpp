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
// Function Ability_Ranger_Melee_NadoActive_Cryo.Ability_Ranger_Melee_NadoActive_Cryo_C.Enchantment_ActionSkillActivated
struct UAbility_Ranger_Melee_NadoActive_Cryo_C_Enchantment_ActionSkillActivated_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Ability_Ranger_Melee_NadoActive_Cryo.Ability_Ranger_Melee_NadoActive_Cryo_C.Enchantment_ActionSkillEnded
struct UAbility_Ranger_Melee_NadoActive_Cryo_C_Enchantment_ActionSkillEnded_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function Ability_Ranger_Melee_NadoActive_Cryo.Ability_Ranger_Melee_NadoActive_Cryo_C.ExecuteUbergraph_Ability_Ranger_Melee_NadoActive_Cryo
struct UAbility_Ranger_Melee_NadoActive_Cryo_C_ExecuteUbergraph_Ability_Ranger_Melee_NadoActive_Cryo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakActionAbility*                     K2Node_Event_ActionAbility1;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 K2Node_Event_ActionSkill1;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_600[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x18(0x38)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x58(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakActionAbility*                     K2Node_Event_ActionAbility;                        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 K2Node_Event_ActionSkill;                          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_607[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x88(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


