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

// 0x38 (0x38 - 0x0)
// Function ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C.EyeOffset
struct IALI_HMU_CharacterCustomization_C_EyeOffset_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               Offset;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             EyeOffset;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C.BodyType
struct IALI_HMU_CharacterCustomization_C_BodyType_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class EBodyType                         InBodyType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5185[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             BodyType;                                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

}
}


