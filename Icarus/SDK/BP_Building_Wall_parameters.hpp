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

// 0x230 (0x230 - 0x0)
// Function BP_Building_Wall.BP_Building_Wall_C.DecideShifting
struct ABP_Building_Wall_C_DecideShifting_Params
{
public:
	struct FRotator                              RotationToTest_world_;                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationTestingAgainst_gridspace_;                 // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A03[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceLOCHitPlaneRot;                           // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                Building_Class;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceBetweenHitAndCenter;                       // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RawHitNormal;                                      // 0x5C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            Player;                                            // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            GridSpaceLOCWithGridSpaceRot;                      // 0x70(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             RelativeRotationEnum;                              // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsBlockLikePlacement;                           // 0xA1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A41[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BlockLikePlacementExtraDelta;                      // 0xB0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot; // 0xE0(0x30)(IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             CallFunc_DecideShifting_RelativeRotationEnum;      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DecideShifting_WantsBlockLikePlacement;   // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A57[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_DecideShifting_BlockLikePlacementExtraDelta; // 0x120(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x150(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x15C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x168(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x180(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x18C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x1B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x1C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_SelectTransform_ReturnValue;              // 0x200(0x30)(IsPlainOldData, NoDestructor)
};

// 0x23D (0x23D - 0x0)
// Function BP_Building_Wall.BP_Building_Wall_C.IsBuildingOutside
struct ABP_Building_Wall_C_IsBuildingOutside_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x10(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0x30(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C2A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x60(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0xB4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue_1;           // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x14C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C55[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x160(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x190(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_TransformLocation_ReturnValue_1;          // 0x19C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_1;                 // 0x1B4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_1;            // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2360 (0x2360 - 0x0)
// Function BP_Building_Wall.BP_Building_Wall_C.ShouldRotate
struct ABP_Building_Wall_C_ShouldRotate_Params
{
public:
	enum class ERotationalDirections             Direction;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTrans;                                    // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                NewBuilding;                                       // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitDistanceFromCenter;                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Dots;                                              // 0x4C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotToTest;                                    // 0x58(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              GridspaceRotTestAgainst;                           // 0x64(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               RawHitNormal;                                      // 0x70(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Player;                                            // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Shifted;                                           // 0x90(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                         WantsBlockLikePlacement;                           // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BlockLikePlacementExtra;                           // 0xD0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            ExtraGridSpaceTrans;                               // 0x100(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             WorkingDirection;                                  // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_570E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorkingTransform;                                  // 0x140(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc;                // 0x170(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_572A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue;                // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x1B0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x1E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue;     // 0x1EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x1F8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot; // 0x208(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x214(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5760[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x230(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5779[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc;                    // 0x270(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_1;                  // 0x2A0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x2D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x2DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x2E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x2F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57A2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x310(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x340(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x34C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x358(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_2;            // 0x364(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_2;              // 0x370(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_DownShift_ShiftedLoc;                     // 0x3A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_1;              // 0x3D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans;                   // 0x400(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x430(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x43C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x448(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_3;            // 0x454(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_2;              // 0x460(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_3;              // 0x490(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_1;                          // 0x4C0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x4D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_581B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_2;                          // 0x4D8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FRotator                              CallFunc_NegateRotator_ReturnValue_1;              // 0x4E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5826[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x500(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_1;               // 0x530(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_1;   // 0x53C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1; // 0x548(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5837[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc;                  // 0x560(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_4;            // 0x590(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5840[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_3;              // 0x5A0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_5;            // 0x5D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_4;              // 0x5E0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_3;             // 0x611(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x612(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5883[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_2;                  // 0x620(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_1;                 // 0x650(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_1;                // 0x680(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_4;              // 0x6B0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_DownShift_ShiftedLoc_1;                   // 0x6E0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_3;                // 0x710(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_3;                // 0x71C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_3;                   // 0x728(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_6;            // 0x734(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_5;              // 0x740(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_2;                // 0x770(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_2;                 // 0x7A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_5;              // 0x7D0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_4;                // 0x804(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_4;                // 0x810(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_4;                   // 0x81C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_7;            // 0x828(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x834(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58F1[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_6;              // 0x840(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_3;                          // 0x870(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5902[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_UpShift_ShiftedLoc;                       // 0x890(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_5;                // 0x8C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_5;                // 0x8CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_5;                   // 0x8D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_3;                 // 0x8F0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_8;            // 0x920(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5934[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_7;              // 0x930(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_4;             // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x961(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5943[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_3;                // 0x970(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_1;                     // 0x9A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_2;                     // 0x9D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_6;              // 0xA00(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_4;                 // 0xA30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_5;                 // 0xA60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_3;                     // 0xA90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_3;                  // 0xAC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_4;                     // 0xAF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_6;                 // 0xB20(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_4;                // 0xB50(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_5;                     // 0xB80(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_7;              // 0xBB0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_7;                 // 0xBE0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_6;                     // 0xC10(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_5;                // 0xC40(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_8;                 // 0xC70(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_7;                     // 0xCA0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_8;                     // 0xCD0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_8;              // 0xD00(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_5;             // 0xD30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xD31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59C0[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_4;                  // 0xD40(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_9;                     // 0xD70(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_5;                  // 0xDA0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_8;              // 0xDD0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_DownShift_ShiftedLoc_2;                   // 0xE00(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_9;              // 0xE30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_10;             // 0xE60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_6;                  // 0xE90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_6;                // 0xEC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_9;                 // 0xEF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_9;              // 0xF20(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0xF50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_7;                  // 0xF60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_10;             // 0xF90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_10;                // 0xFC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_7;                // 0xFF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_11;             // 0x1020(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_12;             // 0x1050(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_8;                  // 0x1080(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_8;                // 0x10B0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_11;                // 0x10E0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_11;             // 0x1110(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_9;                  // 0x1150(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_12;             // 0x1180(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_12;                // 0x11B0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_9;                // 0x11E0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0x1210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A6B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_10;                 // 0x1220(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_10;               // 0x1250(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_13;                // 0x1280(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_13;             // 0x12B0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_NegateRotator_ReturnValue_2;              // 0x12E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_2;               // 0x12F0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_2;               // 0x1320(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_2;   // 0x132C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x1338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_2; // 0x133C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_9;            // 0x1348(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_1;  // 0x1354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue_3;              // 0x1358(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_2;  // 0x1364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_3;  // 0x1365(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1366(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AB0[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_3;               // 0x1370(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_3;               // 0x13A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_3;   // 0x13AC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_6;             // 0x13B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5ABE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_3; // 0x13BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_10;           // 0x13C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_11;           // 0x13D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_13;             // 0x13E0(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_4;                          // 0x1410(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_10;                   // 0x1420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AE3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_14;             // 0x1430(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_6;                // 0x1460(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_6;                // 0x146C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_6;                   // 0x1478(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_12;           // 0x1484(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_15;             // 0x1490(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_14;             // 0x14C0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_11;                 // 0x14F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_14;                // 0x1520(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_16;             // 0x1550(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_17;             // 0x1580(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_7;             // 0x15B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_5;                          // 0x15B8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_11;                   // 0x15C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_11;               // 0x15D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_18;             // 0x1600(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_15;                // 0x1630(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_16;                // 0x1660(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_12;                 // 0x1690(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_17;                // 0x16C0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_12;               // 0x16F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_19;             // 0x1720(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_13;                 // 0x1750(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_7;                // 0x1780(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_7;                // 0x178C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_7;                   // 0x1798(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_13;           // 0x17A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_15;             // 0x17B0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_13;               // 0x17E0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_20;             // 0x1810(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_8;             // 0x1840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_6;                          // 0x1848(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_9;             // 0x1858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_7;                          // 0x1860(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_8;                          // 0x1870(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_9;                          // 0x1880(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FTransform                            CallFunc_Reverse_OutTrans;                         // 0x1890(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_12;                   // 0x18C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BC0[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_10;                    // 0x18D0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_8;                // 0x1900(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_8;                // 0x190C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_8;                   // 0x1918(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_14;           // 0x1924(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_14;               // 0x1930(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_16;             // 0x1960(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_21;             // 0x1990(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_15;               // 0x19C0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_22;             // 0x19F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_14;                 // 0x1A20(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_18;                // 0x1A50(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_9;                // 0x1A80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_9;                // 0x1A8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_9;                   // 0x1A98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_15;           // 0x1AA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_17;             // 0x1AB0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_16;               // 0x1AE0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_23;             // 0x1B10(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_4;               // 0x1B40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_3;            // 0x1B4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_4;               // 0x1B50(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_NegateRotator_ReturnValue_4;              // 0x1B80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_4;   // 0x1B8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_4; // 0x1B98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_16;           // 0x1BA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_17;           // 0x1BB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_18;             // 0x1BC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_Reverse_OutTrans_1;                       // 0x1BF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_19;                // 0x1C20(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_13;                   // 0x1C50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C91[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_20;                // 0x1C60(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_10;               // 0x1C90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_10;               // 0x1C9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_10;                  // 0x1CA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C98[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_19;             // 0x1CC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_Reverse_OutTrans_2;                       // 0x1CF0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_10;            // 0x1D20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_14;                   // 0x1D21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_15;                   // 0x1D22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_4;            // 0x1D23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CAE[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_15;                 // 0x1D30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_24;             // 0x1D60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_21;                // 0x1D90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_17;               // 0x1DC0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_16;                   // 0x1DF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CBA[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_18;               // 0x1E00(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_11;                    // 0x1E30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_12;                    // 0x1E60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_25;             // 0x1E90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_22;                // 0x1EC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_23;                // 0x1EF0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_11;            // 0x1F20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_12;            // 0x1F21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1F22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1F23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x1F24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CD8[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_24;                // 0x1F30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_25;                // 0x1F60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_26;                // 0x1F90(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_27;                // 0x1FC0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_26;             // 0x1FF0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_27;             // 0x2020(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_28;             // 0x2050(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_29;             // 0x2080(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_17;                   // 0x20B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CF9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_13;                    // 0x20C0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_16;                 // 0x20F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_14;                    // 0x2120(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_28;                // 0x2150(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_19;               // 0x2180(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_15;                    // 0x21B0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_30;             // 0x21E0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_29;                // 0x2210(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_16;                    // 0x2240(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_20;               // 0x2270(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_30;                // 0x22A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_17;                    // 0x22D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_UpShift_ShiftedLoc_18;                    // 0x2300(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_31;             // 0x2330(0x30)(IsPlainOldData, NoDestructor)
};

}
}


