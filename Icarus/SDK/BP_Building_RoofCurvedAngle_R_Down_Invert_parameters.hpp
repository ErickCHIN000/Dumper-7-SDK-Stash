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

// 0xFE (0xFE - 0x0)
// Function BP_Building_RoofCurvedAngle_R_Down_Invert.BP_Building_RoofCurvedAngle_R_Down_Invert_C.GetBlockingBypass
struct ABP_Building_RoofCurvedAngle_R_Down_Invert_C_GetBlockingBypass_Params
{
public:
	class UClass*                                BuildingClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   BlockingPreRotate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_49F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTransform;                                // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   BypassBlocking;                                    // 0x50(0x10)(Parm, OutParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair;                      // 0x6C(0x18)(NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking;         // 0xA8(0x10)(ReferenceParm)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_1;                          // 0xC8(0x10)(ReferenceParm)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


