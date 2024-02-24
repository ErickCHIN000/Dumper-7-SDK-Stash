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
// Function BPI_InstanceValidatable.BPI_InstanceValidatable_C.ValidateInstance
struct IBPI_InstanceValidatable_C_ValidateInstance_Params
{
public:
	bool                                         PassedValidation;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ValidationErrors;                                  // 0x8(0x10)(Parm, OutParm)
};

}
}


