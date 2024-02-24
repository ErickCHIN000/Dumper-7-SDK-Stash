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
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Hand IK
struct UABP_GNM_SunGiant_Overrides_C_Hand_IK_Params
{
public:
	struct FPoseLink                             Input;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               Hand_l;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Hand_l_Alpha;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Hand_IK;                                           // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.GroundPowerIk
struct UABP_GNM_SunGiant_Overrides_C_GroundPowerIk_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         PowerIK_Switch;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             GroundPowerIk;                                     // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.ControlRig
struct UABP_GNM_SunGiant_Overrides_C_ControlRig_Params
{
public:
	struct FPoseLink                             InPose_1;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                              Rotation;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsMinHealth_;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             ControlRig;                                        // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.OffHandIK
struct UABP_GNM_SunGiant_Overrides_C_OffHandIK_Params
{
public:
	struct FPoseLink                             InPose_2;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         InputIKSwitch;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InputIKLocation;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             OffHandIK;                                         // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Dynamics
struct UABP_GNM_SunGiant_Overrides_C_Dynamics_Params
{
public:
	struct FPoseLink                             InPose_3;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       InDynamicsAlpha;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Dynamics;                                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.LookAtTarget
struct UABP_GNM_SunGiant_Overrides_C_LookAtTarget_Params
{
public:
	struct FPoseLink                             InPose_4;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       LookAtAlpha;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookAtRot;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       EyeAlpha;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             LookAtTarget;                                      // 0x38(0x10)(Parm, OutParm, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.Procedural_Walk
struct UABP_GNM_SunGiant_Overrides_C_Procedural_Walk_Params
{
public:
	struct FPoseLink                             InPose_5;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         WalkOn_;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_715E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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

// 0x28 (0x28 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.BoneAdditiveTransform
struct UABP_GNM_SunGiant_Overrides_C_BoneAdditiveTransform_Params
{
public:
	struct FPoseLink                             InPose_6;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       WorldTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             BoneAdditiveTransform;                             // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.AnimGraph
struct UABP_GNM_SunGiant_Overrides_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.BlueprintUpdateAnimation
struct UABP_GNM_SunGiant_Overrides_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function ABP_GNM_SunGiant_Overrides.ABP_GNM_SunGiant_Overrides_C.ExecuteUbergraph_ABP_GNM_SunGiant_Overrides
struct UABP_GNM_SunGiant_Overrides_C_ExecuteUbergraph_ABP_GNM_SunGiant_Overrides_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7417[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_744D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    K2Node_DynamicCast_AsBP_Creature_Base;             // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7487[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyMontagePlaying_ReturnValue;          // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7499[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


