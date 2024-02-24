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

// 0x40 (0x40 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.Hand IK
struct UABP_GNM_HillGiant_Overrides_C_Hand_IK_Params
{
public:
	struct FPoseLink                             Input;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               Hand_l;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Hand_l_Alpha;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Hand_IK;                                           // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.BoneAdditiveTransform
struct UABP_GNM_HillGiant_Overrides_C_BoneAdditiveTransform_Params
{
public:
	struct FPoseLink                             InPose_6;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       WorldTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             BoneAdditiveTransform;                             // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.Procedural_Walk
struct UABP_GNM_HillGiant_Overrides_C_Procedural_Walk_Params
{
public:
	struct FPoseLink                             InPose_5;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         WalkOn_;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              BodyRot;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLegItem                              Leg_ITM_0;                                         // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_1;                                         // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_2;                                         // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_3;                                         // 0x90(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_4;                                         // 0xB0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_5;                                         // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_6;                                         // 0xF0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FLegItem                              Leg_ITM_7;                                         // 0x110(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Procedural_Walk;                                   // 0x130(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.LookAtTarget
struct UABP_GNM_HillGiant_Overrides_C_LookAtTarget_Params
{
public:
	struct FPoseLink                             InPose_4;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       LookAtAlpha;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookAtRot;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       EyeAlpha;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             LookAtTarget;                                      // 0x38(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.Dynamics
struct UABP_GNM_HillGiant_Overrides_C_Dynamics_Params
{
public:
	struct FPoseLink                             InPose_3;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       InDynamicsAlpha;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Dynamics;                                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.GroundPowerIk
struct UABP_GNM_HillGiant_Overrides_C_GroundPowerIk_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         PowerIK_Switch;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             GroundPowerIk;                                     // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.ControlRig
struct UABP_GNM_HillGiant_Overrides_C_ControlRig_Params
{
public:
	struct FPoseLink                             InPose_1;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                              Rotation;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsMinHealth_;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             ControlRig;                                        // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.OffHandIK
struct UABP_GNM_HillGiant_Overrides_C_OffHandIK_Params
{
public:
	struct FPoseLink                             InPose_2;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         InputIKSwitch;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InputIKLocation;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             OffHandIK;                                         // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.AnimGraph
struct UABP_GNM_HillGiant_Overrides_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_GNM_HillGiant_Overrides.ABP_GNM_HillGiant_Overrides_C.ExecuteUbergraph_ABP_GNM_HillGiant_Overrides
struct UABP_GNM_HillGiant_Overrides_C_ExecuteUbergraph_ABP_GNM_HillGiant_Overrides_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


