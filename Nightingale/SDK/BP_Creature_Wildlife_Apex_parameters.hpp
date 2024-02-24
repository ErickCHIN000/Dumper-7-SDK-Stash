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
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNodeInstanceLocation
struct ABP_Creature_Wildlife_Apex_C_SetHarvestNodeInstanceLocation_Params
{
public:
	struct FVector                               HarvestNodeInstanceLocation;                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNodeInstancee
struct ABP_Creature_Wildlife_Apex_C_SetHarvestNodeInstancee_Params
{
public:
	int32                                        HarvestNodeInstance;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNode
struct ABP_Creature_Wildlife_Apex_C_SetHarvestNode_Params
{
public:
	class ABP_ResourceNode_IIM_C*                HarvestNode;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNodeInstanceLocation
struct ABP_Creature_Wildlife_Apex_C_GetHarvestNodeInstanceLocation_Params
{
public:
	struct FVector                               ApexHarvestNodeInstanceLocation;                   // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNodeInstance
struct ABP_Creature_Wildlife_Apex_C_GetHarvestNodeInstance_Params
{
public:
	int32                                        HarvestNodeInstance;                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNode
struct ABP_Creature_Wildlife_Apex_C_GetHarvestNode_Params
{
public:
	class ABP_ResourceNodeIIMBase_C*             HarvestNode;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


