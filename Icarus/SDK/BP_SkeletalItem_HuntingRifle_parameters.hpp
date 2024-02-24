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
// Function BP_SkeletalItem_HuntingRifle.BP_SkeletalItem_HuntingRifle_C.GetFireTransform
struct ABP_SkeletalItem_HuntingRifle_C_GetFireTransform_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A2E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FireTransform;                                     // 0x10(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x40(0x30)(IsPlainOldData, NoDestructor)
};

}
}


