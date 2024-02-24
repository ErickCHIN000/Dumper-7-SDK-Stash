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
// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
struct IBPI_IO_Switch_C_GetSwitchFeedbackState_Params
{
public:
	enum class Enum_States_SwitchFeedback        FeedbackState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
struct IBPI_IO_Switch_C_SetSwitchFeedbackState_Params
{
public:
	enum class Enum_States_SwitchFeedback        FeedbackState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
struct IBPI_IO_Switch_C_GetSwitchInteractiveState_Params
{
public:
	bool                                         Interactive;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
struct IBPI_IO_Switch_C_GetSwitchLockedState_Params
{
public:
	bool                                         Locked;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
struct IBPI_IO_Switch_C_GetSwitchState_Params
{
public:
	enum class Enum_Switch_State                 SwitchState;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
struct IBPI_IO_Switch_C_SetSwitchInteractiveState_Params
{
public:
	bool                                         Interactive;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
struct IBPI_IO_Switch_C_SetSwitchLockedState_Params
{
public:
	bool                                         Locked;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
struct IBPI_IO_Switch_C_SetSwitchState_Params
{
public:
	enum class Enum_Switch_State                 SwitchState;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


