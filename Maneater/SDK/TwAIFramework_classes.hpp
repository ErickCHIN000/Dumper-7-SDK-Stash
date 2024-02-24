#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// Class TwAIFramework.TwAIBTComposite_Parallel
class UTwAIBTComposite_Parallel : public UBTCompositeNode
{
public:

	static class UClass* StaticClass();
	static class UTwAIBTComposite_Parallel* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class TwAIFramework.TwAIBTComposite_Random
class UTwAIBTComposite_Random : public UBTCompositeNode
{
public:
	TArray<struct FAIDataProviderFloatValue>     ChildrenProbabilities;                             // 0x90(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwAIBTComposite_Random* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class TwAIFramework.TwAIBTDecorator_CanPlayerSee
class UTwAIBTDecorator_CanPlayerSee : public UBTDecorator_BlackboardBase
{
public:

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_CanPlayerSee* GetDefaultObj();

};

// 0x50 (0xB8 - 0x68)
// Class TwAIFramework.TwAIBTDecorator_SpatialBase
class UTwAIBTDecorator_SpatialBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                SourceKey;                                         // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                TargetKey;                                         // 0x90(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_SpatialBase* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class TwAIFramework.TwAIBTDecorator_ClearNavTrace
class UTwAIBTDecorator_ClearNavTrace : public UTwAIBTDecorator_SpatialBase
{
public:
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_ClearNavTrace* GetDefaultObj();

};

// 0xC8 (0x180 - 0xB8)
// Class TwAIFramework.TwAIBTDecorator_Distance
class UTwAIBTDecorator_Distance : public UTwAIBTDecorator_SpatialBase
{
public:
	enum class EDistanceTypes                    DistanceCheckType;                                 // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             ComparisonValue;                                   // 0xC0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	enum class EArithmeticKeyOperation           ComparisonOp;                                      // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSourceRadius;                                  // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTargetRadius;                                  // 0xFA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_102[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             SourceRadiusOverride;                              // 0x100(0x38)(Edit, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             TargetRadiusOverride;                              // 0x138(0x38)(Edit, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	bool                                         bOverrideSourceRadius;                             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideTargetRadius;                             // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdateFrequency;                                   // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateFrequencyDeviation;                          // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_106[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_Distance* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class TwAIFramework.TwAIBTDecorator_Gate
class UTwAIBTDecorator_Gate : public UBTDecorator
{
public:
	bool                                         bIncrementOnSuccess;                               // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumAccessesUntilClosure;                           // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_Gate* GetDefaultObj();

};

// 0x78 (0x108 - 0x90)
// Class TwAIFramework.TwAIBTDecorator_HasClearLoS
class UTwAIBTDecorator_HasClearLoS : public UBTDecorator_BlackboardBase
{
public:
	struct FBlackboardKeySelector                SourceBlackboardKey;                               // 0x90(0x28)(Edit, NativeAccessSpecifierPrivate)
	enum class ECollisionChannel                 TraceChannel;                                      // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FoVCheck;                                          // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFoVType                          FoVType;                                           // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             LoSExtentSize;                                     // 0xC8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        LoSExtentSizeInaccuracy;                           // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_HasClearLoS* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class TwAIFramework.TwAIBTDecorator_HasPatrol
class UTwAIBTDecorator_HasPatrol : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_HasPatrol* GetDefaultObj();

};

// 0x40 (0xD0 - 0x90)
// Class TwAIFramework.TwAIBTDecorator_IsRightOrLeft
class UTwAIBTDecorator_IsRightOrLeft : public UBTDecorator_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue             ExpectedAzimuth;                                   // 0x90(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	enum class EArithmeticKeyOperation           ComparisonOp;                                      // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_131[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_IsRightOrLeft* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class TwAIFramework.TwAIBTDecorator_LoopWhileResult
class UTwAIBTDecorator_LoopWhileResult : public UBTDecorator
{
public:
	enum class EBTNodeResult                     ExpectedNodeResult;                                // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_137[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_LoopWhileResult* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class TwAIFramework.TwAIBTDecorator_MovementMode
class UTwAIBTDecorator_MovementMode : public UBTDecorator_BlackboardBase
{
public:
	enum class EMovementMode                     MovementMode;                                      // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdateTimeFrequency;                               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdateTimeDeviation;                               // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_MovementMode* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class TwAIFramework.TwAIBTDecorator_Random
class UTwAIBTDecorator_Random : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue             SuccessProbability;                                // 0x68(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        UpdateFrequency;                                   // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_143[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAIBTDecorator_Random* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class TwAIFramework.TwAIBTService_GameplayFocus
class UTwAIBTService_GameplayFocus : public UBTService_DefaultFocus
{
public:

