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
// Function BPI_ResourceNode.BPI_ResourceNode_C.IsInstanceHarvestable
struct IBPI_ResourceNode_C_IsInstanceHarvestable_Params
{
public:
	int32                                        InstanceID;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHarvestable;                                     // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BPI_ResourceNode.BPI_ResourceNode_C.GetGrantedResource
struct IBPI_ResourceNode_C_GetGrantedResource_Params
{
public:
	int32                                        InstanceID;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ResourceData;                                      // 0x8(0xD8)(Parm, OutParm, ContainsInstancedReference)
};

}
}


