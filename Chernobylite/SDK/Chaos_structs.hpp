#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClusterUnionMethod : uint8
{
	PointImplicit                  = 0,
	DelaunayTriangulation          = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None                           = 4,
	EClusterUnionMethod_MAX        = 5,
};

enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX                      = 6,
};

enum class EFieldPhysicsType : uint8
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_PhysicsType_Max          = 17,
};

enum class EFieldFalloffType : uint8
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5,
};

enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3,
};

enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3,
};

enum class EFieldOperationType : uint8
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4,
};

enum class ESetMaskConditionType : uint8
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,
};

enum class EEmissionPatternTypeEnum : uint8
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2,
};

enum class EInitialVelocityTypeEnum : uint8
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2,
};

enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
	Chaos_AngularVelocity          = 0,
	Chaos_DynamicState             = 1,
	Chaos_LinearVelocity           = 2,
	Chaos_InitialAngularVelocity   = 3,
	Chaos_InitialLinearVelocity    = 4,
	Chaos_CollisionGroup           = 5,
	Chaos_LinearForce              = 6,
	Chaos_AngularTorque            = 7,
	Chaos_Max                      = 8,
};

enum class EObjectStateTypeEnum : uint8
{
	Chaos_NONE                     = 0,
	Chaos_Object_Sleeping          = 1,
	Chaos_Object_Kinematic         = 2,
	Chaos_Object_Static            = 3,
	Chaos_Object_Dynamic           = 4,
	Chaos_Object_UserDefined       = 100,
	Chaos_Max                      = 101,
};

enum class EImplicitTypeEnum : uint8
{
	Chaos_Implicit_Box             = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_Capsule         = 2,
	Chaos_Implicit_LevelSet        = 3,
	Chaos_Implicit_None            = 4,
	Chaos_Max                      = 5,
};

enum class ECollisionTypeEnum : uint8
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2,
};

enum class EChaosBufferMode : uint8
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4,
};

enum class EChaosThreadingMode : uint8
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5,
};

enum class EChaosSolverTickMode : uint8
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4,
};

enum class EGeometryCollectionCacheType : uint8
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	EGeometryCollectionCacheType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinImpulse;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Chaos.ChaosSolverConfiguration
struct FChaosSolverConfiguration
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionPairIterations;                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutIterations;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionPushOutPairIterations;                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionMarginFraction;                           // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionMarginMax;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionCullDistance;                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        JointPairIterations;                               // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        JointPushOutPairIterations;                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterConnectionFactor;                           // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterUnionMethod               ClusterUnionConnectionType;                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisionData;                            // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x2C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGenerateBreakData;                                // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x40(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGenerateTrailingData;                             // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGenerateContactGraph;                             // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Chaos.SolverBreakingData
struct FSolverBreakingData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6C (0x6C - 0x0)
// ScriptStruct Chaos.SolverCollisionData
struct FSolverCollisionData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedImpulse;                                // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity1;                                         // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity2;                                         // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity1;                                  // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity2;                                  // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass1;                                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass2;                                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelsetIndex;                                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelsetIndexMesh;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Chaos.SolverTrailingData
struct FSolverTrailingData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Chaos.RecordedFrame
struct FRecordedFrame
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                TransformIndices;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                PreviousTransformIndices;                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 DisabledFlags;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>          Collisions;                                        // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverBreakingData>           Breakings;                                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<struct FSolverTrailingData>             Trailings;                                         // 0x60(0x50)(NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.RecordedTransformTrack
struct FRecordedTransformTrack
{
public:
	TArray<struct FRecordedFrame>                Records;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


