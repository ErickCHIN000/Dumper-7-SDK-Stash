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
// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.Enchantment_ActionSkillEnded
struct UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_Enchantment_ActionSkillEnded_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.OnAbilityTimerEnded
struct UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_OnAbilityTimerEnded_Params
{
public:
	struct FOakAbilityTimerSpec                  Spec;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FOakAbilityTimerResult                Result;                                            // 0x18(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.Enchantment_ActionSkillActivated
struct UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_Enchantment_ActionSkillActivated_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed
struct UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4094[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x8(0x18)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0x28(0x18)(NoDestructor)
	class UOakActionAbility*                     K2Node_Event_ActionAbility1;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 K2Node_Event_ActionSkill1;                         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x60(0x8)(NoDestructor)
	struct FOakAbilityTimerSpec                  K2Node_Event_Spec;                                 // 0x68(0x18)(ConstParm, NoDestructor)
	struct FOakAbilityTimerResult                K2Node_Event_Result;                               // 0x80(0xC)(ConstParm, NoDestructor)
	uint8                                        Pad_40D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x90(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0xC8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0xE0(0x10)(NoDestructor)
	class UOakActionAbility*                     K2Node_Event_ActionAbility;                        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 K2Node_Event_ActionSkill;                          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_410E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec1;         // 0x100(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue1;          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_411B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec1;               // 0x118(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue1;             // 0x150(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


