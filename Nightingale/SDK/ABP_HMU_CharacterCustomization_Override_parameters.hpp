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

// 0x28 (0x28 - 0x0)
// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.BodyType
struct UABP_HMU_CharacterCustomization_Override_C_BodyType_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class EBodyType                         InBodyType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             BodyType;                                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.EyeOffset
struct UABP_HMU_CharacterCustomization_Override_C_EyeOffset_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               Offset;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             EyeOffset;                                         // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.AnimGraph
struct UABP_HMU_CharacterCustomization_Override_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C.ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override
struct UABP_HMU_CharacterCustomization_Override_C_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


