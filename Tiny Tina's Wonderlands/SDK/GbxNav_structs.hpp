#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxNavMoveStyleDefault : uint8
{
	Strafe                         = 0,
	Forward                        = 1,
	EGbxNavMoveStyleDefault_MAX    = 2,
};

enum class EFlightMovementState : uint8
{
	Approach                       = 0,
	Descent                        = 1,
	Ascent                         = 2,
	Exit                           = 3,
	DigistructingOut               = 4,
	EFlightMovementState_MAX       = 5,
};

enum class EGbxNavAnimTableType : uint8
{
	Start                          = 0,
	Stop                           = 1,
	TurnIdle                       = 2,
	TurnMove                       = 3,
	EGbxNavAnimTableType_MAX       = 4,
};

enum class EAvoidWhileIdle : uint8
{
	Default                        = 0,
	AvoidWhileIdle                 = 1,
	OnlyAvoidWhileMoving           = 2,
	EAvoidWhileIdle_MAX            = 3,
};

enum class EGbxNavState : uint8
{
	Idle                           = 0,
	WaitingGoal                    = 1,
	WaitingPath                    = 2,
	Moving                         = 3,
	EGbxNavState_MAX               = 4,
};

enum class EGbxGoalResult : uint8
{
	Failed                         = 0,
	Reached                        = 1,
	Success                        = 2,
	EGbxGoalResult_MAX             = 3,
};

enum class EGbxNavFlyRoundingMode : uint8
{
	RoundToZero                    = 0,
	RoundToNearest                 = 1,
	EGbxNavFlyRoundingMode_MAX     = 2,
};

enum class EGbxNavGoalCheats : int32
{
	None                           = 0,
	MoveEvenIfUnreachable          = 1,
	ValidEvenIfNoNav               = 2,
	EGbxNavGoalCheats_MAX          = 3,
};

enum class EGbxOffsetType : uint8
{
	Local                          = 0,
	World                          = 1,
	EGbxOffsetType_MAX             = 2,
};

enum class EGbxStrafeType : uint8
{
	Default                        = 0,
	Strafe                         = 1,
	Forward                        = 2,
	EGbxStrafeType_MAX             = 3,
};

enum class EGbxNavGoalReach : uint8
{
	Exact                          = 0,
	Pass                           = 1,
	EGbxNavGoalReach_MAX           = 2,
};

enum class EGbxPainterType : uint8
{
	Static                         = 0,
	Dynamic                        = 1,
	StaticAndDynamic               = 2,
	EGbxPainterType_MAX            = 3,
};

enum class EGbxPathType : uint8
{
	None                           = 0,
	Walk                           = 1,
	Fly                            = 2,
	EGbxPathType_MAX               = 3,
};

