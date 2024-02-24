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

// 0x980 (0x980 - 0x0)
// Function BP_Building_Beam_Cross_Horizontal.BP_Building_Beam_Cross_Horizontal_C.ShouldRotate
struct ABP_Building_Beam_Cross_Horizontal_C_ShouldRotate_Params
{
public:
	enum class ERotationalDirections             Direction;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C80[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTrans;                                    // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                NewBuilding;                                       // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitDistanceFromCenter;                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Dots;                                              // 0x4C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotToTest;                                    // 0x58(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              GridspaceRotTestAgainst;                           // 0x64(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               RawHitNormal;                                      // 0x70(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Player;                                            // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Shifted;                                           // 0x90(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                         WantsBlockLikePlacement;                           // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CC5[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BlockLikePlacementExtra;                           // 0xD0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            ExtraGridSpaceTrans;                               // 0x100(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                            WorkingTransform;                                  // 0x130(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	enum class ERotationalDirections             WorkingDirection;                                  // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CE2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x170(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_1;                          // 0x1B0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_2;                          // 0x1C0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_3;                          // 0x1D0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D15[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x1F0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue;                // 0x224(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x230(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0x260(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue;     // 0x26C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot; // 0x278(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D45[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc;                  // 0x290(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x2C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc;                // 0x2D0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x300(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_2;              // 0x310(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_3;              // 0x340(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_RightShift_ShiftedLoc;                    // 0x370(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans;                   // 0x3A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_1;                // 0x3D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_1;              // 0x400(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_4;                          // 0x430(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_2;                // 0x440(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_2;              // 0x470(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_5;                          // 0x4A0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x4C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_2;            // 0x4D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_4;              // 0x4E0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x512(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x514(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x520(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x52C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_3;            // 0x538(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF0[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_5;              // 0x550(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NegateRotator_ReturnValue_1;              // 0x584(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x590(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_6;              // 0x5C0(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue_1;               // 0x5F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue_1;   // 0x5FC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot_RoundedGridSpaceRot_1; // 0x608(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x614(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x620(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x62C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_4;            // 0x638(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x644(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_5;            // 0x650(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x65C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_7;              // 0x660(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Abs_ReturnValue;                          // 0x694(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;     // 0x69A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;     // 0x69B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_3;                // 0x69C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_3;                // 0x6A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_3;                   // 0x6B4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_6;            // 0x6C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_8;              // 0x6D0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_6;                          // 0x708(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	uint8                                        Pad_4ECB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_9;              // 0x720(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_3;             // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x751(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EE1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location_4;                // 0x754(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_4;                // 0x760(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_4;                   // 0x76C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_7;            // 0x778(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F09[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_10;             // 0x790(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_4;             // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_RightShift_ShiftedLoc_1;                  // 0x7D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_LeftShift_ShiftedTrans_1;                 // 0x800(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_3;                // 0x830(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_3;              // 0x860(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_7;                          // 0x890(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FTransform                            CallFunc_ForwardShift_ShiftedLoc_4;                // 0x8A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_BackwardsShift_ShiftedLoc_4;              // 0x8D0(0x30)(IsPlainOldData, NoDestructor)
	TArray<class UPrimitiveComponent*>           K2Node_MakeArray_Array_8;                          // 0x900(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_5;             // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x911(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_6;             // 0x912(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_7;             // 0x913(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_8;             // 0x914(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_9;             // 0x915(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x916(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_10;            // 0x917(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_5;                // 0x918(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_5;                // 0x924(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_5;                   // 0x930(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_8;            // 0x93C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_11;             // 0x950(0x30)(IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function BP_Building_Beam_Cross_Horizontal.BP_Building_Beam_Cross_Horizontal_C.GetBlockingBypass
struct ABP_Building_Beam_Cross_Horizontal_C_GetBlockingBypass_Params
{
public:
	class UClass*                                BuildingClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorPair>                   BlockingPreRotate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_519D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GridSpaceTransform;                                // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   BypassBlocking;                                    // 0x50(0x10)(Parm, OutParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_RotatorRotator_ReturnValue_1;    // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0xE7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVectorPair                           K2Node_MakeStruct_VectorPair;                      // 0xE8(0x18)(NoDestructor)
	TArray<struct FVectorPair>                   K2Node_MakeArray_Array_1;                          // 0x100(0x10)(ReferenceParm)
	TArray<struct FVectorPair>                   CallFunc_GetBlockingBypass_BypassBlocking;         // 0x110(0x10)(ReferenceParm)
};

}
}


