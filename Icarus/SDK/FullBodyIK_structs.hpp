#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPoleVectorOption : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EPoleVectorOption_MAX          = 2,
};

enum class EFBIKBoneLimitType : uint8
{
	Free                           = 0,
	Limit                          = 1,
	Locked                         = 2,
	EFBIKBoneLimitType_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
public:
	bool                                         bForceEffectorRotationTarget;                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyApplyWhenReachedToTarget;                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit
{
public:
	enum class EFBIKBoneLimitType                LimitType_X;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFBIKBoneLimitType                LimitType_Y;                                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFBIKBoneLimitType                LimitType_Z;                                       // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Limit;                                             // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStiffness;                                     // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearStiffness;                                   // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularStiffness;                                  // 0x1C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAngularLimit;                                  // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1703[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFBIKBoneLimit                        AngularLimit;                                      // 0x2C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUsePoleVector;                                    // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoleVectorOption                 PoleVectorOption;                                  // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1715[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x4C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
public:
	bool                                         bDrawDebugHierarchy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorAngularMotionStrength;                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorLinearMotionStrength;                        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugAxes;                                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugEffector;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugConstraints;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1732[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DrawSize;                                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1737[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
public:
	float                                        LinearMotionStrength;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLinearMotionStrength;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularMotionStrength;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAngularMotionStrength;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultTargetClamp;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseJacobianTranspose;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PositionDepth;                                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RotationDepth;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pull;                                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
public:
	uint8                                        Pad_1789[0x198];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x2B0 - 0x68)
// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Root;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1797[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFBIKEndEffector>              Effectors;                                         // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFBIKConstraintOption>         Constraints;                                       // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSolverInput                          SolverProperty;                                    // 0x98(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMotionProcessInput                   MotionProperty;                                    // 0xBC(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFBIKDebugOption                      DebugOption;                                       // 0xC0(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FullbodyIK_WorkData          WorkData;                                          // 0x110(0x198)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


