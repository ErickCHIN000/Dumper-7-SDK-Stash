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

// 0x192 (0x192 - 0x0)
// Function BP_Building_Wall_Half_Angle_L_Invert.BP_Building_Wall_Half_Angle_L_Invert_C.GetBlockingBypass
struct ABP_Building_Wall_Half_Angle_L_Invert_C_GetBlockingBypass_Params
{
public:
	class UClass*                                BuildingClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   BlockingPreRotate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_4341[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTransform;                                // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   BypassBlocking;                                    // 0x50(0x10)(Parm, OutParm)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair;                      // 0x60(0x18)(NoDestructor)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair_1;                    // 0x78(0x18)(NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking;         // 0xB0(0x10)(ReferenceParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xF4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x100(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x10C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4343[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x11C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x128(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x134(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_2;                          // 0x140(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue_1;    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4346[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVectorPair                           K2Node_MakeStruct_VectorPair_2;                    // 0x154(0x18)(NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4348[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_3;                          // 0x170(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking_1;       // 0x180(0x10)(ReferenceParm)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


