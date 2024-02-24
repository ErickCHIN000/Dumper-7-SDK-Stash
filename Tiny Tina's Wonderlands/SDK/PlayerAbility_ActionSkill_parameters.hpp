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

// 0x11 (0x11 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetOakCharacterPlayer
struct UPlayerAbility_ActionSkill_C_GetOakCharacterPlayer_Params
{
public:
	class AOakCharacter_Player*                  Res;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPlayerCharacterComponent
struct UPlayerAbility_ActionSkill_C_GetPlayerCharacterComponent_Params
{
public:
	class UPlayerCharacterComponent*             Res;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkillHold
struct UPlayerAbility_ActionSkill_C_HandleStopActionSkillHold_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkillHold
struct UPlayerAbility_ActionSkill_C_HandleStartActionSkillHold_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkill
struct UPlayerAbility_ActionSkill_C_HandleStopActionSkill_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkill
struct UPlayerAbility_ActionSkill_C_HandleStartActionSkill_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetActionSkill
struct UPlayerAbility_ActionSkill_C_GetActionSkill_Params
{
public:
	class UOakActionAbility*                     Res;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakActionAbility*                     CallFunc_GetPrimaryActionAbility_ReturnValue;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8
struct UPlayerAbility_ActionSkill_C_GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.ExecuteUbergraph_PlayerAbility_ActionSkill
struct UPlayerAbility_ActionSkill_C_ExecuteUbergraph_PlayerAbility_ActionSkill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1292[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  CallFunc_GetOakCharacterPlayer_Res;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action4;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryStopSecondarySpell_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartSecondarySpell_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1296[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action3;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action2;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action1;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable1;                               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action5;       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakActionAbility*                     CallFunc_GetActionSkill_Res;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakActionAbility*                     CallFunc_GetActionSkill_Res1;                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakActionAbility*                     CallFunc_GetActionSkill_Res2;                      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action6;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterComponent*             CallFunc_GetPlayerCharacterComponent_Res;          // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterComponent*             CallFunc_GetPlayerCharacterComponent_Res1;         // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable2;                               // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterComponent*             CallFunc_GetPlayerCharacterComponent_Res2;         // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action7;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


