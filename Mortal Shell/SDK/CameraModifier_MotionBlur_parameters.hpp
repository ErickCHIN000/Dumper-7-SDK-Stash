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

// 0xAA0 (0xAA0 - 0x0)
// Function CameraModifier_MotionBlur.CameraModifier_MotionBlur_C.BlueprintModifyPostProcess
struct UCameraModifier_MotionBlur_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x10(0x540)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1555[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x560(0x540)(None)
};

}
}


