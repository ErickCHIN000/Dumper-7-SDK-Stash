#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxLookAxisOption : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	EGbxLookAxisOption_MAX         = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x740 (0x8B0 - 0x170)
// ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LegIK
struct FGbxAnimNode_LegIK : public FAnimNode_LegIK
{
public:
	float                                        FootIKTraceUpScale;                                // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKTraceDownScale;                              // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKOffsetInterpSpeed;                           // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FootIKTargetOffset;                                // 0x17C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FootIKLODThreshold;                                // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  FootIkTraceScreenSizeThreshold;                    // 0x190(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseFootIkTraceScreenSizeThreshold;                // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB2[0x62F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNumericRange                         MeshOffsetCharacterSpeedRange;                     // 0x7D8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MeshIKOffsetInterpSpeed;                           // 0x7E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLimitFootDistanceToMeshOffset;              // 0x7E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB8[0x27];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SlopeAdaptation;                                   // 0x80C(0xC)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        SlopeAdaptationBone;                               // 0x828(0x18)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        MaxSlopeAngle;                                     // 0x840(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeNormalMinInterpSpeed;                         // 0x844(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeNormalMaxInterpSpeed;                         // 0x848(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         SlopeNormalCharacterSpeedRange;                    // 0x84C(0x8)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC6[0x4C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinVelocity;                                       // 0x8A0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxVelocity;                                       // 0x8A4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DCC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxAnimRuntimeBase.BoneBlendParams
struct FBoneBlendParams
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawWeight;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchWeight;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         YawClamp;                                          // 0x24(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FNumericRange                         PitchClamp;                                        // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseRotationOffset;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtClamp;                                       // 0x44(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxLookAxisOption                LookAxis;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxLookAxisOption                UpAxis;                                            // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE0[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x2D0 - 0x140)
// ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LookAt
struct FGbxAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x140(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ParentBoneToModify;                                // 0x158(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGbxLookAxisOption                ParentLookAxis;                                    // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneBlendParams>              BonesToModify;                                     // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneBlendParams>              EyeBonesToModify;                                  // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               HeadLookAtLocation;                                // 0x198(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EyeLookAtLocation;                                 // 0x1A4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadLookPercentage;                                // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebug;                                      // 0x1B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEyeMovement;                                   // 0x1B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              EyeShiftMin;                                       // 0x1B8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeShiftMax;                                       // 0x1C4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeGlanceMin;                                      // 0x1D0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeGlanceMax;                                      // 0x1DC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EyeFocusTimeMin;                                   // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeFocusTimeMax;                                   // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeGlanceTimeMin;                                  // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeGlanceTimeMax;                                  // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeShiftTimeMin;                                   // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeShiftTimeMax;                                   // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EyeLODThreshold;                                   // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  EyeScreenSizeThreshold;                            // 0x208(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseEyeScreenSizeThreshold;                        // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             ReferencePoseLink;                                 // 0x228(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E23[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


