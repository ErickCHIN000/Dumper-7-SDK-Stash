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

// 0xC (0xC - 0x0)
// Function BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C.NetMulticast_Unstuck
struct ABP_Overflow_Bag_Gravestone_C_NetMulticast_Unstuck_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C.ExecuteUbergraph_BP_Overflow_Bag_Gravestone
struct ABP_Overflow_Bag_Gravestone_C_ExecuteUbergraph_BP_Overflow_Bag_Gravestone_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_NewLocation;                    // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x10(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


