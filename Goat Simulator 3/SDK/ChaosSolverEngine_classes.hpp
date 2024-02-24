#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// Class ChaosSolverEngine.ChaosDebugDrawComponent
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	uint8                                        Pad_183[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_18C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x1B8 (0x270 - 0xB8)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_198[0x110];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x1C8(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x218(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosGameplayEventDispatcher* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
class IChaosNotifyHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChaosNotifyHandlerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj();

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UChaosSolver* GetDefaultObj();

};

// 0xF8 (0x328 - 0x230)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration             Properties;                                        // 0x230(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TimeStepMultiplier;                                // 0x298(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionIterations;                               // 0x29C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutIterations;                                 // 0x2A0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutPairIterations;                             // 0x2A4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterConnectionFactor;                           // 0x2A8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x2AC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoGenerateCollisionData;                           // 0x2AD(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x2B0(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateBreakingData;                            // 0x2C0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x2C4(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateTrailingData;                            // 0x2D4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x2D8(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MassScale;                                         // 0x2E8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateContactGraph;                             // 0x2EC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFloor;                                         // 0x2ED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloorHeight;                                       // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x2F4(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_204[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   SpriteComponent;                                   // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AChaosSolverActor* GetDefaultObj();

	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// 0x20 (0x58 - 0x38)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_213[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x40(0x18)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


