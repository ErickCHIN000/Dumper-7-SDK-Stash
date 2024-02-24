#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIK_Type_Plugin : uint8
{
	ENUM_Two_Bone_Ik               = 0,
	ENUM_Single_Bone_Ik            = 1,
	ENUM_MAX                       = 2,
};

enum class ESolverComplexityPluginEnum : uint8
{
	VE_Simple                      = 0,
	VE_Complex                     = 1,
	VE_MAX                         = 2,
};

enum class ERefPosePluginEnum : uint8
{
	VE_Animated                    = 0,
	VE_Rest                        = 1,
	VE_MAX                         = 2,
};

enum class EInterpoRotation_Type_Plugin : uint8
{
	ENUM_DivisiveRot_Interp        = 0,
	ENUM_LegacyRot_Interp          = 1,
	ENUM_MAX                       = 2,
};

enum class EInterpoLocation_Type_Plugin : uint8
{
	ENUM_DivisiveLoc_Interp        = 0,
	ENUM_LegacyLoc_Interp          = 1,
	ENUM_MAX                       = 2,
};

enum class EIKTrace_Type_Plugin : uint8
{
	ENUM_LineTrace_Type            = 0,
	ENUM_SphereTrace_Type          = 1,
	ENUM_BoxTrace_Type             = 2,
	ENUM_MAX                       = 3,
};

enum class ERotation_Type_DragonIK : uint8
{
	ENUM_AdditiveRotation          = 0,
	ENUM_ReplaceRotation           = 1,
	ENUM_MAX                       = 2,
};

enum class EInputTransformSpace_DragonIK : uint8
{
	ENUM_WorldSpaceSystem          = 0,
	ENUM_ComponentSpaceSystem      = 1,
	ENUM_MAX                       = 2,
};

enum class EPole_System_DragonIK : uint8
{
	ENUM_SinglePoleSystem          = 0,
	ENUM_NSEWPoleSystem            = 1,
	ENUM_MAX                       = 2,
};

enum class ETwist_Type_DragonIK : uint8
{
	ENUM_PoseAxisTwist             = 0,
	ENUM_UpAxisTwist               = 1,
	ENUM_MAX                       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xC8 - 0x10)
// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
struct FAnimNode_DragonControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FingerData
struct FDragonData_FingerData
{
public:
	class FName                                  Finger_Bone_Name;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Scale;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Trace_Offset;                                      // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Finger_Backward;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FootData
struct FDragonData_FootData
{
public:
	class FName                                  Feet_Bone_Name;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Feet_Rotation_Offset;                              // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Fixed_Pole;                                        // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Knee_Direction_Offset;                             // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Feet_Trace_Offset;                                 // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Front_Trace_Point_Spacing;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Traces_Spacing;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Rotation_Limit;                               // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Fixed_Foot_Height;                                 // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Feet_Heights;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Alpha;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_Feet_Extension;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Extension;                                // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Slope_Offset_Multiplier;                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Lift;                                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Overrided_Trace_Radius;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_FingerData>        Finger_Array;                                      // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_MultiInput
struct FDragonData_MultiInput
{
public:
	class FName                                  Start_Spine;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pelvis;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_FootData>          FeetBones;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x11C (0x11C - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmsData
struct FDragonData_ArmsData
{
public:
	struct FBoneReference                        Clavicle_Bone;                                     // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Shoulder_Bone_Name;                                // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Elbow_Bone_Name;                                   // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Hand_Bone_Name;                                    // 0x30(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Is_this_right_hand;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_lower_twist;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_upper_twist;                                // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Local_Direction_Axis;                              // 0x44(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Arm_Aiming_Offset;                                 // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_hand_rotation;                            // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Relative_axis;                                     // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Extension;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Extension;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Stretch_Ratio;                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch_lower_arm_Priorty;                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Elbow_Pole_Offset;                                 // 0x70(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               North_Pole_Offset;                                 // 0x7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               South_Pole_Offset;                                 // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               West_Pole_Offset;                                  // 0x94(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               East_Pole_Offset;                                  // 0xA0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_limits;                                   // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Max_Arm_H_Angle;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Max_Arm_V_Angle;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Side_Limit;                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Vertical_Limit;                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Side_Limit;                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Vertical_Limit;                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Inner_Clamp;                              // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Outer_Clamp;                              // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ForeArm_Angle_Limit;                               // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Twist_Offset_Reverse;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
struct FDragonData_SingleArmElement
{
public:
	struct FTransform                            Overrided_Arm_Transform;                           // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Arm_Alpha;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation_offset;                                   // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
struct FDragonData_Overrided_Location_Data
{
public:
	TArray<struct FDragonData_SingleArmElement>  Arm_TargetLocation_Overrides;                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmSizeStruct
struct FDragonData_ArmSizeStruct
{
public:
	bool                                         Use_Custom_Arm_Sizes;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_upperArm_length;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Custom_lowerArm_length;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_CustomArmLengths
struct FDragonData_CustomArmLengths
{
public:
	TArray<struct FDragonData_ArmSizeStruct>     CustomArmSizeArray;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8D8 (0x9A0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
public:
	struct FBoneReference                        EndSplineBone;                                     // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        StartSplineBone;                                   // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_83[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LookAtLocation;                                    // 0xF0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0x120(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_86[0x88];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_ArmsData>          Aiming_Hand_Limbs;                                 // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_87[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_Overrided_Location_Data   Arm_TargetLocation_Overrides;                      // 0x1E8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Use_Separate_Targets;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Hand_Rotation;                            // 0x1F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHandStretching;                              // 0x1FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reach_instead;                                     // 0x1FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Aggregate_Hand_Body;                               // 0x1FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Let_Arm_Twist_With_Hand;                           // 0x1FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPole_System_DragonIK             Pole_system_input;                                 // 0x1FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETwist_Type_DragonIK              Arm_twist_axis;                                    // 0x1FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotation_Type_DragonIK           Hand_rotation_method;                              // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Head_Rotation;                            // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Hand_Interpolation;                         // 0x202(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hand_Interpolation_Speed;                          // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDragonData_CustomArmLengths          Custom_arm_lengths;                                // 0x208(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Arm_transform_space;                               // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Main_Arm_Index;                                    // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D[0x90];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Lookat_Radius;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Inner_Body_Clamp;                                  // 0x2B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Lookat_Clamp;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limbs_Clamp;                                       // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Downward_Dip_Multiplier;                           // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Inverted_Dip_Multiplier;                           // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vertical_Dip_Treshold;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Move_Multiplier;                              // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Down_Multiplier;                              // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Up_Rot_Clamp;                                      // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Verticle_Range_Angles;                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Horizontal_Range_Angles;                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Bending_Curve;                                // 0x2F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Multiplier_Curve;                             // 0x378(0x88)(Edit, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Look_transform_space;                              // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Lock_Legs;                                         // 0x401(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_elbow_modification;                         // 0x402(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_separate_hand_solving;                      // 0x403(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Natural_Method;                                // 0x404(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Head_Use_Separate_Clamp;                           // 0x405(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Head_Accurate;                                  // 0x406(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x407(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x409(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x40A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Adaptive_Terrain_Tail;                             // 0x40B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Up_Height;                                   // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Down_Height;                                 // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95[0x8C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x4A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Interpolation;                              // 0x4A6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interpolation_Speed;                               // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Toggle_Interpolation_Speed;                        // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A[0x58];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Axis;                                       // 0x508(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Upward_Axis;                                       // 0x514(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x520(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Reference_Forward_Axis;                        // 0x52C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Reference_Constant_Forward_Axis;                   // 0x530(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E[0xE4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Debug_LookAtLocation;                              // 0x620(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Debug_Hand_Locations;                              // 0x650(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0[0x340];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DragonIKPlugin.SocketDragonReference
struct FSocketDragonReference
{
public:
	uint8                                        Pad_A2[0x30];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
struct FBoneDragonSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneReference;                                     // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocketDragonReference                SocketReference;                                   // 0x20(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x160 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
public:
	struct FBoneReference                        StartSplineBone;                                   // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndSplineBone;                                     // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIterations;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Target_Transform;                                  // 0xF0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD[0x40];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickySocketStruct
struct FDragonData_StickySocketStruct
{
public:
	TArray<struct FBoneSocketTarget>             Sticky_socket_array;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickyFeetStruct
struct FDragonData_StickyFeetStruct
{
public:
	TArray<bool>                                 Sticky_feet_array;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x688 (0x750 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0xC8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1[0x78];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EIK_Type_Plugin                   Ik_type;                                           // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoRotation_Type_Plugin      Rot_interp_type;                                   // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_OptionalRef_Feet_As_Ref;                       // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_solver;                                     // 0x182(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x183(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentSpacePoseLink               OptionalRefPose;                                   // 0x188(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Interpolate_only_z;                                // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Location_Lerp_Speed;                               // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_rotation_speed;                               // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_shift_speed;                                // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0x1B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Location_Lerping;                           // 0x1B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Velocity_Curve;                      // 0x1B8(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Enable_Complex_Rotation_Method;                    // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ComplexSimpleFoot_Velocity_Curve;                  // 0x248(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x40];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPS_Lerp_Treshold;                                 // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7[0x16C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_upper_height;                           // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_down_height;                            // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Trace_Down_Multiplier_Curve;                       // 0x490(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Should_Rotate_Feet;                                // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Show_trace_in_game;                                // 0x51B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC[0x1C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Pitch;                                      // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Roll;                                       // 0x539(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x53C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_forward_direction_vector_CS;             // 0x548(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Poles_forward_direction_vector_CS;                 // 0x554(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Four_Point_Feets;                              // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Foot_Lift_Limit;                            // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Affect_Toes_Always;                                // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Finger_Alpha_Velocity_Curve;                       // 0x568(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Max_Limb_Radius;                                   // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sticky_feet_mode;                                  // 0x5F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sticky_feet_on_speed;                              // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_feet_off_speed;                             // 0x5FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_Feet_Range;                                 // 0x600(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickyFeetStruct          Sticky_feets_data;                                 // 0x608(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Sticky_floor_detection;                            // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Floor_value;                                       // 0x61C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Auto_Sticky_Toggle;                                // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickySocketStruct        Sticky_sockets_data;                               // 0x628(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9[0x108];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Foot_01_Height_Offset;                             // 0x740(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_02_Height_Offset;                             // 0x744(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_03_Height_Offset;                             // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_04_Height_Offset;                             // 0x74C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x9C0 (0x9D0 - 0x10)
// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
struct FAnimNode_DragonSpineSolver : public FAnimNode_Base
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0x10(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC[0x70];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Precision;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPitch;                                      // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumPitch;                                      // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumRoll;                                       // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumRoll;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0xB8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0xDE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rotate_Around_Translate;                           // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESolverComplexityPluginEnum       Complexity_type;                                   // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0xF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x9];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualAlpha;                                       // 0xFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_downward_height;                        // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6[0x13];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Stabilize_pelvis_legs;                             // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Pelvis_UpSlopeStabilization_Alpha;                 // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_DownSlopeStabilization_Alpha;               // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Stabilize_chest_legs;                              // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_UpSlopeStabilization_Alpha;                  // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_DownslopeStabilization_Alpha;                // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Head_Bone;                           // 0x140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Tail_Bone;                           // 0x150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Use_Ducking_Feature;                               // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Ducking_Trace_Channel;                             // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Ducking_Limit;                                     // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Height;                              // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Rotation_Intensity;                  // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Duck_Pelvis_Trace_Offset;                          // 0x170(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Height;                               // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Rotation_Intensity;                   // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Duck_Chest_Trace_Offset;                           // 0x184(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB[0x140];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Up_Offset;                          // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Down_Offset;                        // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Dip_multiplier;                                    // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_adaptive_gravity;                           // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse_fabrik;                                    // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Calculation_To_RefPose;                            // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_Slanted_Height_Up_Offset;                    // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Slanted_Height_Down_Offset;                  // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_side_dip_multiplier;                         // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_adaptive_gravity;                            // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Base_Offset;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Base_Offset;                                // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height;                                // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Pelvis_Height_Multiplier_Curve;                    // 0x318(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height_Chest;                          // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Chest_Height_Multiplier_Curve;                     // 0x3A8(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_power_between;                            // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Automatic_Fabrik_Selection;                    // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Lerp_Speed;                                  // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Location_Lerp_Speed;                               // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_Lerp_Speed;                               // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Multiplier_Curve;                    // 0x468(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Chest_Influence_Alpha;                             // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_ForwardRotation_Intensity;                  // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_UpwardForwardRotation_Intensity;            // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Body_Rotation_Intensity;                           // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Rotation_Offset;                            // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_ForwardRotation_Intensity;                   // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_UpwardForwardRotation_Intensity;             // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_SidewardRotation_Intensity;                  // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Rotation_Offset;                             // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8[0x3C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Full_Extended_Spine;                               // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Max_extension_ratio;                               // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_extension_ratio;                               // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Extension_switch_speed;                            // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x564(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x565(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Chest_Rotations;                          // 0x566(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Pelvis_Rotations;                         // 0x567(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Force_Activation;                                  // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_feet_placement;                           // 0x56D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Accurate_Foot_Curve;                               // 0x570(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_crosshair_trace_also_for_fail_distance;        // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Only_Root_Solve;                                   // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Chest_Solve;                                // 0x5FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF[0x9];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Overall_PostSolved_Offset;                         // 0x604(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_direction_vector_CS;                     // 0x610(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_Direction_Vector;                          // 0x61C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Flip_forward_and_right;                            // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERefPosePluginEnum                SolverReferencePose;                               // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Spine_Feet_Connect;                                // 0x639(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101[0x30A];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Snake_Joint_Speed;                                 // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Snake_Interpolation;                        // 0x948(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_snake;                                          // 0x949(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_End_Points;                                 // 0x94A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Feet_Distance;                             // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Feet_Distance;                             // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayLineTrace;                                  // 0x954(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103[0x7B];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
struct FDragonData_WarpLimbsData
{
public:
	class FName                                  Foot_Bone_Name;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Lift_Reference_Location;                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Param_Adder;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Min_Max_Warp;                                      // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_extra_compression_height;                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x488 (0x550 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
public:
	TArray<struct FDragonData_WarpLimbsData>     Dragon_limb_input;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Hip_Bone_Name;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104[0x44];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0x11F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x244(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_vector_CS;                                 // 0x250(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed_warping_const;                               // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_slope_warp;                                 // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Automatic_speed_warping_const;                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Slope_detection_tolerance;                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Slope_Interpolation;                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_downward_height;                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_scale;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Limb_Compression_Intensity;                        // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Limb_Lifting_Curve;                                // 0x2C0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Hip_Change_Intensity;                              // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Hip_Lifting_Curve;                                 // 0x350(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D[0x178];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
struct FCCDIK_Modified_ChainLink
{
public:
	uint8                                        Pad_10E[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


