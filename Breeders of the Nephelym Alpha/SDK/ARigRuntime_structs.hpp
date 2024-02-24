#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoneModMode : uint8
{
	EBM_IgnoreMode                 = 0,
	EBM_ReplaceMode                = 1,
	EBM_AdditiveMode               = 2,
	EBM_MAX                        = 3,
};

enum class EConstraintEnum : uint8
{
	VE_Parent                      = 0,
	VE_Point                       = 1,
	VE_Orient                      = 2,
	VE_Scale                       = 3,
	VE_Aim                         = 4,
	VE_MAX                         = 5,
};

enum class ETransformType : uint8
{
	TE_Loc                         = 0,
	TE_Rot                         = 1,
	TE_Scale                       = 2,
	TE_MAX                         = 3,
};

enum class EAxisEnum : uint8
{
	VE_XY                          = 0,
	VE_XZ                          = 1,
	VE_YX                          = 2,
	VE_YZ                          = 3,
	VE_ZX                          = 4,
	VE_ZY                          = 5,
	VE_MAX                         = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ARigRuntime.BonesTransforms
struct FBonesTransforms
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x50 - 0x10)
// ScriptStruct ARigRuntime.AnimNode_SetBonesTransforms
struct FAnimNode_SetBonesTransforms : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class EBoneModMode                      TranslationMode;                                   // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModMode                      RotationMode;                                      // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModMode                      ScaleMode;                                         // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D50[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x58 - 0x10)
// ScriptStruct ARigRuntime.AnimNode_SetBoneTransform
struct FAnimNode_SetBoneTransform : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocation;                                         // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotation;                                         // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScale;                                            // 0x4E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D53[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ARigRuntime.CreateConstraint
struct FCreateConstraint
{
public:
	TSubclassOf<class ARigConstraint>            ConstraintClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConstrainActor;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Targets;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Weights;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  UpActor;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ARigConstraint*                        Constraint;                                        // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ARigRuntime.ParentControllers
struct FParentControllers
{
public:
	class FName                                  ParentController;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ChildControllers;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ARigRuntime.ControllerShapeData
struct FControllerShapeData
{
public:
	class UStaticMesh*                           Shape;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ShapeOffset;                                       // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ARigRuntime.AxisLimit
struct FAxisLimit
{
public:
	bool                                         bLimit;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MinMax;                                            // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ARigRuntime.VectorLimits
struct FVectorLimits
{
public:
	struct FAxisLimit                            XLimit;                                            // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxisLimit                            YLimit;                                            // 0xC(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxisLimit                            ZLimit;                                            // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ARigRuntime.ControllerLimits
struct FControllerLimits
{
public:
	struct FVectorLimits                         TranslationLimits;                                 // 0x0(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLockRotation;                                     // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVectorLimits                         ScaleLimits;                                       // 0x28(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ARigRuntime.AimSettings
struct FAimSettings
{
public:
	enum class EAxisEnum                         AxisEnum;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimInvert;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpInvert;                                         // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D67[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Offset;                                            // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct ARigRuntime.SplineIkData
struct FSplineIkData
{
public:
	class FName                                  RootBone;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentController;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  Shape;                                             // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MidParent;                                         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidLerp;                                           // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Curvature;                                         // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolveEnds;                                        // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFkMode;                                           // 0x7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRootOrientation;                                  // 0x7E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerLimits                     Limits;                                            // 0x80(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BonesToSolve;                                      // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ControllerGroups;                                  // 0xF0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                ParentCtrlActor;                                   // 0x100(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Offsets;                                           // 0x108(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BonesOffsets;                                      // 0x118(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x128(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SplineLength;                                      // 0x138(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      Spline;                                            // 0x140(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ARigRuntime.CustomControllerData
struct FCustomControllerData
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentController;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdate;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldOrientation;                                 // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D79[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  Shape;                                             // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x70(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Controller;                                        // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ControllerGrp;                                     // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ControllerOffset;                                  // 0xD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ARigRuntime.FkHierarchyData
struct FFkHierarchyData
{
public:
	int32                                        HierarchyDepth;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentController;                                  // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  Shape;                                             // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFollowParentProperty;                             // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerLimits                     Limits;                                            // 0x74(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ControllerGroups;                                  // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BonesToSolve;                                      // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    FollowOffsets;                                     // 0xF0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        FollowControllers;                                 // 0x100(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ARigRuntime.TwistBonesData
struct FTwistBonesData
{
public:
	TArray<class FName>                          TwistBones;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCreateControllers;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D84[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  Shape;                                             // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x70(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0xBC(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    BonesOffsets;                                      // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ControllerGroups;                                  // 0xF0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneOffset;                                     // 0x100(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Bold;                                              // 0x130(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D88[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ARigRuntime.TwoBoneIkData
struct FTwoBoneIkData
{
public:
	bool                                         bArm;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TipBone;                                           // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentController;                                  // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimIkToMiddleFinger;                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MiddleFinger;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPoleVectorSimple;                                 // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           IkShape;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     IkLimits;                                          // 0x30(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           PvShape;                                           // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     PvLimits;                                          // 0x88(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xD4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvPosMult;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachPvToIk;                                     // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    LocalBones;                                        // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BoneOffsets;                                       // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BoneLengths;                                       // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimSettings>                  AimSettings;                                       // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ControllerGroups;                                  // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BonesToSolve;                                      // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            IkOffset;                                          // 0x160(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            SecondIkPos;                                       // 0x190(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ARigRuntime.FingersData
struct FFingersData
{
public:
	class FName                                  HandBone;                                          // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FingersTipBones;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PhalanxNum;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentToMiddleFinger;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerLimits                     Limits;                                            // 0x24(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>              FingersHierarchy;                                  // 0x70(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                FingersGrp;                                        // 0x80(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ARigRuntime.FootControllersData
struct FFootControllersData
{
public:
	class FName                                  ToeSocket;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeelSocket;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x14(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ToeOffset;                                         // 0x60(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0x90(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x930 (0x930 - 0x0)
// ScriptStruct ARigRuntime.FkIkData
struct FFkIkData
{
public:
	bool                                         bArm;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThreeBoneIk;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPoleVectorSimple;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TipBone;                                           // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentController;                                  // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAimIkToMiddleFinger;                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MiddleFinger;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           FkShape;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     FkLimits;                                          // 0x28(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FkSize;                                            // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FkColor;                                           // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           IkShape;                                           // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     IkLimits;                                          // 0x90(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           PvShape;                                           // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     PvLimits;                                          // 0xE8(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        IkSize;                                            // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PvPosMult;                                         // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachPvToIk;                                     // 0x13C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          IkColor;                                           // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                      Fk;                                                // 0x150(0x110)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        Ik;                                                // 0x260(0x1C0)(BlueprintVisible, NativeAccessSpecifierPublic)
	class AActor*                                FkIkController;                                    // 0x420(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFingers;                                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFingersData                          FingersData;                                       // 0x430(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bFootControllers;                                  // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFootControllersData                  FootControllersData;                               // 0x4C0(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       FirstTwistBones;                                   // 0x560(0x140)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       SecondTwistBones;                                  // 0x6A0(0x140)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       ThirdTwistBones;                                   // 0x7E0(0x140)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Bold;                                              // 0x920(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB5[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ARigRuntime.ModularRigData
struct FModularRigData
{
public:
	struct FControllerShapeData                  MainShape;                                         // 0x0(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     MainLimits;                                        // 0x50(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCustomControllerData>         CustomControllers;                                 // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                 SplineIkRigs;                                      // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>              FkHierarchyRigs;                                   // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bZeroRoot;                                         // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateFromSource;                                 // 0xE1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBA[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xF0(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                Main;                                              // 0x120(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct ARigRuntime.MorphController
struct FMorphController
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerShapeData                  Shape;                                             // 0x40(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x90(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MorphTargets;                                      // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                Controller;                                        // 0xF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct ARigRuntime.EyesSettings
struct FEyesSettings
{
public:
	bool                                         bEyes;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftEyeBone;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightEyeBone;                                      // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC2[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  AimCtrlShape;                                      // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     AimCtrlLimits;                                     // 0x70(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           EyeCtrlShape;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     EyeCtrlLimits;                                     // 0xC8(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EyeCtrlSize;                                       // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeftColor;                                         // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RightColor;                                        // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAimSettings>                  AimSettings;                                       // 0x138(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Offsets;                                           // 0x148(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0x158(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ARigRuntime.EyelidsSettings
struct FEyelidsSettings
{
public:
	bool                                         bEyelids;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftUpperEyelid;                                   // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightUpperEyelid;                                  // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftLowerEyelid;                                   // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightLowerEyelid;                                  // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           EyelidsCtrlShape;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControllerLimits                     EyelidsCtrlLimits;                                 // 0x30(0x4C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EyelidsCtrlSize;                                   // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EyelidsControllersPosition;                        // 0x80(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Bones;                                             // 0x90(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Offsets;                                           // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Controllers;                                       // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x300 (0x300 - 0x0)
// ScriptStruct ARigRuntime.FaceSettings
struct FFaceSettings
{
public:
	bool                                         bFace;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  HeadBone;                                          // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeadControllerName;                                // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD8[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  FaceTableShape;                                    // 0x20(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            FaceTableOffset;                                   // 0x70(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEyesSettings                         EyesSettings;                                      // 0xA0(0x170)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEyelidsSettings                      EyelidsSettings;                                   // 0x210(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMorphController>              MorphControllers;                                  // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          MorphTargets;                                      // 0x2E0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                FaceTableCtrl;                                     // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                HeadController;                                    // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


