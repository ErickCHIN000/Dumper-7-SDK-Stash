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

// 0x1 (0x1 - 0x0)
// Function BPI_Ping.BPI_Ping_C.GetDefaultActionStationType
struct IBPI_Ping_C_GetDefaultActionStationType_Params
{
public:
	enum class Enum_ActionStationType            ActionStationType;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_Ping.BPI_Ping_C.GetPingObjectType
struct IBPI_Ping_C_GetPingObjectType_Params
{
public:
	enum class E_PingObjectType                  PingObjectType;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DataTableRowName;                                  // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


