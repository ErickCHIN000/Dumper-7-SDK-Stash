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

// 0x200 (0x200 - 0x0)
// Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.DecideShifting
struct ABP_Building_Beam_Horizontal_C_DecideShifting_Params
{
public:
	struct FRotator                              RotationToTest_world_;                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationTestingAgainst_gridspace_;                 // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AEE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceLOCHitPlaneRot;                           // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                Building_Class;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceBetweenHitAndCenter;                       // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RawHitNormal;                                      // 0x5C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            Player;                                            // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            GridSpaceLOCWithGridSpaceRot;                      // 0x70(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             RelativeRotationEnum;                              // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsBlockLikePlacement;                           // 0xA1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B4E[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BlockLikePlacementExtraDelta;                      // 0xB0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_DecideShifting_GridSpaceLOCWithGridSpaceRot; // 0xE0(0x30)(IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             CallFunc_DecideShifting_RelativeRotationEnum;      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DecideShifting_WantsBlockLikePlacement;   // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B68[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x1BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BBC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1D0(0x30)(IsPlainOldData, NoDestructor)
};

// 0x680 (0x680 - 0x0)
// Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.ShouldRotate
struct ABP_Building_Beam_Horizontal_C_ShouldRotate_Params
{
public:
	enum class ERotationalDirections             Direction;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FB1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTrans;                                    // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                NewBuilding;                                       // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitDistanceFromCenter;                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Dots;                                              // 0x4C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotToTest;                                    // 0x58(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              GridspaceRotTestAgainst;                           // 0x64(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               RawHitNormal;                                      // 0x70(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5001[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Player;                                            // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_500B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Shifted;                                           // 0x90(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                         WantsBlockLikePlacement;                           // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_501A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BlockLikePlacementExtra;                           // 0xD0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            ExtraGridSpaceRotation;                            // 0x100(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             WorkingDirection;                                  // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5037[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorkingTrans;                                      // 0x140(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc;                // 0x170(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5048[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x1E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x220(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_1;              // 0x250(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc;                  // 0x280(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x2B4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x2C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x2CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_2;              // 0x2E0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_2;              // 0x310(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x348(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	uint8                                        Pad_50FB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x360(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_3;                // 0x390(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_3;                // 0x39C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_3;                   // 0x3A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5124[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_1;                          // 0x3B8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	uint8                                        Pad_5148[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_3;              // 0x3D0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x400(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x40C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue;     // 0x410(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot; // 0x41C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5171[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_4;              // 0x430(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_5;              // 0x460(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_6;              // 0x490(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_1;  // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_2;  // 0x4C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue_3;  // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x4C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51BC[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_3;              // 0x4D0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_3;             // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_4;             // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x502(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x503(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x504(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x505(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x506(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x507(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue;                // 0x50C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_522C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x520(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_1;               // 0x550(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x55C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_524C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_1;   // 0x560(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1; // 0x56C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x578(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x588(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5274[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_7;              // 0x5A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_8;              // 0x5D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_4;              // 0x600(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_5;             // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5292[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_2;                          // 0x638(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	uint8                                        Pad_5297[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_9;              // 0x650(0x30)(IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_Building_Beam_Horizontal.BP_Building_Beam_Horizontal_C.ExecuteUbergraph_BP_Building_Beam_Horizontal
struct ABP_Building_Beam_Horizontal_C_ExecuteUbergraph_BP_Building_Beam_Horizontal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


