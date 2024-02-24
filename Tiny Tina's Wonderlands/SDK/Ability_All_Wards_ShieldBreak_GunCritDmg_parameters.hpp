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

// 0x24 (0x24 - 0x0)
// Function Ability_All_Wards_ShieldBreak_GunCritDmg.Ability_All_Wards_ShieldBreak_GunCritDmg_C.OnAbilityTimerEnded
struct UAbility_All_Wards_ShieldBreak_GunCritDmg_C_OnAbilityTimerEnded_Params
{
public:
	struct FOakAbilityTimerSpec                  Spec;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FOakAbilityTimerResult                Result;                                            // 0x18(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Ability_All_Wards_ShieldBreak_GunCritDmg.Ability_All_Wards_ShieldBreak_GunCritDmg_C.Enchantment_Shield_NowDepleted
struct UAbility_All_Wards_ShieldBreak_GunCritDmg_C_Enchantment_Shield_NowDepleted_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function Ability_All_Wards_ShieldBreak_GunCritDmg.Ability_All_Wards_ShieldBreak_GunCritDmg_C.Enchantment_Shield_Filled
struct UAbility_All_Wards_ShieldBreak_GunCritDmg_C_Enchantment_Shield_Filled_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0xF8 (0xF8 - 0x0)
// Function Ability_All_Wards_ShieldBreak_GunCritDmg.Ability_All_Wards_ShieldBreak_GunCritDmg_C.ExecuteUbergraph_Ability_All_Wards_ShieldBreak_GunCritDmg
struct UAbility_All_Wards_ShieldBreak_GunCritDmg_C_ExecuteUbergraph_Ability_All_Wards_ShieldBreak_GunCritDmg_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x8(0x18)(NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0x28(0x18)(NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakAbilityTimerSpec                  K2Node_Event_Spec;                                 // 0x48(0x18)(ConstParm, NoDestructor)
	struct FOakAbilityTimerResult                K2Node_Event_Result;                               // 0x60(0xC)(ConstParm, NoDestructor)
	uint8                                        Pad_3CC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x70(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool1;                        // 0xA0(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool;                         // 0xB8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1; // 0xD0(0x28)(NoDestructor, ContainsInstancedReference)
};

}
}


