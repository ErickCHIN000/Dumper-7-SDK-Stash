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

// 0x2 (0x2 - 0x0)
// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionSetBreathWeaponEnable
struct UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionSetBreathWeaponEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionStartEffect
struct UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionStartEffect_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionPlayDragonBreath3rd
struct UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionPlayDragonBreath3rd_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames
struct UActionSkill_KotC_AS3_CleansingFlames_C_ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         K2Node_Event_Enable;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


