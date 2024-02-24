#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxCustomEventContext : uint8
{
	Owner                          = 0,
	Instigator                     = 1,
	EGbxCustomEventContext_MAX     = 2,
};

enum class EFloatComparisonType : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	LessThan                       = 4,
	LessThanOrEqual                = 5,
	EFloatComparisonType_MAX       = 6,
};

enum class EWeightTypeToUse : uint8
{
	Zero                           = 0,
	One                            = 1,
	Cached                         = 2,
	Dynamic                        = 3,
	EWeightTypeToUse_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x88 - 0x68)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_AnimTable
struct FGbxAnimNode_AnimTable : public FAnimNode_AssetPlayerBase
{
public:
	class UGbxAnimTable*                         AnimTable;                                         // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     Sequence;                                          // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAnimInstance*                      GbxAnimInstance;                                   // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleRateByMeshScale;                             // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D63[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatComparison
struct FGbxAnimNode_BlendListByFloatComparison : public FAnimNode_BlendListBase
{
public:
	float                                        ValueA;                                            // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueB;                                            // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFloatComparisonType              Comparison;                                        // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D70[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAnimRuntime.FloatMinMaxRange
struct FFloatMinMaxRange
{
public:
	float                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatInRange
struct FGbxAnimNode_BlendListByFloatInRange : public FAnimNode_BlendListBase
{
public:
	float                                        BlendValue;                                        // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFloatMinMaxRange>             MinMaxRanges;                                      // 0xD0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CurrentRangeIndex;                                 // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAnimRuntime.IntMinMaxRange
struct FIntMinMaxRange
{
public:
	int32                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByIntInRange
struct FGbxAnimNode_BlendListByIntInRange : public FAnimNode_BlendListBase
{
public:
	int32                                        BlendValue;                                        // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIntMinMaxRange>               MinMaxRanges;                                      // 0xD0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CurrentRangeIndex;                                 // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D93[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxAnimRuntime.BoneWeightCurveOverride
struct FBoneWeightCurveOverride
{
public:
	enum class ECurveOverrideType                CurveOverrideType;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNormalizeCurvesOverride              NormalizeCurveOverrideData;                        // 0x8(0x18)(NativeAccessSpecifierPublic)
	class FName                                  SingleOverrideCurveName;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                CacheWeightIndicesToUpdate;                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xF0 - 0x30)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendTwoPosesPerBone
struct FGbxAnimNode_BlendTwoPosesPerBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             PoseA;                                             // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             PoseB;                                             // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<float>                                CachedBlendWeights;                                // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                DynamicCachedBlendWeights;                         // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBoneWeightCurveOverride>      BoneWeightCurveOverrides;                          // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UGbxAnimInstance*                      GbxAnimInstance;                                   // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 SkeletonGuid;                                      // 0x98(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 VirtualBoneGuid;                                   // 0xA8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxBoneSet*                           BoneSet;                                           // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 BoneSetGuid;                                       // 0xC0(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ActionSlotName;                                    // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DBA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_CopyParentTransforms
struct FGbxAnimNode_CopyParentTransforms : public FAnimNode_Base
{
public:
	uint8                                        Pad_DC3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x370 - 0x290)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_HandIK
struct FGbxAnimNode_HandIK : public FAnimNode_TwoBoneIK
{
public:
	struct FBoneReference                        ObjectBone;                                        // 0x290(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ObjectOffset;                                      // 0x2B0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x2E0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            HandOffsetToIkWorld;                               // 0x310(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWorldIkOverride;                                  // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        EffectorAlignmentBone;                             // 0x348(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AlignToObjectAlpha;                                // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE5[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAnimRuntime.InputTransforms
struct FInputTransforms
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x178 - 0x140)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_ModifyBoneList
struct FGbxAnimNode_ModifyBoneList : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FBoneReference>                BonesToModify;                                     // 0x140(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x152(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x153(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x155(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputTransforms                      InputTransforms;                                   // 0x158(0x10)(Edit, EditFixedSize, NativeAccessSpecifierPublic)
	uint8                                        Pad_E11[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_Print
struct FGbxAnimNode_Print : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                InString;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintToLog;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintToScreen;                                    // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TextColor;                                         // 0x5C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x178 - 0x140)
// ScriptStruct GbxAnimRuntime.GbxAnimNode_Spin
struct FGbxAnimNode_Spin : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x140(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationAmount;                                    // 0x158(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E36[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x170(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E38[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


