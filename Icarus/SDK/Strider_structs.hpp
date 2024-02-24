#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlopeWarpQuality : uint8
{
	Capsule                        = 0,
	PerFootRay                     = 1,
	PerFootShape                   = 2,
	LODBased                       = 3,
	ESlopeWarpQuality_MAX          = 4,
};

enum class ESlopeRollCompensation : uint8
{
	None                           = 0,
	AdjustHips                     = 1,
	AdjustFeet                     = 2,
	ESlopeRollCompensation_MAX     = 3,
};

enum class ESlopeDetectionMode : uint8
{
	ManualSlope                    = 0,
	AutomaticSlope                 = 1,
	ESlopeDetectionMode_MAX        = 2,
};

enum class EStrideVectorMethod : uint8
{
	ManualVelocity                 = 0,
	ActorVelocity                  = 1,
	EStrideVectorMethod_MAX        = 2,
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
	uint8                                        Pad_524[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Strider.BoneChain
struct FBoneChain
{
public:
	TArray<struct FBoneChainLink>                BoneChain;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x70 - 0x10)
// ScriptStruct Strider.AnimNode_AccelerationWarp
struct FAnimNode_AccelerationWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x2C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TorsoBendRatio;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTorsoBend;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChain                            SpineChain;                                        // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_541[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct Strider.AnimNode_BankWarp
struct FAnimNode_BankWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BankValue;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ForwardAxis;                                       // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistRate;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTwist;                                          // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanRate;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLean;                                           // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_54C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChain                            SpineChain;                                        // 0x68(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                RootBonesToAdjust;                                 // 0x88(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x90 - 0x10)
// ScriptStruct Strider.AnimNode_OrientationWarp
struct FAnimNode_OrientationWarp : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperBodyAlpha;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x2C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWarpDelta;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Smoothing;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x44(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneChain                            SpineChain;                                        // 0x58(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                RootBonesToCounterAdjust;                          // 0x78(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_55F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
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

// 0x80 (0x80 - 0x0)
// ScriptStruct Strider.LimbDefinition
struct FLimbDefinition
{
public:
	struct FBoneReference                        Tip;                                               // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        IkTarget;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BoneCount;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56B[0x5C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x1B0 - 0xC8)
// ScriptStruct Strider.AnimNode_SlopeWarp
struct FAnimNode_SlopeWarp : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               SlopeNormal;                                       // 0xC8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SlopePoint;                                        // 0xD4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlopeDetectionMode               SlopeDetectionMode;                                // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlopeRollCompensation            SlopeRollCompensation;                             // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IKRootLeftVector;                                  // 0xE4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSlopeAngle;                                     // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeSmoothingRate;                                // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AllowExtensionPercent;                             // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownSlopeShiftRate;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        IkRoot;                                            // 0x104(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHipAdjustment                        HipAdjustment;                                     // 0x114(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_58F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLimbDefinition>               Limbs;                                             // 0x130(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                AdditionalBonesToAdjustWithHips;                   // 0x140(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_594[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Strider.StridePivot
struct FStridePivot
{
public:
	struct FBoneReference                        Root;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bProjectToGround;                                  // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStrideVectorMethod               StrideVectorMethod;                                // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Smoothing;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChooseNearestAxis;                                // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x190 - 0xC8)
// ScriptStruct Strider.AnimNode_StrideWarp
struct FAnimNode_StrideWarp : public FAnimNode_SkeletalControlBase
{
public:
	float                                        StrideScale;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Twist;                                             // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AllowExtensionPercent;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStridePivot                          StridePivot;                                       // 0xE0(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHipAdjustment                        HipAdjustment;                                     // 0x140(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLimbDefinition>               Limbs;                                             // 0x158(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                AdditionalBonesToAdjustWithHips;                   // 0x168(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B4[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


