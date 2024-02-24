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
// Function IHuntingInterface.IHuntingInterface_C.GetHuntingWidgetLocation
struct IIHuntingInterface_C_GetHuntingWidgetLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function IHuntingInterface.IHuntingInterface_C.GatherSplineLocations
struct IIHuntingInterface_C_GatherSplineLocations_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function IHuntingInterface.IHuntingInterface_C.SendSplineLocations
struct IIHuntingInterface_C_SendSplineLocations_Params
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}


