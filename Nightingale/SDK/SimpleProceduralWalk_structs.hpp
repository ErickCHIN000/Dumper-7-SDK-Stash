#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESimpleProceduralWalk_MeshForwardAxis : uint8
{
	X                              = 0,
	NX                             = 1,
	Y                              = 2,
	NY                             = 3,
	ESimpleProceduralWalk_MAX      = 4,
};

enum class ESimpleProceduralWalk_SolverType : uint8
{
	BASIC                          = 0,
	ADVANCED                       = 1,
	ESimpleProceduralWalk_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct SimpleProceduralWalk.SimpleProceduralWalk_Leg
struct FSimpleProceduralWalk_Leg
{
public:
	struct FBoneReference                        ParentBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TipBone;                                           // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimits;                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_625[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RotationLimitPerJoints;                            // 0x40(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SimpleProceduralWalk.SimpleProceduralWalk_LegGroup
struct FSimpleProceduralWalk_LegGroup
{
public:
	TArray<int32>                                LegIndices;                                        // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x2C0 - 0xC8)
// ScriptStruct SimpleProceduralWalk.AnimNode_SPW
struct FAnimNode_SPW : public FAnimNode_SkeletalControlBase
{
public:
	bool                                         bDebug;                                            // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESimpleProceduralWalk_MeshForwardAxis SkeletalMeshForwardAxis;                           // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BodyBone;                                          // 0xCC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_62E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSimpleProceduralWalk_Leg>     Legs;                                              // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSimpleProceduralWalk_LegGroup> LegGroups;                                         // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepDistanceForward;                               // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepDistanceRight;                                 // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSlopeReductionMultiplier;                      // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinStepDuration;                                   // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToUnplant;                              // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixFeetTargetAfterPercent;                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_639[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FeetTargetsInterpSpeeds;                           // 0x120(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeetTipBonesRotationInterpSpeed;                   // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           SpeedCurve;                                        // 0x138(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           HeightCurve;                                       // 0x140(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyBounceMultiplier;                              // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodySlopeMultiplier;                               // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyLocationInterpSpeed;                           // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyZOffset;                                       // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBodyRotateOnAcceleration;                         // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBodyRotateOnFeetLocations;                        // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BodyRotationInterpSpeed;                           // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyAccelerationRotationMultiplier;                // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyFeetLocationsRotationMultiplier;               // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MaxBodyRotation;                                   // 0x168(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class ESimpleProceduralWalk_SolverType  SolverType;                                        // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_654[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadiusCheckMultiplier;                             // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceCheckMultiplier;                           // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x18C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Precision;                                         // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_661[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceLength;                                       // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_664[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceZOffset;                                      // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_665[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SimpleProceduralWalk.SimpleProceduralWalk_RotationLimitsPerJoint
struct FSimpleProceduralWalk_RotationLimitsPerJoint
{
public:
	TArray<float>                                RotationLimits;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SimpleProceduralWalk.SimpleProceduralWalk_LegData
struct FSimpleProceduralWalk_LegData
{
public:
	uint8                                        Pad_673[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SimpleProceduralWalk.SimpleProceduralWalk_LegGroupData
struct FSimpleProceduralWalk_LegGroupData
{
public:
	uint8                                        Pad_678[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct SimpleProceduralWalk.SPW_CCDIKChainLink
struct FSPW_CCDIKChainLink
{
public:
	uint8                                        Pad_67C[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


