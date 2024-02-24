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
// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
struct IBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params
{
public:
	bool                                         HasFlow;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
struct IBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params
{
public:
	bool                                         Destroyed;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
struct IBPI_IO_ExplodingPipe_C_SetPipeState_Params
{
public:
	enum class Enum_IO_ExplodingPipe_DestroyedState PipeState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
struct IBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params
{
public:
	bool                                         HasFlow;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


