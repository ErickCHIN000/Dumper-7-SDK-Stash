#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EControlRigComponentMapDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2,
};

enum class EControlRigComponentSpace : uint8
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5,
};

enum class ERigExecutionType : uint8
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2,
};

enum class EBoneGetterSetterMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	Max                            = 2,
};

enum class ETransformGetterType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2,
};

enum class EControlRigClampSpatialMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	EControlRigClampSpatialMode_MAX = 3,
};

enum class ETransformSpaceMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4,
};

enum class EControlRigDrawSettings : uint8
{
	Points                         = 0,
	Lines                          = 1,
	LineStrip                      = 2,
	DynamicMesh                    = 3,
	EControlRigDrawSettings_MAX    = 4,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	Axes                           = 0,
	Max                            = 1,
};

enum class EControlRigAnimEasingType : uint8
{
	Linear                         = 0,
	QuadraticEaseIn                = 1,
	QuadraticEaseOut               = 2,
	QuadraticEaseInOut             = 3,
	CubicEaseIn                    = 4,
	CubicEaseOut                   = 5,
	CubicEaseInOut                 = 6,
	QuarticEaseIn                  = 7,
	QuarticEaseOut                 = 8,
	QuarticEaseInOut               = 9,
	QuinticEaseIn                  = 10,
	QuinticEaseOut                 = 11,
	QuinticEaseInOut               = 12,
	SineEaseIn                     = 13,
	SineEaseOut                    = 14,
	SineEaseInOut                  = 15,
	CircularEaseIn                 = 16,
	CircularEaseOut                = 17,
	CircularEaseInOut              = 18,
	ExponentialEaseIn              = 19,
	ExponentialEaseOut             = 20,
	ExponentialEaseInOut           = 21,
	ElasticEaseIn                  = 22,
	ElasticEaseOut                 = 23,
	ElasticEaseInOut               = 24,
	BackEaseIn                     = 25,
	BackEaseOut                    = 26,
	BackEaseInOut                  = 27,
	BounceEaseIn                   = 28,
	BounceEaseOut                  = 29,
	BounceEaseInOut                = 30,
	EControlRigAnimEasingType_MAX  = 31,
};

enum class EControlRigRotationOrder : uint8
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EControlRigRotationOrder_MAX   = 6,
};

enum class ECRSimPointIntegrateType : uint8
{
	Verlet                         = 0,
	SemiExplicitEuler              = 1,
	ECRSimPointIntegrateType_MAX   = 2,
};

enum class ECRSimConstraintType : uint8
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4,
};

enum class ECRSimPointForceType : uint8
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	Replace                        = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigBoneType : uint8
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2,
};

enum class ERigControlAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3,
};

enum class ERigControlValueType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4,
};

enum class ERigControlType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10,
};

enum class ERigHierarchyImportMode : uint8
{
	Append                         = 0,
	Replace                        = 1,
	ReplaceLocalTransform          = 2,
	ReplaceGlobalTransform         = 3,
	Max                            = 4,
};

enum class EControlRigSetKey : uint8
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3,
};

enum class ERigEvent : uint8
{
	None                           = 0,
	RequestAutoKey                 = 1,
	Max                            = 2,
};

enum class ERigElementType : uint8
{
	None                           = 0,
	Bone                           = 1,
	Space                          = 2,
	Control                        = 4,
	Curve                          = 8,
	All                            = 15,
	ERigElementType_MAX            = 16,
};

enum class ERigSpaceType : uint8
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4,
};

enum class EAimMode : uint8
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2,
};

enum class EApplyTransformMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigUnitDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class ERigUnitDebugTransformMode : uint8
{
	Point                          = 0,
	Axes                           = 1,
	Box                            = 2,
	Max                            = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2,
};

enum class EControlRigVectorKind : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2,
};

enum class ERBFVectorDistanceType : uint8
{
	Euclidean                      = 0,
	Manhattan                      = 1,
	ArcLength                      = 2,
	ERBFVectorDistanceType_MAX     = 3,
};

