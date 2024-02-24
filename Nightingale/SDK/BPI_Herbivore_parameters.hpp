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

// 0x9 (0x9 - 0x0)
// Function BPI_Herbivore.BPI_Herbivore_C.GrazeResourceNode
struct IBPI_Herbivore_C_GrazeResourceNode_Params
{
public:
	class AResourceNodeIIMBase*                  ResourceNode;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Herbivore.BPI_Herbivore_C.GetIsHerbivore
struct IBPI_Herbivore_C_GetIsHerbivore_Params
{
public:
	bool                                         bIsHerbivore;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


