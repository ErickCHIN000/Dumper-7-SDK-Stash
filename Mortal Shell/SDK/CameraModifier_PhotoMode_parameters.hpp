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

// 0xAD0 (0xAD0 - 0x0)
// Function CameraModifier_PhotoMode.CameraModifier_PhotoMode_C.BlueprintModifyPostProcess
struct UCameraModifier_PhotoMode_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x10(0x540)(Parm, OutParm)
	struct FVector4                              K2Node_MakeStruct_Vector4;                         // 0x550(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CallFunc_MakeVector4_ReturnValue;                  // 0x570(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              CallFunc_MakeVector4_ReturnValue_1;                // 0x580(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  K2Node_MakeStruct_PostProcessSettings;             // 0x590(0x540)(None)
};

}
}


