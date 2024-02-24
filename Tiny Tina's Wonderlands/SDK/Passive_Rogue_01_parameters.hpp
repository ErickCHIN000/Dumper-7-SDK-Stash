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

// 0x73 (0x73 - 0x0)
// Function Passive_Rogue_01.Passive_Rogue_01_C.HandleChallenge_MaxFollowUpCrit
struct UPassive_Rogue_01_C_HandleChallenge_MaxFollowUpCrit_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  DamageDetails;                                     // 0x8(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UChallengesComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsChallengeComplete_ReturnValue;          // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function Passive_Rogue_01.Passive_Rogue_01_C.IncrementStacks
struct UPassive_Rogue_01_C_IncrementStacks_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function Passive_Rogue_01.Passive_Rogue_01_C.GetManualHUDIconValues
struct UPassive_Rogue_01_C_GetManualHUDIconValues_Params
{
public:
	int32                                        OutStackCount;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutDuration;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutTimeRemaining;                                  // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function Passive_Rogue_01.Passive_Rogue_01_C.OakPassiveOnCausedAnyDamage
struct UPassive_Rogue_01_C_OakPassiveOnCausedAnyDamage_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         DamageSource;                                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x28(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x108 (0x108 - 0x0)
// Function Passive_Rogue_01.Passive_Rogue_01_C.ExecuteUbergraph_Passive_Rogue_01
struct UPassive_Rogue_01_C_ExecuteUbergraph_Passive_Rogue_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAbilityTimerActive_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_DamageInstigator;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         K2Node_Event_DamageSource;                         // 0x20(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0x30(0x60)(ContainsInstancedReference)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Compare_Damage_Source_Equal;              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Compare_Damage_Source_Not_Equal;          // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0x98(0x18)(NoDestructor)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0xB0(0x28)(NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue1; // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1; // 0xE0(0x28)(NoDestructor, ContainsInstancedReference)
};

}
}


