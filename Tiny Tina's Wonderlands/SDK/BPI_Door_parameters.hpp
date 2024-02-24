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
// Function BPI_Door.BPI_Door_C.GetDoorFeedbackState
struct IBPI_Door_C_GetDoorFeedbackState_Params
{
public:
	enum class Enum_States_DoorLocked            FeedbackState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.SetDoorFeedbackState
struct IBPI_Door_C_SetDoorFeedbackState_Params
{
public:
	enum class Enum_States_DoorLocked            FeedbackState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.GetDoorInteractiveState
struct IBPI_Door_C_GetDoorInteractiveState_Params
{
public:
	bool                                         Interactive;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.GetDoorLockedState
struct IBPI_Door_C_GetDoorLockedState_Params
{
public:
	bool                                         Locked;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.GetDoorState
struct IBPI_Door_C_GetDoorState_Params
{
public:
	enum class Enum_Door_State                   DoorState;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.SetDoorInteractiveState
struct IBPI_Door_C_SetDoorInteractiveState_Params
{
public:
	bool                                         Interactive_;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.SetDoorLockedState
struct IBPI_Door_C_SetDoorLockedState_Params
{
public:
	bool                                         Locked_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Door.BPI_Door_C.SetDoorState
struct IBPI_Door_C_SetDoorState_Params
{
public:
	enum class Enum_Door_State                   DoorState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


