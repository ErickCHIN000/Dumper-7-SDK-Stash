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

// 0x31 (0x31 - 0x0)
// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.QueryRingStatusEffect
struct UAbility_Ring_Cond_LowAmmo_C_QueryRingStatusEffect_Params
{
public:
	bool                                         HasStatusEffect;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectQuery                    K2Node_MakeStruct_StatusEffectQuery;               // 0x8(0x18)(NoDestructor)
	struct FStatusEffectQueryResult              CallFunc_QueryStatusEffect_ReturnValue;            // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function Ability_Ring_Cond_LowAmmo.Ability_Ring_Cond_LowAmmo_C.ExecuteUbergraph_Ability_Ring_Cond_LowAmmo
struct UAbility_Ring_Cond_LowAmmo_C_ExecuteUbergraph_Ability_Ring_Cond_LowAmmo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4095[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	class AWeapon*                               CallFunc_GetActiveWeapon_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfAttribute_ReturnValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x30(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x68(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_QueryRingStatusEffect_HasStatusEffect;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_QueryRingStatusEffect_HasStatusEffect1;   // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x88(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


