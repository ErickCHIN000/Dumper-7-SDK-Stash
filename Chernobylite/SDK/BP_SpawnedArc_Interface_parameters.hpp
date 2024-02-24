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

// 0x98 (0x98 - 0x0)
// Function BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C.SpawnArc
struct IBP_SpawnedArc_Interface_C_SpawnArc_Params
{
public:
	struct FArcValues                            ArcStruct;                                         // 0x0(0x91)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_145[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BP_SpawnedArc_Interface.BP_SpawnedArc_Interface_C.SetAllowUpdates
struct IBP_SpawnedArc_Interface_C_SetAllowUpdates_Params
{
public:
	bool                                         AllowUpdates;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


