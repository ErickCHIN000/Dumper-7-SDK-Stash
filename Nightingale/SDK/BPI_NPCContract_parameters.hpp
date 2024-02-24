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
// Function BPI_NPCContract.BPI_NPCContract_C.GetHiringStatus
struct IBPI_NPCContract_C_GetHiringStatus_Params
{
public:
	enum class Enum_HiringStatus                 ReturnedStatus;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.GetContractCost
struct IBPI_NPCContract_C_GetContractCost_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        ContractCost;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.GetCurrentActionStationType
struct IBPI_NPCContract_C_GetCurrentActionStationType_Params
{
public:
	enum class Enum_ActionStationType            ActionStationType;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.ClearOrderTarget
struct IBPI_NPCContract_C_ClearOrderTarget_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.SetOrderTarget
struct IBPI_NPCContract_C_SetOrderTarget_Params
{
public:
	class AActor*                                OrderTarget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_PingVerbs                       Verb;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.GetEmployerPawn
struct IBPI_NPCContract_C_GetEmployerPawn_Params
{
public:
	class APawn*                                 EmployerPawn;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.StopContract
struct IBPI_NPCContract_C_StopContract_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BPI_NPCContract.BPI_NPCContract_C.StartContract
struct IBPI_NPCContract_C_StartContract_Params
{
public:
	class APawn*                                 EmployerPawn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


