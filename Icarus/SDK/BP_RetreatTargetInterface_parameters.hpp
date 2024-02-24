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
// Function BP_RetreatTargetInterface.BP_RetreatTargetInterface_C.GetRetreatExitLocation
struct IBP_RetreatTargetInterface_C_GetRetreatExitLocation_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotation;                                     // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_RetreatTargetInterface.BP_RetreatTargetInterface_C.GetRetreatEntryLocation
struct IBP_RetreatTargetInterface_C_GetRetreatEntryLocation_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotation;                                     // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


