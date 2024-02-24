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

// 0x5 (0x5 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI “√»¢Û…¢¶ß§L’‚åã
struct AAI_NPC_Barrett_009_C_AI___________L_____Params
{
public:
	bool                                         InputBoolFlag;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         L__K__;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValueFlag;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT____________________2_______; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT____________________2_ReturnValueFlag; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI “√»¢Û…¢¶ß§L’•—
struct AAI_NPC_Barrett_009_C_AI___________L____Params
{
public:
	bool                                         InputBoolFlag;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         L__K__;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnBoolFlag;                                    // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT___________________2_______;  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AI “√»¢Û…¢¶ß§L’Ö_
struct AAI_NPC_Barrett_009_C_AI___________L____Params
{
public:
	bool                                         InputBoolFlag;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         L__K__;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnBoolFlag;                                    // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT___________________2_______;  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIHateTargetChanged
struct AAI_NPC_Barrett_009_C_AIHateTargetChanged_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.AIReaction
struct AAI_NPC_Barrett_009_C_AIReaction_Params
{
public:
	enum class ETTLAIReaction                    Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLAIReactionParam                   Param;                                             // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x69 (0x69 - 0x0)
// Function AI_NPC_Barrett_009.AI_NPC_Barrett_009_C.ExecuteUbergraph_AI_NPC_Barrett_009
struct AAI_NPC_Barrett_009_C_ExecuteUbergraph_AI_NPC_Barrett_009_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActionNone_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_targetActor;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLAIReaction                    K2Node_Event_Type;                                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLAIReactionParam                   K2Node_Event_param;                                // 0x18(0x30)(None)
	bool                                         CallFunc_PresetAI_ACT___________ReturnValue;       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT_____________________;        // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT______________________;       // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT_____________________1;       // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT_______________________;      // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT______________________1;      // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PresetAI_ACT_______________________1;     // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_FinishParallelAttack_ReturnValue;         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActionExchangeWeapon_ReturnValue;         // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLAIActionType                  CallFunc_IsContinuedSameAIAction_CurrentAction;    // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsContinuedSameAIAction_ReturnValue;      // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActionChangeWeapon_ReturnValue;           // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWeaponRange_ReturnValue;               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC________Do_Routine;                    // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActionGoAroundSide_ReturnValue;           // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLAITrueFalseEnum               CallFunc_BranchOnSwitch_OutputTrueFalse;           // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_PresetAI_ACT________NewTargetContainer;   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActionNonParallelAttack_ReturnValue;    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


