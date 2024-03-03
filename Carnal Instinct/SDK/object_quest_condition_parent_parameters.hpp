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

// 0x150 (0x150 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.quest_result_condition
struct AObject_quest_condition_parent_C_Quest_result_condition_Params
{
public:
	struct FS_quest_result                       Quest_result;                                      // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_quest_result                       Return_value;                                      // 0xA8(0xA8)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.objective_result_condition
struct AObject_quest_condition_parent_C_Objective_result_condition_Params
{
public:
	struct FS_quest_objective_result             Objective_result;                                  // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_quest_objective_result             Return_value;                                      // 0xC0(0xC0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.objective_data_condition
struct AObject_quest_condition_parent_C_Objective_data_condition_Params
{
public:
	struct FS_quest_objective_data               Objective_data;                                    // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_quest_objective_data               Return_value;                                      // 0x188(0x188)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x2B0 (0x2B0 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.quest_data_condition
struct AObject_quest_condition_parent_C_Quest_data_condition_Params
{
public:
	struct FS_quest_data                         Quest_data;                                        // 0x0(0x158)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_quest_data                         Return_value;                                      // 0x158(0x158)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.init_condition_object
struct AObject_quest_condition_parent_C_Init_condition_object_Params
{
public:
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Instigator_id;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Objective_id;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Sub_objective_id;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_condition                    Condition_info;                                    // 0x20(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AObject_quest_condition_parent_C*      Quest_condition;                                   // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function object_quest_condition_parent.object_quest_condition_parent_C.ExecuteUbergraph_object_quest_condition_parent
struct AObject_quest_condition_parent_C_ExecuteUbergraph_object_quest_condition_parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


