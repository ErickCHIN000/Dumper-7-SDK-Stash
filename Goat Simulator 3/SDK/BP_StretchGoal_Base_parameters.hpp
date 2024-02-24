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
// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.GoalChangedState
struct ABP_StretchGoal_Base_C_GoalChangedState_Params
{
public:
	enum class EStretchGoalStates                NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStateChangeSource                ChangeSource;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.CurrentStateReplicated
struct ABP_StretchGoal_Base_C_CurrentStateReplicated_Params
{
public:
	enum class EStretchGoalStates                NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.ExecuteUbergraph_BP_StretchGoal_Base
struct ABP_StretchGoal_Base_C_ExecuteUbergraph_BP_StretchGoal_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EStretchGoalStates                K2Node_Event_NewState_1;                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStateChangeSource                K2Node_Event_ChangeSource;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretchGoalStates                K2Node_Event_NewState;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


