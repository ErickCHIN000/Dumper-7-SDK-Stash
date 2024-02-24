#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x248 (0x458 - 0x210)
// Class PhysXVehicles.WheeledVehicleMovementComponent
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        Pad_770[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDeprecatedSpringOffsetMode : 1;                   // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_772[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWheelSetup>                   WheelSetups;                                       // 0x220(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisWidth;                                      // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisHeight;                                     // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseAsBrake;                                   // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_774[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReverseAsBrakeTimeBeforeReverse;                   // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBrakeWhenReleasingReverse;                        // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_779[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DragArea;                                          // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedMaxEngineSpeed;                           // 0x250(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEngineRPM;                                      // 0x254(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDragMagnitude;                                // 0x258(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0x25C(0xC)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoad;                             // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinNormalizedTireLoadFiltered;                     // 0x26C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoad;                             // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalizedTireLoadFiltered;                     // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdLongitudinalSpeed;                        // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LowForwardSpeedSubStepCount;                       // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighForwardSpeedSubStepCount;                      // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_786[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVehicleWheel*>                 Wheels;                                            // 0x288(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_787[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseRVOAvoidance : 1;                              // Mask: 0x1, PropSize: 0x10x2B0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_30 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_789[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RVOAvoidanceRadius;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOAvoidanceHeight;                                // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvoidanceConsiderationRadius;                      // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOSteeringStep;                                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RVOThrottleStep;                                   // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvoidanceUID;                                      // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     AvoidanceGroup;                                    // 0x2CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToAvoid;                                     // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                     GroupsToIgnore;                                    // 0x2D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        AvoidanceWeight;                                   // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendingLaunchVelocity;                             // 0x2DC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_790[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedVehicleState               ReplicatedState;                                   // 0x2EC(0x14)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_792[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RawSteeringInput;                                  // 0x304(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawThrottleInput;                                  // 0x308(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawBrakeInput;                                     // 0x30C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawHandbrakeInput : 1;                            // Mask: 0x1, PropSize: 0x10x310(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearUpInput : 1;                               // Mask: 0x2, PropSize: 0x10x310(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearDownInput : 1;                             // Mask: 0x4, PropSize: 0x10x310(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_32 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_799[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SteeringInput;                                     // 0x314(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrottleInput;                                     // 0x318(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakeInput;                                        // 0x31C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeInput;                                    // 0x320(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdleBrakeInput;                                    // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StopThreshold;                                     // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WrongDirectionThreshold;                           // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     ThrottleInputRate;                                 // 0x330(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     BrakeInputRate;                                    // 0x338(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     HandbrakeInputRate;                                // 0x340(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRate                     SteeringInputRate;                                 // 0x348(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        bWasAvoidanceUpdated : 1;                          // Mask: 0x1, PropSize: 0x10x350(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_33 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7A9[0x27];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           OverrideController;                                // 0x378(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AA[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoBrake;                                        // 0x420(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableBrake;                                     // 0x421(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AC[0x36];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWheeledVehicleMovementComponent* GetDefaultObj();

	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int32 GroupFlags);
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int32 GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int32 GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void SetAutoBrake(bool bWantedAutoBrake, class FName Reason);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
	bool IsAutoBraking();
	bool GetUseAutoGears();
	float GetThrottleInput();
	int32 GetTargetGear();
	float GetSteeringInput();
	float GetPlanarSpeed();
	float GetLateralSpeed();
	float GetHandbrakeInput();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int32 GetCurrentGear();
	float GetBrakeInput();
};

// 0x0 (0x458 - 0x458)
// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static class UClass* StaticClass();
	static class USimpleWheeledVehicleMovementComponent* GetDefaultObj();

	void SetSteerAngle(float SteerAngle, int32 WheelIndex);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
};

// 0x20 (0x50 - 0x30)
// Class PhysXVehicles.TireConfig
class UTireConfig : public UDataAsset
{
public:
	float                                        FrictionScale;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_806[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTireConfigMaterialFriction>   TireFrictionScales;                                // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_807[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTireConfig* GetDefaultObj();

};

// 0x6F8 (0xB38 - 0x440)
// Class PhysXVehicles.VehicleAnimInstance
class UVehicleAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_816[0x6F0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWheeledVehicleMovementComponent*      WheeledVehicleMovementComponent;                   // 0xB30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVehicleAnimInstance* GetDefaultObj();

	class AWheeledVehicle* GetVehicle();
};

// 0xE8 (0x110 - 0x28)
// Class PhysXVehicles.VehicleWheel
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                           CollisionMesh;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     WheelCollisionPhysMat;                             // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDontCreateShape;                                  // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdjustCollisionSize;                          // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_829[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x3C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeRadius;                                       // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeWidth;                                        // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampingRate;                                       // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteerAngle;                                        // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByHandbrake;                              // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTireType*                             TireType;                                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTireConfig*                           TireConfig;                                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffMaxLoad;                                   // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatStiffValue;                                     // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongStiffValue;                                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionForceOffset;                             // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxRaise;                                // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxDrop;                                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionNaturalFrequency;                        // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionDampingRatio;                            // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWheelSweepType                   SweepType;                                         // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBrakeTorque;                                    // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHandBrakeTorque;                                // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWheeledVehicleMovementComponent*      VehicleSim;                                        // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83C[0x64];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleWheel* GetDefaultObj();

	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// 0x10 (0x4D0 - 0x4C0)
// Class PhysXVehicles.WheeledVehicle
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWheeledVehicleMovementComponent*      VehicleMovement;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWheeledVehicle* GetDefaultObj();

};

// 0x160 (0x5B8 - 0x458)
// Class PhysXVehicles.WheeledVehicleMovementComponent4W
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                    EngineSetup;                                       // 0x458(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferential4WData            DifferentialSetup;                                 // 0x4E8(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_847[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleTransmissionData              TransmissionSetup;                                 // 0x508(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SteeringCurve;                                     // 0x538(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        AckermannAccuracy;                                 // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWheeledVehicleMovementComponent4W* GetDefaultObj();

};

}


