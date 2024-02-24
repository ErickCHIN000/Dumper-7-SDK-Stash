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

// 0xAC0 (0xAC0 - 0x0)
// Function CameraModifier_PixelMode.CameraModifier_PixelMode_C.BlueprintModifyPostProcess
struct UCameraModifier_PixelMode_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1015[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x10(0x540)(Parm, OutParm)
	struct FWeightedBlendable                    K2Node_MakeStruct_WeightedBlendable;               // 0x550(0x10)(NoDestructor)
	TArray<struct FWeightedBlendable>            K2Node_MakeArray_Array;                            // 0x560(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FWeightedBlendables                   K2Node_MakeStruct_WeightedBlendables;              // 0x570(0x10)(None)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x580(0x540)(None)
};

}
}


