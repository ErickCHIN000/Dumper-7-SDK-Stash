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
// Function BPI_Softlock.BPI_Softlock_C.BI_ToggleHardlockWidget
struct IBPI_Softlock_C_BI_ToggleHardlockWidget_Params
{
public:
	enum class ESlateVisibility                  BI_Visibilty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_TogglePredictiveWidget
struct IBPI_Softlock_C_BI_TogglePredictiveWidget_Params
{
public:
	enum class ESlateVisibility                  BI_Visibilty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_ToggleHardlockSelection
struct IBPI_Softlock_C_BI_ToggleHardlockSelection_Params
{
public:
	enum class ESlateVisibility                  BI_Visibilty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_TogglePredictiveSelection
struct IBPI_Softlock_C_BI_TogglePredictiveSelection_Params
{
public:
	enum class ESlateVisibility                  BI_Visibilty;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_OnSelectedTarget
struct IBPI_Softlock_C_BI_OnSelectedTarget_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_CustomMinDistance
struct IBPI_Softlock_C_BI_CustomMinDistance_Params
{
public:
	bool                                         BI_UseCustomDistance_;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BI_NewMinDistance;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Softlock.BPI_Softlock_C.BI_CanBeTarget?
struct IBPI_Softlock_C_BI_CanBeTarget__Params
{
public:
	bool                                         BI_CanBeTarget_;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


