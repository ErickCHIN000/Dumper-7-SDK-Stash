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

// 0x19 (0x19 - 0x0)
// Function CrawlSpace.CrawlSpace_C.SetCapTexts
struct ACrawlSpace_C_SetCapTexts_Params
{
public:
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace_1;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function CrawlSpace.CrawlSpace_C.SetExitCameraReferences
struct ACrawlSpace_C_SetExitCameraReferences_Params
{
public:
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace_1;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A4 (0x1A4 - 0x0)
// Function CrawlSpace.CrawlSpace_C.PlaceEndUsableActorAtRightLocation
struct ACrawlSpace_C_PlaceEndUsableActorAtRightLocation_Params
{
public:
	struct FRotator                              CallFunc_GetRotationAtSplinePoint_ReturnValue;     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x4C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_GetRotationAtSplinePoint_ReturnValue_1;   // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetUpVector_ReturnValue_1;                // 0xEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x104(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace_1;          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1; // 0x11C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x99 (0x99 - 0x0)
// Function CrawlSpace.CrawlSpace_C.UserConstructionScript
struct ACrawlSpace_C_UserConstructionScript_Params
{
public:
	struct FTransform                            Temp_struct_Variable;                              // 0x0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class USplineMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Crawlspace_C*                  K2Node_DynamicCast_AsUsable_Crawlspace_1;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function CrawlSpace.CrawlSpace_C.ExecuteUbergraph_CrawlSpace
struct ACrawlSpace_C_ExecuteUbergraph_CrawlSpace_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


