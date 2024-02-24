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
// Function LostControl_Grutch.LostControl_Grutch_C.OnFinish
struct ALostControl_Grutch_C_OnFinish_Params
{
public:
	bool                                         bWasInterruptedByQTE;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function LostControl_Grutch.LostControl_Grutch_C.ExecuteUbergraph_LostControl_Grutch
struct ALostControl_Grutch_C_ExecuteUbergraph_LostControl_Grutch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasInterruptedByQTE;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                CallFunc_GetCurrentWeaponMontage_ReturnValue;      // 0x8(0x18)(ConstParm, NoDestructor)
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


