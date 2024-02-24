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

// 0xA (0xA - 0x0)
// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.Enchantment_OnReload
struct UAbility_All_Guns_Reload_Companion_C_Enchantment_OnReload_Params
{
public:
	class AWeapon*                               EventWeapon;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCompleted;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoGiven;                                        // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.ExecuteUbergraph_Ability_All_Guns_Reload_Companion
struct UAbility_All_Guns_Reload_Companion_C_ExecuteUbergraph_Ability_All_Guns_Reload_Companion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               K2Node_Event_EventWeapon;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCompleted;                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAmmoGiven;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0x18(0x18)(NoDestructor)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x30(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x68(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


