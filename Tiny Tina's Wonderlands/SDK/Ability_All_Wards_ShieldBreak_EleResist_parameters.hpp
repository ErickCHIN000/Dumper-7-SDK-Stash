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
// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.Enchantment_Shield_NowDepleted
struct UAbility_All_Wards_ShieldBreak_EleResist_C_Enchantment_Shield_NowDepleted_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.Enchantment_Shield_Filled
struct UAbility_All_Wards_ShieldBreak_EleResist_C_Enchantment_Shield_Filled_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x24 (0x24 - 0x0)
// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.OnAbilityTimerEnded
struct UAbility_All_Wards_ShieldBreak_EleResist_C_OnAbilityTimerEnded_Params
{
public:
	struct FOakAbilityTimerSpec                  Spec;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FOakAbilityTimerResult                Result;                                            // 0x18(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist
struct UAbility_All_Wards_ShieldBreak_EleResist_C_ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4018[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool1;                        // 0x8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            K2Node_Event_ResourcePool;                         // 0x20(0x18)(NoDestructor, ContainsInstancedReference)
	struct FOakAbilityTimerSpec                  K2Node_Event_Spec;                                 // 0x38(0x18)(ConstParm, NoDestructor)
	struct FOakAbilityTimerResult                K2Node_Event_Result;                               // 0x50(0xC)(ConstParm, NoDestructor)
	uint8                                        Pad_402A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x60(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4034[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x90(0x18)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_403A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0xB0(0x18)(NoDestructor)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1; // 0xC8(0x28)(NoDestructor, ContainsInstancedReference)
};

}
}


