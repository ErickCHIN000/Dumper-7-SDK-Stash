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

// 0x575 (0x575 - 0x0)
// Function W_PostProcessEntry_MouseSmoothing.W_PostProcessEntry_MouseSmoothing_C.UpdatePostProcess
struct UW_PostProcessEntry_MouseSmoothing_C_UpdatePostProcess_Params
{
public:
	struct FPostProcessSettings                  Settings;                                          // 0x0(0x560)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_CinematicPawn_C*                   CallFunc_GetCinematicPawn_ReturnValue;             // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        CallFunc_GetSliderValue_ReturnValue;               // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x56C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4016[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x574(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


