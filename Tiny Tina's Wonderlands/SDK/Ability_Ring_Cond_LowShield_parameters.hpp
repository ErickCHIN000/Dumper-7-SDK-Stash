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
// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.CE_ShieldNowNotFilled
struct UAbility_Ring_Cond_LowShield_C_CE_ShieldNowNotFilled_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.CE_ShieldNowFilled
struct UAbility_Ring_Cond_LowShield_C_CE_ShieldNowFilled_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};

// 0x120 (0x120 - 0x0)
// Function Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C.ExecuteUbergraph_Ability_Ring_Cond_LowShield
struct UAbility_Ring_Cond_LowShield_C_ExecuteUbergraph_Ability_Ring_Cond_LowShield_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x8(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            K2Node_CustomEvent_ResourcePool1;                  // 0x20(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            K2Node_CustomEvent_ResourcePool;                   // 0x38(0x18)(NoDestructor, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate; // 0x70(0x30)(NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1; // 0xA0(0x30)(NoDestructor, ContainsInstancedReference)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0xD0(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x108(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


