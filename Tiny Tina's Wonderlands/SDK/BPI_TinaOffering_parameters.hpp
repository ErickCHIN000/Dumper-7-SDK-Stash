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

// 0x4 (0x4 - 0x0)
// Function BPI_TinaOffering.BPI_TinaOffering_C.GetLootAmount
struct IBPI_TinaOffering_C_GetLootAmount_Params
{
public:
	int32                                        LootAmount;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_TinaOffering.BPI_TinaOffering_C.GetRemainingCrystal
struct IBPI_TinaOffering_C_GetRemainingCrystal_Params
{
public:
	struct FGbxAttributeFloat                    RemainingCrystal;                                  // 0x0(0xC)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        CurrentCrystal;                                    // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


