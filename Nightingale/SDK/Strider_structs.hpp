#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EStrideVectorMethod : uint8
{
	ManualVelocity                 = 0,
	ActorVelocity                  = 1,
	EStrideVectorMethod_MAX        = 2,
};

enum class ESlopeDetectionMode : uint8
{
	ManualSlope                    = 0,
	AutomaticSlope                 = 1,
	ESlopeDetectionMode_MAX        = 2,
};

enum class ESlopeRollCompensation : uint8
{
	None                           = 0,
	AdjustHips                     = 1,
	AdjustFeet                     = 2,
	ESlopeRollCompensation_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Strider.BoneChainLink
struct FBoneChainLink
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1744[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Strider.BoneChainStrider
struct FBoneChainStrider
{
public:
	TArray<struct FBoneChainLink>                BoneChain;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_174E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xB0 - 0x10)
// ScriptStruct Strider.AnimNode_AccelerationWarp
struct FAnimNode_AccelerationWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ALPHA;                                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1759[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UpAxis;                                            // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TorsoBendRatio;                                    // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTorsoBend;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1761[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChainStrider                     SpineChain;                                        // 0x58(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1766[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RootCounterRotation;                               // 0x80(0x20)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1768[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct Strider.AnimNode_BankWarp
struct FAnimNode_BankWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BankValue;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ALPHA;                                             // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ForwardAxis;                                       // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistRate;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTwist;                                          // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanRate;                                          // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLean;                                           // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x6C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_177F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChainStrider                     SpineChain;                                        // 0x80(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FQuat                                 RootCounterRotation;                               // 0xA0(0x20)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1786[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct Strider.AnimNode_OrientationWarp
struct FAnimNode_OrientationWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperBodyAlpha;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UpAxis;                                            // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ALPHA;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWarpDelta;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChainStrider                     SpineChain;                                        // 0x68(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RootCounterRotation;                               // 0x90(0x20)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Strider.LimbDefinition
struct FLimbDefinition
{
public:
	struct FBoneReference                        Tip;                                               // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        IkTarget;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BoneCount;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C0[0x9C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Strider.HipAdjustment
struct FHipAdjustment
{
public:
	struct FBoneReference                        Hips;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AdjustmentRatio;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRecoveryRate;                                   // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x1D0 - 0xC8)
// ScriptStruct Strider.AnimNode_SlopeWarp
struct FAnimNode_SlopeWarp : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               SlopeNormal;                                       // 0xC8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SlopePoint;                                        // 0xE0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlopeDetectionMode               SlopeDetectionMode;                                // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlopeRollCompensation            SlopeRollCompensation;                             // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSlopeAngle;                                     // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeSmoothingRate;                                // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AllowExtensionPercent;                             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownSlopeShiftRate;                                // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        IkRoot;                                            // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHipAdjustment                        HipAdjustment;                                     // 0x120(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLimbDefinition>               Limbs;                                             // 0x138(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EE[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Strider.StridePivot
struct FStridePivot
{
public:
	struct FBoneReference                        Root;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bProjectToGround;                                  // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1800[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStrideVectorMethod               StrideVectorMethod;                                // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1804[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Smoothing;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChooseNearestAxis;                                // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180E[0x6F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x1B0 - 0xC8)
// ScriptStruct Strider.AnimNode_StrideWarp
struct FAnimNode_StrideWarp : public FAnimNode_SkeletalControlBase
{
public:
	float                                        StrideScale;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Twist;                                             // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AllowExtensionPercent;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1828[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStridePivot                          StridePivot;                                       // 0xE0(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHipAdjustment                        HipAdjustment;                                     // 0x170(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLimbDefinition>               Limbs;                                             // 0x188(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1835[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


