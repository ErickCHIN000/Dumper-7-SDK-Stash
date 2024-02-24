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

// 0x88 (0x88 - 0x0)
// Function BP_DropshipSeat.BP_DropshipSeat_C.OnRep_SyncedTransform
struct ABP_DropshipSeat_C_OnRep_SyncedTransform_Params
{
public:
	struct FHitResult                            CallFunc_K2_SetActorRelativeTransform_SweepHitResult; // 0x0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xA (0xA - 0x0)
// Function BP_DropshipSeat.BP_DropshipSeat_C.EnterSeat
struct ABP_DropshipSeat_C_EnterSeat_Params
{
public:
	class AIcarusPlayerCharacter*                PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EnterSeat_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_DropshipSeat.BP_DropshipSeat_C.ExecuteUbergraph_BP_DropshipSeat
struct ABP_DropshipSeat_C_ExecuteUbergraph_BP_DropshipSeat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


