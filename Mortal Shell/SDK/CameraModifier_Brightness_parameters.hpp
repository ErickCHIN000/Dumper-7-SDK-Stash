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
// Function CameraModifier_Brightness.CameraModifier_Brightness_C.BlueprintModifyPostProcess
struct UCameraModifier_Brightness_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E66[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x10(0x540)(Parm, OutParm)
	struct FVector4                              K2Node_MakeStruct_Vector4;                         // 0x550(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x560(0x540)(None)
};

}
}