enum class ERBFQuatDistanceType : uint8
{
	Euclidean                      = 0,
	ArcLength                      = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	ERBFQuatDistanceType_MAX       = 4,
};

enum class ERBFKernelType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFKernelType_MAX             = 5,
};

enum class EControlRigModifyBoneMode : uint8
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4,
};

enum class ERigUnitVisualDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class EControlRigState : uint8
{
	Init                           = 0,
	Update                         = 1,
	Invalid                        = 2,
	EControlRigState_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
public:
	struct FTransform                            RelativeParent;                                    // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintOffset                     ConstraintOffset;                                  // 0x30(0x60)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LinkedNode;                                        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransformConstraint>          Constraints;                                       // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
public:
	TArray<struct FConstraintNodeData>           UserData;                                          // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x170 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, uint16>                    ControlRigBoneMapping;                             // 0x68(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, uint16>                    ControlRigCurveMapping;                            // 0xB8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, uint16>                    InputToCurveMappingUIDs;                           // 0x108(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x158(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 InputSettings;                                     // 0x160(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 OutputSettings;                                    // 0x162(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bExecute;                                          // 0x164(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B5[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F8 (0x368 - 0x170)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x170(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x184(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x185(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x185(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_26 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3C8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x188(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x190(0x48)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x1E0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               InputMapping;                                      // 0x210(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x260(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D0[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x178 - 0x170)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA0 (0x810 - 0x770)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3D9[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
public:
	struct FComponentReference                   ComponentReference;                                // 0x0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TransformIndex;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ElementName;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x50(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x88(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0x90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubIndex;                                          // 0x94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x60 - 0x58)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
	uint8                                        Pad_3FB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ControlRig.ControlRigDrawInstruction
struct FControlRigDrawInstruction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigDrawSettings           PrimitiveType;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Positions;                                         // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_401[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigDrawContainer
struct FControlRigDrawContainer
{
public:
	uint8                                        Pad_403[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FControlRigDrawInstruction>    Instructions;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.ControlRigDrawInterface
struct FControlRigDrawInterface : public FControlRigDrawContainer
{
public:
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ControlRig.GizmoActorCreationParam
struct FGizmoActorCreationParam
{
public:
	uint8                                        Pad_40A[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigGizmoDefinition
struct FControlRigGizmoDefinition
{
public:
	class FName                                  GizmoName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x30(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x810 - 0x770)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_410[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.CRFourPointBezier
struct FCRFourPointBezier
{
public:
	struct FVector                               A;                                                 // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               C;                                                 // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               D;                                                 // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
public:
	TArray<struct FControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x2B0 (0xCC0 - 0xA10)
// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
public:
	uint8                                        Pad_426[0x2B0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
public:
	uint8                                        Pad_42D[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
public:
	uint8                                        Pad_42F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeStep;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_432[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Equilibrium;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPoint
struct FCRSimPoint
{
public:
	float                                        Mass;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearDamping;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritMotion;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_449[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubjectA;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DataA;                                             // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DataB;                                             // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_452[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_456[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         FalloffType;                                       // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_458[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Coefficient;                                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInverted;                                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : public FCRSimContainer
{
public:
	TArray<struct FCRSimPoint>                   Points;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Springs;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointConstraint>         Constraints;                                       // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPoint>                   PreviousStep;                                      // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0xA0)(NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0xC0(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_471[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChannelTypeName;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel             ParameterCurve;                                    // 0x8(0x90)(NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneByteChannel                ParameterCurve;                                    // 0x8(0x98)(NativeAccessSpecifierPublic)
};

// 0x20 (0xA0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<struct FEnumParameterNameAndCurve>    Enums;                                             // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigElement
struct FRigElement
{
public:
	uint8                                        Pad_48F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_492[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xE0 - 0x18)
// ScriptStruct ControlRig.RigBone
struct FRigBone : public FRigElement
{
public:
	class FName                                  ParentName;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x60(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x90(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0xC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ERigBoneType                      Type;                                              // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A4[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
public:
	uint8                                        Pad_4A6[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigBone>                      Bones;                                             // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     NameToIndexMapping;                                // 0x30(0x50)(NativeAccessSpecifierPrivate)
	TArray<class FName>                          Selection;                                         // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20;                                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21;                                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33;                                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
public:
	struct FRigControlValueStorage               FloatStorage;                                      // 0x0(0x44)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D3[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Storage;                                           // 0x50(0x30)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x2D8 (0x2F0 - 0x18)
// ScriptStruct ControlRig.RigControl
struct FRigControl : public FRigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpaceName;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpaceIndex;                                        // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x40(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InitialValue;                                      // 0x70(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      Value;                                             // 0xF0(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0x171(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimatable;                                       // 0x172(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitTranslation;                                 // 0x173(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitRotation;                                    // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitScale;                                       // 0x175(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x176(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51D[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      MinimumValue;                                      // 0x180(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      MaximumValue;                                      // 0x200(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGizmoEnabled;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGizmoVisible;                                     // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_527[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GizmoName;                                         // 0x284(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GizmoTransform;                                    // 0x290(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          GizmoColor;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x2D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_530[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 ControlEnum;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
public:
	uint8                                        Pad_535[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigControl>                   Controls;                                          // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     NameToIndexMapping;                                // 0xA8(0x50)(NativeAccessSpecifierPrivate)
	TArray<class FName>                          Selection;                                         // 0xF8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct ControlRig.RigCurve
struct FRigCurve : public FRigElement
{
public:
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
public:
	uint8                                        Pad_544[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigCurve>                     Curves;                                            // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     NameToIndexMapping;                                // 0x30(0x50)(NativeAccessSpecifierPrivate)
	TArray<class FName>                          Selection;                                         // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_548[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Index;                                             // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_552[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContainerVersion;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
public:
	uint8                                        Pad_555[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x90 - 0x18)
// ScriptStruct ControlRig.RigSpace
struct FRigSpace : public FRigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentName;                                        // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_565[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x60(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
public:
	uint8                                        Pad_56B[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigSpace>                     Spaces;                                            // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     NameToIndexMapping;                                // 0x30(0x50)(NativeAccessSpecifierPrivate)
	TArray<class FName>                          Selection;                                         // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x368 (0x368 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
public:
	struct FRigBoneHierarchy                     BoneHierarchy;                                     // 0x0(0x98)(NativeAccessSpecifierPublic)
	struct FRigSpaceHierarchy                    SpaceHierarchy;                                    // 0x98(0x90)(NativeAccessSpecifierPublic)
	struct FRigControlHierarchy                  ControlHierarchy;                                  // 0x128(0x108)(NativeAccessSpecifierPublic)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x230(0x98)(NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x2C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57E[0x9C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigMirrorSettings
struct FRigMirrorSettings
{
public:
	enum class EAxis                             MirrorAxis;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_586[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OldName;                                           // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewName;                                           // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
public:
	TArray<enum class ERigElementType>           Types;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Contents;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    GlobalTransforms;                                  // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
public:
	uint8                                        Pad_590[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
public:
	uint8                                        Pad_593[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
public:
	uint8                                        Pad_595[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
public:
	struct FCachedRigElement                     Index;                                             // 0x0(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GlobalTransform;                                   // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigPose
struct FRigPose
{
public:
	TArray<struct FRigPoseElement>               Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
public:
	struct FRigElementKey                        Source;                                            // 0x0(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRigInfluenceEntry>            Entries;                                           // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FRigElementKey, int32>           KeyToIndex;                                        // 0x18(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
public:
	TArray<struct FRigInfluenceMap>              Maps;                                              // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
public:
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct FRigUnit : public FRigVMStruct
{
public:
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x60)(Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SimBase
struct FRigUnit_SimBase : public FRigUnit
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMinimum;                                // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMaximum;                                // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMinimum;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMaximum;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_5D6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetValue;                                       // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DB[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0xB0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_5E5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 TargetValue;                                       // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E9[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x50(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
public:
	struct FVector                               TargetValue;                                       // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
public:
	float                                        TargetValue;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_604[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Multiplier;                                        // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60D[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0xB0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_60F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Multiplier;                                        // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_613[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x50(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
public:
	struct FVector                               Multiplier;                                        // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
public:
	float                                        Multiplier;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_624[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_628[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
public:
	struct FVector                               Increment;                                         // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_630[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
public:
	float                                        Increment;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_632[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_634[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xC0 - 0x68)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostMultiply;                                     // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xA8(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
public:
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_643[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Space;                                             // 0x20(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_646[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_647[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0x150 - 0x68)
// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x74(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0xA0(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0xD0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x110(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x124(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x138(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_664[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Space;                                             // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0x150 - 0x68)
// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target               Primary;                                           // 0x70(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target               Secondary;                                         // 0x98(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66E[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0xD0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneIndex;                                   // 0x110(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x124(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x138(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_672[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : public FRigUnit
{
public:
};

// 0x138 (0x140 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_679[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InputTransform;                                    // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x40(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0x6C(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0xD0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x110(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x124(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_683[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AlignVector;                                       // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_685[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xC0 - 0x68)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          AimMode;                                           // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          UpMode;                                            // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AimVector;                                         // 0x74(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x80(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAimTarget>                    AimTargets;                                        // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimTarget>                    UpTargets;                                         // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimConstraint_WorkData       WorkData;                                          // 0xB0(0x10)(NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_698[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x20(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x28(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_69D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeedIncreasing;                             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x54(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_AlphaInterp
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x18(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x20(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeedIncreasing;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x44(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimBase
struct FRigUnit_AnimBase : public FRigUnit
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEasing
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         Type;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceMinimum;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEasingType
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
public:
	enum class EControlRigAnimEasingType         Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Curve;                                             // 0x10(0x88)(NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimRichCurve
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
public:
	struct FRuntimeFloatCurve                    Curve;                                             // 0x8(0x88)(NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0xA0(0x9)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0xB0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EE[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
	uint8                                        Pad_6F6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Source;                                            // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendTarget>                  Targets;                                           // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               WaveTime;                                          // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_700[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0xE8 - 0x68)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_Harmonics_TargetItem> Targets;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_711[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_714[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0xC8(0x20)(Transient, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  Bone;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0xE8 - 0x68)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_722[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_728[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0xC8(0x20)(Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : public FRigUnit
{
public:
	class FName                                  Bone;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_734[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
public:
	TArray<struct FCCDIKChainLink>               Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x40(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x140 - 0x68)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_747[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_750[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_751[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0xE0(0x58)(NativeAccessSpecifierPublic)
	uint8                                        Pad_752[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  Bone;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0x140 - 0x68)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_762[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_766[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimit>  RotationLimits;                                    // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0xE0(0x58)(NativeAccessSpecifierPublic)
	uint8                                        Pad_769[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PendulumStiffness;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendulumGravity;                                   // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumBlend;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumDrag;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMinimum;                                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMaximum;                                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         PendulumEase;                                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UnwindAxis;                                        // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMinimum;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMaximum;                                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_775[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReachTarget;                                       // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReachAxis;                                         // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMinimum;                                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMaximum;                                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         ReachEase;                                         // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaveFrequency;                                     // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMinimum;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_782[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
public:
	struct FVector                               Time;                                              // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_786[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             Items;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Ratio;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       LocalTip;                                          // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumTip;                                       // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumPosition;                                  // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumVelocity;                                  // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HierarchyLine;                                     // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       VelocityLines;                                     // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x208 (0x270 - 0x68)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ChainRoot;                                         // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x80(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0xA8(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0xE8(0x88)(NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x170(0x3C)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_794[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x1B0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x1E0(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x208 (0x270 - 0x68)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x7C(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0xA4(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_799[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0xE8(0x88)(NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x170(0x3C)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x1B0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x1E0(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
public:
};

// 0x90 (0xF8 - 0x68)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x78(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Continue;                                          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             Completed;                                         // 0x98(0x60)(NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : public FRigUnit
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Reversed;                                          // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedCollection;                                  // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedHierarchyHash;                               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedCollection;                                  // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedHierarchyHash;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedCollection;                                  // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedHierarchyHash;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedCollection;                                  // 0x38(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedHierarchyHash;                               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_800[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : public FRigUnit
{
public:
	struct FEulerTransform                       Transform;                                         // 0x8(0x24)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_804[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Base;                                              // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            InitTransform;                                     // 0x60(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0xC0(0x9)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_806[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x100 - 0xD0)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
public:
	struct FTransform                            MeshTransform;                                     // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
public:
	uint8                                        Pad_80B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Swing;                                             // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
	uint8                                        Pad_814[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_815[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
public:
	uint8                                        Pad_826[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_829[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_834[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
	struct FEulerTransform                       Input;                                             // 0x8(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_83F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
	uint8                                        Pad_842[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Input;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x40(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_847[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugBase
struct FRigUnit_DebugBase : public FRigUnit
{
public:
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x68(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xB8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_855[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_858[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x100 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x68(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xC0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xC0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
public:
	float                                        Scale;                                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x94(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_876[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugLine
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_881[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_884[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x8C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_889[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88B[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugLineStrip
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_892[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_894[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugPointMutable
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               Vector;                                            // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_897[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89B[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPoint
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
public:
	struct FVector                               Vector;                                            // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A2[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8A5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xC4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugArc
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8B1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xC4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8BD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xB8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C5[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x100 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugRectangle
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8CA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xC0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D0[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct FTransform>                    DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                                          // 0xD8(0x10)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8EC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xBC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F9[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
public:
	uint8                                        Pad_8FE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_904[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xBC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_909[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90A[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugTransform
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_90D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_914[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91C[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_91E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Delta;                                             // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PreviousValue;                                     // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Cache;                                             // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_922[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Delta;                                             // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 PreviousValue;                                     // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Cache;                                             // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousValue;                                     // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Cache;                                             // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousValue;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cache;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_935[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x90(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x80 (0xE8 - 0x68)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_946[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x98(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x78 - 0x68)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x80 - 0x68)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
public:
	TArray<struct FFABRIKChainLink>              Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x20(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_959[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x100 - 0x68)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_962[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0xC0(0x38)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_963[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x100 - 0x68)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_966[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0xC0(0x38)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_96E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_970[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_972[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CurveColor;                                        // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SegmentsColor;                                     // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_976[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x30(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ItemPositions;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       CurvePositions;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x198 (0x200 - 0x68)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x78(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_988[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x100(0x60)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x160(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_98D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x200 - 0x68)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x78(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_992[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_995[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_997[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x100(0x60)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x160(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_99C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinIn;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIn;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOut;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOut;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Argument1;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x70 (0xD8 - 0x68)
// ScriptStruct ControlRig.RigUnit_ForLoopCount
struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
public:
	int32                                        Count;                                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Continue;                                          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             Completed;                                         // 0x78(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : public FRigUnit
{
public:
	class FName                                  Bone;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B2[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x50(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B3[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B6[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x50(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B8[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BC[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Minimum;                                           // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Maximum;                                           // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0xB0(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C2[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Minimum;                                           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Maximum;                                           // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x38(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x38(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Minimum;                                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Maximum;                                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x28(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x14(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : public FRigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x14(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetDeltaTime
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
public:
	float                                        Result;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
public:
	class FName                                  Bone;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E6[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x50(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EA[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformGetterType              Type;                                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F3[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Output;                                            // 0xC0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
	class FName                                  Bone;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x50(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpace;                                       // 0x64(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A00[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Parent;                                            // 0x18(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A03[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x60(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x74(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A06[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             SpaceType;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0A[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x50(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0C[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x50(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetWorldTime
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
public:
	float                                        Year;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Month;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Day;                                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeekDay;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallSeconds;                                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : public FRigUnit
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Siblings;                                          // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A34[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Children;                                          // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x28(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              CachedChildren;                                    // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Parents;                                           // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              CachedParents;                                     // 0x40(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x14(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x20(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x34(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : public FRigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A44[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : public FRigUnit
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Result;                                            // 0x24(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Exists;                                            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
public:
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanTransform
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_A4F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A50[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A52[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanVector
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Buffer;                                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanFloat
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Buffer;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBase
struct FRigUnit_MathBase : public FRigUnit
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolBase
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A61[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolEquals
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A65[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A67[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolOr
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolNand
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolAnd
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolNot
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolConstant
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorBase
struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorLerp
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorMul
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorSub
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorAdd
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A80[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatBase
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        C;                                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaAngle;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BetaAngle;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GammaAngle;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A85[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAtan
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAcos
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAsin
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatTan
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatCos
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSin
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatRad
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatDeg
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IfTrue;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IfFalse;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A98[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLess
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatGreater
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatEquals
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatRemap
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLerp
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatClamp
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSign
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatToInt
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatRound
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatCeil
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatFloor
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAbs
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatNegate
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatPow
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMax
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMin
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMod
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatDiv
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMul
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatSub
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatAdd
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatConstant
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntBase
struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntLess
struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntGreater
struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntEquals
struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntClamp
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntSign
struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntToFloat
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntAbs
struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntNegate
struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntPow
struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMax
struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMin
struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMod
struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntDiv
struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMul
struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntSub
struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntAdd
struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
public:
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B01[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Swing;                                             // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B12[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B15[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B18[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B1B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B21[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B24[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 IfTrue;                                            // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 IfFalse;                                           // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B27[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B29[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B2B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B2E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B30[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B37[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B40[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B45[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B49[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B4F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_B54[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
public:
	struct FRotator                              Rotator;                                           // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B59[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               Euler;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5E[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               Axis;                                              // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B62[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{
public:
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
public:
	uint8                                        Pad_B64[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
public:
	struct FVector                               Input;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFVectorDistanceType            DistanceFunction;                                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B66[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingRadius;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData;                                          // 0x20(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
struct FMathRBFInterpolateVectorXform_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0xF0 - 0xB0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0xC0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
struct FMathRBFInterpolateVectorQuat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0xD0 - 0xB0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0xC0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
struct FMathRBFInterpolateVectorColor_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xD0 - 0xB0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
struct FMathRBFInterpolateVectorVector_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xD0 - 0xB0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
struct FMathRBFInterpolateVectorFloat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xD0 - 0xB0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
public:
	uint8                                        Pad_B7D[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
public:
	uint8                                        Pad_B7E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERBFQuatDistanceType              DistanceFunction;                                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B81[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingAngle;                                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B84[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwistAxis;                                         // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData;                                          // 0x40(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
struct FMathRBFInterpolateQuatXform_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x110 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;                                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0xE0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
struct FMathRBFInterpolateQuatQuat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets;                                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0xE0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
struct FMathRBFInterpolateQuatColor_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;                                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
struct FMathRBFInterpolateQuatVector_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;                                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B93[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
struct FMathRBFInterpolateQuatFloat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;                                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformBase
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{
public:
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_B99[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigClampSpatialMode       Type;                                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Space;                                             // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigRotationOrder          RotationOrder;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEulerTransform                       EulerTransform;                                    // 0x60(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BAF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BB3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            IfTrue;                                            // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            IfFalse;                                           // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformLerp
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BB8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            A;                                                 // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBA[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BBC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MathTransformInverse
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{
public:
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BC1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Local;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BC2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Global;                                            // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Local;                                             // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BC4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            A;                                                 // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigUnit_MathTransformMul
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{
public:
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_BC6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x40(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
public:
	struct FEulerTransform                       EulerTransform;                                    // 0x8(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBase
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Start;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigClampSpatialMode       Type;                                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Space;                                             // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCF[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorParallel
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorAngle
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMirror
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLength;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumLength;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorUnit
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorDot
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorCross
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorDistance
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLength
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorRad
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorDeg
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IfTrue;                                            // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IfFalse;                                           // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C15[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorEquals
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C17[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorRemap
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMinimum;                                     // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMaximum;                                     // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMinimum;                                     // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMaximum;                                     // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLerp
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClamp
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorSign
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorRound
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorCeil
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorFloor
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorAbs
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathVectorNegate
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorMax
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorMin
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorMod
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorDiv
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorScale
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorMul
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorSub
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_MathVectorAdd
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  Bone;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x98 - 0x68)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x88(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C40[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyTransforms_WorkData    WorkData;                                          // 0x88(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  Bone;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_C43[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MultiFABRIK_WorkData         WorkData;                                          // 0x90(0x60)(Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameBase
struct FRigUnit_NameBase : public FRigUnit
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_Contains
struct FRigUnit_Contains : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Search;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_StartsWith
struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Start;                                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C50[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_EndsWith
struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Ending;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C52[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameReplace
struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameTruncate
struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Remainder;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Chopped;                                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameConcat
struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
public:
	class FName                                  A;                                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseVector
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
public:
	struct FVector                               Position;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Frequency;                                         // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Time;                                              // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C65[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseFloat
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0xB8(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x160 - 0x68)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Parents;                                           // 0x78(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialGlobalTransform;                            // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C72[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xD0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSubject;                                     // 0x104(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x118(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x130(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_SimBaseMutable
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  Bone;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslationPoint;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryAimPoint;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryAimPoint;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x20(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
public:
	struct FCRSimPointContainer                  Simulation;                                        // 0x0(0x78)(NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             BoneIndices;                                       // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x198 (0x200 - 0x68)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
public:
	TArray<struct FCRSimPoint>                   Points;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Links;                                             // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SimulatedStepsPerSecond;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECRSimPointIntegrateType          IntegratorType;                                    // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C84[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VerletBlend;                                       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C87[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrimaryAimAxis;                                    // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAimAxis;                                  // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0xF0(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x140(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_PointSimulation_WorkData     WorkData;                                          // 0x170(0x88)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x88 - 0x68)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C93[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Prefix;                                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeasurementsLeft;                                  // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x68 - 0x68)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{
public:
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C98[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        OldParent;                                         // 0x18(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldParentInitial;                                 // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        NewParent;                                         // 0x28(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewParentInitial;                                 // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9B[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x70(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedOldParent;                                   // 0x84(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedNewParent;                                   // 0x98(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeGlobal;                                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyToChildren;                                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x78(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA5[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
public:
	uint8                                        Pad_CA9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_CAA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_CAC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument0;                                         // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Argument1;                                         // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_RandomVector
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastResult;                                        // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_RandomFloat
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastResult;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Item;                                              // 0x6C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetInSeconds;                                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDuringInteraction;                            // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB1[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             A;                                                 // 0x68(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             B;                                                 // 0xC8(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             C;                                                 // 0x128(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             D;                                                 // 0x188(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xD4(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x70(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x8C(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xDC(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x88(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x98 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x80(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xC0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Offset;                                            // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0xA4(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD0[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0xB4(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x84(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x84(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x7C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x78(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x90 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x78(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x88 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x88 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D00[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x74(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Pattern;                                           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D03[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x88 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x74(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x78 (0xE0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D06[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D08[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xB8(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0xCC(0x14)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x74(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0A[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0xC8(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0xDC(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xF0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xA0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0xD4(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D14[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D15[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             SpaceType;                                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0xB4(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x8C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xB0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D25[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x80(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D26[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x98(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D28[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xA0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D29[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x8C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2D[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0xB8(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D30[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BlendedTransforms;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0xC8 - 0x68)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D33[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x80(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0xC8 - 0x68)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x80(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D39[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x20(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedBones;                                       // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVector;                                  // 0x10(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCRSimPointContainer                  Simulation;                                        // 0x38(0x78)(NativeAccessSpecifierPublic)
};

// 0x168 (0x1D0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HierarchyStrength;                                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorStrength;                                  // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorRatio;                                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootStrength;                                      // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRatio;                                         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipPolePlane;                                    // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveSimulation;                                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D40[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Iterations;                                        // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D41[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SpringIK_DebugSettings       DebugSettings;                                     // 0xD0(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_SpringIK_WorkData            WorkData;                                          // 0x120(0xB0)(Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SecondsToFrames
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
public:
	float                                        Seconds;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frames;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_FramesToSeconds
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
public:
	float                                        Frames;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Timeline
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D44[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_D47[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Buffer;                                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Buffer;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
	uint8                                        Pad_D55[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Argument0;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Argument1;                                         // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x35(0x9)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x140 - 0x68)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x68(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5F[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x80(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigElementKey                        BaseItem;                                          // 0xB0(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D60[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintTarget>             Targets;                                           // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0xD8(0x60)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D64[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x130 - 0x68)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  Bone;                                              // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D66[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x80(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  BaseBone;                                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConstraintTarget>             Targets;                                           // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0xD0(0x60)(Transient, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemTransforms;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x68(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         TwistEaseType;                                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D71[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0xA0(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         TwistEaseType;                                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D77[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0xA0(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x220 - 0x68)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndJoint;                                          // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleTarget;                                        // 0x78(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spin;                                              // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EndEffector;                                       // 0x90(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        IKBlend;                                           // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7E[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointFKTransform;                             // 0xD0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointFKTransform;                               // 0x100(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointFKTransform;                               // 0x130(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        PreviousFKIKBlend;                                 // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D81[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointIKTransform;                             // 0x170(0x30)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointIKTransform;                               // 0x1A0(0x30)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointIKTransform;                               // 0x1D0(0x30)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        StartJointIndex;                                   // 0x200(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MidJointIndex;                                     // 0x204(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EndJointIndex;                                     // 0x208(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpperLimbLength;                                   // 0x20C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LowerLimbLength;                                   // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D83[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_D85[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D89[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Elbow;                                             // 0xB0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
public:
	struct FVector                               Root;                                              // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Effector;                                          // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Elbow;                                             // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D90[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D94[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x1B0 - 0x68)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ItemA;                                             // 0x68(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ItemB;                                             // 0x74(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        EffectorItem;                                      // 0x80(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D95[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        PoleVectorSpace;                                   // 0xEC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D98[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemALength;                                       // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemBLength;                                       // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9C[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x120(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemAIndex;                                  // 0x160(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemBIndex;                                  // 0x174(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorItemIndex;                           // 0x188(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x19C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x190 - 0x68)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneB;                                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Effector;                                          // 0x80(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x100(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneAIndex;                                  // 0x140(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneBIndex;                                  // 0x154(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorBoneIndex;                           // 0x168(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x17C(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damp;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Acceleration;                                      // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRSimPoint                           Point;                                             // 0x44(0x28)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x6C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_DC3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x4C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_DC9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCD[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_DCE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x2C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_DD4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x30(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVector
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 Channel;                                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_DE3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Global;                                            // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_DE4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 World;                                             // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Global;                                            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               World;                                             // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_DE5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_DE6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            World;                                             // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct FStructReference
{
public:
	uint8                                        Pad_DE7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


