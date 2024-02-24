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
// Function BPI_AudioManager.BPI_AudioManager_C.UpdateCombatStatus
struct IBPI_AudioManager_C_UpdateCombatStatus_Params
{
public:
	enum class E_Combat                          CombatStatus;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BPI_AudioManager.BPI_AudioManager_C.SetInside
struct IBPI_AudioManager_C_SetInside_Params
{
public:
	bool                                         bInside;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_228A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AmbientMultiplier;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReverbSettings                       ReverbSettings;                                    // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FName                                  ReverbAreaName;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReverbPriority;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_AudioManager.BPI_AudioManager_C.UpdateTimeOfDay
struct IBPI_AudioManager_C_UpdateTimeOfDay_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TimeOfDay                       Night_;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


