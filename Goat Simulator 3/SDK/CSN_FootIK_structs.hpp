#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETraceMode : uint8
{
	LineTrace                      = 0,
	SphereTrace                    = 1,
	ETraceMode_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct CSN_FootIK.CSNBoneControlSpaces
struct FCSNBoneControlSpaces
{
public:
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct CSN_FootIK.CSNModifyModes
struct FCSNModifyModes
{
public:
	enum class EBoneModificationMode             TranslationMode;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// ScriptStruct CSN_FootIK.CSNLegDefinition
struct FCSNLegDefinition
{
public:
	struct FBoneReference                        FootBone;                                          // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FootIKBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        KneeIKBone;                                        // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FootOffsetBone;                                    // 0x30(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        UpperLegBone;                                      // 0x40(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FootTargetBone;                                    // 0x50(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableFootLocking;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CSN_FootIK.CSNIKBoneContainer
struct FCSNIKBoneContainer
{
public:
	struct FBoneReference                        PelvisBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCSNLegDefinition>             LegDefinitions;                                    // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3B0 (0x478 - 0xC8)
// ScriptStruct CSN_FootIK.CSNAnimNode_FootIK2
struct FCSNAnimNode_FootIK2 : public FAnimNode_SkeletalControlBase
{
public:
	bool                                         bIsRagdoll;                                        // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FloorLocationOverride;                             // 0xCC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCSNIKBoneContainer                   IKBones;                                           // 0xD8(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       KneeIKBoneOffsets;                                 // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EBoneControlSpace                 KneeIKBoneOffsetBoneControlSpace;                  // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_240[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurveDisableFootIK;                                // 0x10C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableFootIKWhenNotOnGround;                     // 0x114(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_242[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurveEnableButtIK;                                 // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableOnMobile;                                  // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETraceMode                        TraceModeForFootTraces;                            // 0x121(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_246[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereTraceRadius;                                 // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 CollisionChannelFootLineTrace;                     // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceLengthAboveFoot;                              // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TraceLengthBelowFoot;                              // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFootBonesForTracing;                           // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                TraceBones;                                        // 0x138(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              FootRotationLimit;                                 // 0x148(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        FootOffsetLimit;                                   // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxLegStretchDistance;                             // 0x158(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FootOffsetInterpSpeed;                             // 0x15C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PelvisOffsetInterpSpeed;                           // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PelvisResetInterpSpeed;                            // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_252[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FootLockingCurveNames;                             // 0x170(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               VisibleDebugTextOffset;                            // 0x180(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                VisibleDebugTextColor;                             // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_256[0x2E8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x4A0 - 0x478)
// ScriptStruct CSN_FootIK.CSNAnimNode_FootIKQuadruped2
struct FCSNAnimNode_FootIKQuadruped2 : public FCSNAnimNode_FootIK2
{
public:
	class UCurveFloat*                           HorizontalPelvisOffsetFactor;                      // 0x478(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           VerticalPelvisOffsetFactor;                        // 0x480(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             BackPelvisPitchAxis;                               // 0x488(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFlipBackPelvisPitchAxisAxis;                      // 0x489(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             MeshForwardAxis;                                   // 0x48A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMeshForwardAxisPointingBackwards;               // 0x48B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             PelvisOffsetLimits;                                // 0x48C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_261[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CSN_FootIK.CSNOffsetIK
struct FCSNOffsetIK
{
public:
	struct FVector                               Translation;                                       // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct CSN_FootIK.CSNFootIKData2
struct FCSNFootIKData2
{
public:
	struct FCSNOffsetIK                          PelvisOffset;                                      // 0x0(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCSNOffsetIK>                  FootOffsets;                                       // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    LockingTransforms;                                 // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                LockingAlphas;                                     // 0x38(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CSN_FootIK.CSNFootIKData
struct FCSNFootIKData
{
public:
	struct FCSNOffsetIK                          PelvisOffset;                                      // 0x0(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FCSNOffsetIK>                  FootOffsets;                                       // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCSNOffsetIK>                  LockingTransforms;                                 // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                LockingAlphas;                                     // 0x38(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    FootTransformsForRagdoll;                          // 0x48(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    FootBoneTransforms;                                // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CSN_FootIK.CSNVisualDebugInfo
struct FCSNVisualDebugInfo
{
public:
	class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x10(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x1C(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x2C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDrawDistance;                                   // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