enum class EGbxUserEdgeDirection : uint8
{
	Blocked                        = 0,
	AToB                           = 1,
	BToA                           = 2,
	Bidirectional                  = 3,
	EGbxUserEdgeDirection_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxNav.GbxNavPathingData
struct FGbxNavPathingData
{
public:
	class UGbxNavAreaData*                       Areas;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHavokPathFindingData*                 UserEdges;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxNav.GbxNavAgentProperties
struct FGbxNavAgentProperties
{
public:
	uint8                                        Pad_85F[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxNavPathingData                    PathingData;                                       // 0x50(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GbxNav.GbxNavAgent
struct FGbxNavAgent
{
public:
	struct FGbxNavAgentProperties                Props;                                             // 0x0(0x60)(NoDestructor, NativeAccessSpecifierPublic)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Context;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GbxNav.GbxNavSlowdownData
struct FGbxNavSlowdownData
{
public:
	bool                                         bSlowdownNearGoal;                                 // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStanceFloatValue                     SlowdownSpeed;                                     // 0x4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SlowdownDistanceMin;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowdownDistanceMax;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxNav.GbxAvoidanceProperties
struct FGbxAvoidanceProperties
{
public:
	float                                        WallFollowingAngle;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgingPenalty;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityHysteresis;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidednessChangingPenalty;                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionPenalty;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationPenalty;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeedScale;                                     // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SensorSizeScale;                                   // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusScale;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalDistanceOffsetPct;                             // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionHysteresis;                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSimplifiedAvoiance;                            // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct GbxNav.GbxNavAvoidanceOptions
struct FGbxNavAvoidanceOptions
{
public:
	bool                                         bAvoidanceSteering;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvoidanceObstacle;                                // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvoidPawnsBehindMe;                               // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvoidWithNoGoal;                                  // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAvoidanceProperties               AvoidanceProperties;                               // 0x4(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxNav.GbxNavMovementOptions
struct FGbxNavMovementOptions
{
public:
	class UHavokPathFindingData*                 PathFindingData;                                   // 0x0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxNavPathingData                    PathingData;                                       // 0x8(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxNavMoveStyleDefault           MoveStyleDefault;                                  // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanReverse;                                       // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_884[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReverseGoalDistance;                               // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanChangePitchWhenStrafeFlying;                   // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IdleDirectionTime;                                 // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NearUserEdgeTimeThreshold;                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UserEdgeEnterDistancePercent;                      // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeFacingUserEdgeBeforeEntering;               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_889[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxNav.GbxNavGoalModifiers
struct FGbxNavGoalModifiers
{
public:
	enum class EGbxOffsetType                    OffsetType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_899[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAddAgentRadius;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddAgentHeight;                                   // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddGoalRadius;                                    // 0x1E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddGoalHeight;                                    // 0x1F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdjustHeightForMelee;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCenterOnFloor;                                    // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VerticalFlyOffset;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxNav.FlightState
struct FFlightState
{
public:
	enum class EFlightMovementState              CurrentMovementState;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                VehicleSplineActor;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DropOffSpawner;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AscentTargetLocationZ;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              AscentTargetRotation;                              // 0x1C(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct GbxNav.GbxNavIdleTurnTableRow
struct FGbxNavIdleTurnTableRow : public FGbxAnimTableRow
{
public:
};

// 0x18 (0x38 - 0x20)
// ScriptStruct GbxNav.GbxNavAnimTableRow
struct FGbxNavAnimTableRow : public FGbxAnimTableRow
{
public:
	struct FNumericRange                         Angle;                                             // 0x20(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCorner;                                           // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CornerMaxAngle;                                    // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStretchRotation;                               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoFill;                                         // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxNav.GbxNavAreaItem
struct FGbxNavAreaItem
{
public:
	class UGbxNavArea*                           GbxNavArea;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CostScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  NavArea;                                           // 0x10(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxNav.GbxNavBoundsTracker
struct FGbxNavBoundsTracker
{
public:
	struct FBox                                  Bounds;                                            // 0x0(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HullPoints;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GbxNav.GbxNavCorrecter
struct FGbxNavCorrecter
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComp;                                           // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                PathingActor;                                      // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        MoveComp;                                          // 0x20(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x28(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSavedCollision                       SavedCollision;                                    // 0x58(0x20)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8C4[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct GbxNav.GbxNavForwardState
struct FGbxNavForwardState
{
public:
	float                                        MinSpeedScale;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bScaleSpeed;                                       // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8CA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTurnScale;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bScaleRotation;                                    // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8CC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleInterpTime;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNumericRange                         DistanceRange;                                     // 0x14(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        WallCheckDegreesPerSegment;                        // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinTurnRadius;                                     // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                World;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComponent;                                      // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        MovementComponent;                                 // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIVehicleFlightComponent*             VehicleFlightComponent;                            // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8D3[0xD8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxNav.GbxNavLayerItem
struct FGbxNavLayerItem
{
public:
	class UGbxNavLayer*                          NavLayer;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HalfHeight;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerIdx;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UseCount;                                          // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x18(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UHavokNavLayer>            Layer;                                             // 0x20(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxNav.GbxNavLayerState
struct FGbxNavLayerState
{
public:
	TArray<struct FGbxNavLayerItem>              Layers;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxNav.GbxPainterItem
struct FGbxPainterItem
{
public:
	uint8                                        Pad_8DF[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component;                                         // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxNav.GbxNavSectionBounds
struct FGbxNavSectionBounds
{
public:
	struct FBox                                  WorldBoxBound;                                     // 0x0(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       WorldConvexHullPoints;                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 DominationGuid;                                    // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxNav.GbxNavStreamingData
struct FGbxNavStreamingData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UHavokStreamingSet*>            Sets;                                              // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxNav.GbxNavStuckState
struct FGbxNavStuckState
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComp;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                PathingActor;                                      // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        GbxMoveComp;                                       // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8EF[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StuckDistance;                                     // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StuckVelocity;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StuckWaitTime;                                     // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStuckFixEnabled;                                  // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StuckFixStartTime;                                 // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StuckFixStopTime;                                  // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F2[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxNav.GbxPainterData
struct FGbxPainterData
{
public:
	class UGbxNavMeshPainterComponent*           Painter;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxNav.GbxPainterManager
struct FGbxPainterManager
{
public:
	TArray<class UGbxNavArea*>                   NavAreas;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGbxPainterData>               Painters;                                          // 0x10(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GbxNav.GbxReachabilityState
struct FGbxReachabilityState
{
public:
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComp;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8FA[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct GbxNav.GbxReachabilityTracker
struct FGbxReachabilityTracker
{
public:
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CachedSourceRoot;                                  // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CachedGoalRoot;                                    // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8FC[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxNav.GbxUserEdgeTeleportType
struct FGbxUserEdgeTeleportType
{
public:
	class UGbxUserEdge*                          EntryEdge;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUserEdge*                          ExitEdge;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHavokUserEdge>            Entry;                                             // 0x10(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHavokUserEdge>            Exit;                                              // 0x18(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxNav.GbxDynamicUserEdgeInfo
struct FGbxDynamicUserEdgeInfo
{
public:
	class UGbxNavUserEdgeTrailComponent*         Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_901[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxNav.GbxUserEdgeData
struct FGbxUserEdgeData
{
public:
	class UHavokUserEdgeComponent*               Edge;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_904[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxNav.GbxUserEdgeManager
struct FGbxUserEdgeManager
{
public:
	TArray<class UGbxUserEdge*>                  NormalEdgeTypes;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGbxUserEdgeTeleportType>      TeleportTypes;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGbxUserEdgeData>              Edges;                                             // 0x20(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FGbxDynamicUserEdgeInfo>       UserEdgesToAdd;                                    // 0x30(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<uint32>                               UserEdgesToRemove;                                 // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UHavokUserEdge>>    NormalTypes;                                       // 0x50(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxNav.TeleportUserEdgeData
struct FTeleportUserEdgeData
{
public:
	uint8                                        Pad_907[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                EntryAction;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                TeleportAction;                                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ExitAction;                                        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct GbxNav.GbxUserEdgeState
struct FGbxUserEdgeState
{
public:
	uint8                                        Pad_90A[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBasedPosition                        EntryPosition;                                     // 0x40(0x38)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBasedPosition                        ExitPosition;                                      // 0x78(0x38)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTeleportUserEdgeData                 TeleportData;                                      // 0xB0(0x50)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class AGbxNavWorld*                          GbxNavWorld;                                       // 0x100(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComp;                                           // 0x108(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   GbxActionComp;                                     // 0x110(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AAIController*                         AIController;                                      // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_90D[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxNav.HavokUserEdgeTeleportItem
struct FHavokUserEdgeTeleportItem
{
public:
	class UGbxUserEdge*                          EntryUserEdge;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUserEdge*                          ExitUserEdge;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CostScale;                                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_912[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                TeleportAction;                                    // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHavokUserEdge>            EntryEdge;                                         // 0x20(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHavokUserEdge>            ExitEdge;                                          // 0x28(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxNav.HavokUserEdgeItem
struct FHavokUserEdgeItem
{
public:
	class UGbxUserEdge*                          GbxUserEdge;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CostScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHavokUserEdge>            UserEdge;                                          // 0x18(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxNav.HavokUserEdgePreviewItem
struct FHavokUserEdgePreviewItem
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ForwardAction;                                     // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ReverseAction;                                     // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


