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
// Function Ability_Rune_Body_All.Ability_Rune_Body_All_C.OnCausedDeath_Event
struct UAbility_Rune_Body_All_C_OnCausedDeath_Event_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Ability_Rune_Body_All.Ability_Rune_Body_All_C.ExecuteUbergraph_Ability_Rune_Body_All
struct UAbility_Rune_Body_All_C_ExecuteUbergraph_Ability_Rune_Body_All_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_EvaluateConditionType_ReturnValue;     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValue_OutValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableValue_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                      K2Node_CustomEvent_Damaged;                        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   K2Node_CustomEvent_Details;                        // 0x20(0x68)(ConstParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue1;                    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         K2Node_DynamicCast_AsOak_Character;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0xB8(0x28)(NoDestructor, ContainsInstancedReference)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue1;             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue2;             // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0xF0(0x38)(NoDestructor)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x128(0x10)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x138(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4415[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue3;             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_EvaluateConditionType_ReturnValue1;    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1; // 0x168(0x28)(NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate; // 0x190(0x28)(NoDestructor)
};

}
}


