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

// 0x8 (0x8 - 0x0)
// Function BPI_CursedWit.BPI_CursedWit_C.CursedWit_Unequip
struct IBPI_CursedWit_C_CursedWit_Unequip_Params
{
public:
	class AOakCharacter*                         UnequippedBy;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CursedWit.BPI_CursedWit_C.CursedWit_OnEquip
struct IBPI_CursedWit_C_CursedWit_OnEquip_Params
{
public:
	class AOakCharacter*                         EquippedBy;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


