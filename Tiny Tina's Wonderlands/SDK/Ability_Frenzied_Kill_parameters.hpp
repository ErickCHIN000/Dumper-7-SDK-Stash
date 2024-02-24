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
// Function Ability_Frenzied_Kill.Ability_Frenzied_Kill_C.OnCausedDeath
struct UAbility_Frenzied_Kill_C_OnCausedDeath_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x128 (0x128 - 0x0)
// Function Ability_Frenzied_Kill.Ability_Frenzied_Kill_C.ExecuteUbergraph_Ability_Frenzied_Kill
struct UAbility_Frenzied_Kill_C_ExecuteUbergraph_Ability_Frenzied_Kill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageComponent*                      K2Node_CustomEvent_Damaged;                        // 0x30(0x8)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   K2Node_CustomEvent_Details;                        // 0x38(0x68)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0xB0(0x38)(NoDestructor)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate; // 0xE8(0x28)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x110(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


