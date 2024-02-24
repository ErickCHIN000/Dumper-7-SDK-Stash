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

// 0x180 (0x180 - 0x0)
// Function BP_Building_Floor_Diagonal.BP_Building_Floor_Diagonal_C.GetBlockingBypass
struct ABP_Building_Floor_Diagonal_C_GetBlockingBypass_Params
{
public:
	class UClass*                                BuildingClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   BlockingPreRotate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_4A91[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTransform;                                // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   BypassBlocking;                                    // 0x50(0x10)(Parm, OutParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_1;  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_2;        // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair;                      // 0xC8(0x18)(NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array;                            // 0xE0(0x10)(ReferenceParm)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking;         // 0x118(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_1;                          // 0x130(0x10)(ReferenceParm)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVectorPair                           K2Node_MakeStruct_VectorPair_1;                    // 0x144(0x18)(NoDestructor)
	uint8                                        Pad_4AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_2;                          // 0x160(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking_1;       // 0x170(0x10)(ReferenceParm)
};

}
}