	static class UClass* StaticClass();
	static class UTwAIBTService_GameplayFocus* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TwAIFramework.TwAIDataProvider_CollisionHalfHeight
class UTwAIDataProvider_CollisionHalfHeight : public UAIDataProvider
{
public:
	float                                        FloatValue;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntValue;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwAIDataProvider_CollisionHalfHeight* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TwAIFramework.TwAIDataProvider_CollisionRadius
class UTwAIDataProvider_CollisionRadius : public UAIDataProvider
{
public:
	float                                        FloatValue;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntValue;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwAIDataProvider_CollisionRadius* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwAIFramework.TwAIHelperLibrary
class UTwAIHelperLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTwAIHelperLibrary* GetDefaultObj();

	struct FRotator InvalidRotation();
	struct FQuat InvalidOrientation();
	struct FVector InvalidLocation();
	struct FVector InvalidDirection();
};

// 0x0 (0x28 - 0x28)
// Class TwAIFramework.TwAIPatrolableInterface
class ITwAIPatrolableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITwAIPatrolableInterface* GetDefaultObj();

	void SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter);
	class ATwAIPatrolPlotter* GetAIPatrolPlotter();
};

// 0x10 (0x230 - 0x220)
// Class TwAIFramework.TwAIPatrolPlotter
class ATwAIPatrolPlotter : public AActor
{
public:
	enum class EPatrolType                       PatrolType;                                        // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFaceDirAlongSpline : 1;                           // Mask: 0x1, PropSize: 0x10x224(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSprintingPatrol : 1;                              // Mask: 0x2, PropSize: 0x10x224(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_12 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwAIPatrolSplineComponent*            PatrolSplineComponent;                             // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATwAIPatrolPlotter* GetDefaultObj();

	bool IsClosedLoopPatrol();
	class UTwAIPatrolSplineComponent* GetPatrolSplineComponent();
	struct FVector GetPatrolLocationAtPoint(int32 PointIdx);
	struct FVector GetNearestPatrolPointToLoc(const struct FVector& TestLocation, int32* PointIdx);
	int32 GetMaxDefinedPatrolPoints();
};

// 0x0 (0x500 - 0x500)
// Class TwAIFramework.TwAIPatrolSplineComponent
class UTwAIPatrolSplineComponent : public USplineComponent
{
public:

	static class UClass* StaticClass();
	static class UTwAIPatrolSplineComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwAIFramework.TwEnvQueryContext_QuerierRight
class UTwEnvQueryContext_QuerierRight : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UTwEnvQueryContext_QuerierRight* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwAIFramework.TwEnvQueryContext_QuerierUp
class UTwEnvQueryContext_QuerierUp : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UTwEnvQueryContext_QuerierUp* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwAIFramework.TwEnvQueryContext_WorldUp
class UTwEnvQueryContext_WorldUp : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UTwEnvQueryContext_WorldUp* GetDefaultObj();

};

// 0x38 (0x1A8 - 0x170)
// Class TwAIFramework.TwEnvQueryGenerator_ConeOffset
class UTwEnvQueryGenerator_ConeOffset : public UEnvQueryGenerator_Cone
{
public:
	struct FAIDataProviderFloatValue             AngleOffset;                                       // 0x170(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwEnvQueryGenerator_ConeOffset* GetDefaultObj();

};

// 0x38 (0x130 - 0xF8)
// Class TwAIFramework.TwEnvQueryGenerator_SimpleGridOuter
class UTwEnvQueryGenerator_SimpleGridOuter : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderFloatValue             MinDistanceFromContext;                            // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwEnvQueryGenerator_SimpleGridOuter* GetDefaultObj();

};

}


