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

// 0x70 (0x70 - 0x0)
// Function Ability_All_Melee_SpellBlade.Ability_All_Melee_SpellBlade_C.DoHiltMod_Hit
struct UAbility_All_Melee_SpellBlade_C_DoHiltMod_Hit_Params
{
public:
	class UGbxDamageType*                        DamageType;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x138 (0x138 - 0x0)
// Function Ability_All_Melee_SpellBlade.Ability_All_Melee_SpellBlade_C.ExecuteUbergraph_Ability_All_Melee_SpellBlade
struct UAbility_All_Melee_SpellBlade_C_ExecuteUbergraph_Ability_All_Melee_SpellBlade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F7E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x8(0x18)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F83[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x28(0x28)(NoDestructor, ContainsInstancedReference)
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0x50(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0x60(0x60)(ContainsInstancedReference)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0xC0(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0xF8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1; // 0x110(0x28)(NoDestructor, ContainsInstancedReference)
};

}
}


