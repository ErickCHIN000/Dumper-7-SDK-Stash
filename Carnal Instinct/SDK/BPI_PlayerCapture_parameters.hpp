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
// Function BPI_PlayerCapture.BPI_PlayerCapture_C.PassReference
struct IBPI_PlayerCapture_C_PassReference_Params
{
public:
	class ABP_PlayerCapture_C*                   Capture_Reference;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BPI_PlayerCapture.BPI_PlayerCapture_C.Detach from Player Capture
struct IBPI_PlayerCapture_C_Detach_from_Player_Capture_Params
{
public:
	struct FS_ItemData                           Item_Data;                                         // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BPI_PlayerCapture.BPI_PlayerCapture_C.Attach to Player Capture
struct IBPI_PlayerCapture_C_Attach_to_Player_Capture_Params
{
public:
	struct FS_ItemData                           Item_Data;                                         // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

}
}


