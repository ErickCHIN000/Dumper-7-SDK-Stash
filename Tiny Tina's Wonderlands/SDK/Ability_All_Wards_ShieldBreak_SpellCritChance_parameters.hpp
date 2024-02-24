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

// 0x18 (0x18 - 0x0)
// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.Enchantment_Shield_NowDepleted
struct UAbility_All_Wards_ShieldBreak_SpellCritChance_C_Enchantment_Shield_NowDepleted_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.Enchantment_Shield_Filled
struct UAbility_All_Wards_ShieldBreak_SpellCritChance_C_Enchantment_Shield_Filled_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0xA8 (0xA8 - 0x0)
// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance
struct UAbility_All_Wards_ShieldBreak_SpellCritChance_C_ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool1;                        // 0x8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool;                         // 0x20(0x18)(NoDestructor, ContainsInstancedReference)
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x38(0x18)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x58(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x90(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


