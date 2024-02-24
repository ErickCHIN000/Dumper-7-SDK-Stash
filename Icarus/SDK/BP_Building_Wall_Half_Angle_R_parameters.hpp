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

// 0x191 (0x191 - 0x0)
// Function BP_Building_Wall_Half_Angle_R.BP_Building_Wall_Half_Angle_R_C.GetBlockingBypass
struct ABP_Building_Wall_Half_Angle_R_C_GetBlockingBypass_Params
{
public:
	class UClass*                                BuildingClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   BlockingPreRotate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_4A92[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTransform;                                // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   BypassBlocking;                                    // 0x50(0x10)(Parm, OutParm)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair;                      // 0x60(0x18)(NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_1;                          // 0x88(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking;         // 0x98(0x10)(ReferenceParm)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair_1;                    // 0xA8(0x18)(NoDestructor)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair_2;                    // 0xC0(0x18)(NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ABC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_2;                          // 0xE8(0x10)(ReferenceParm)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking_1;       // 0x108(0x10)(ReferenceParm)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x11C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x128(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x134(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x14C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x164(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x173(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_3;                          // 0x180(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue_1;    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


