#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D8 (0x930 - 0x158)
// Class ChaosVehicles.ChaosVehicleMovementComponent
class UChaosVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        bReverseAsBrake : 1;                               // Mask: 0x1, PropSize: 0x10x158(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bThrottleAsBrake : 1;                              // Mask: 0x2, PropSize: 0x10x158(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_10 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_381[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCenterOfMassOverride;                       // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CenterOfMassOverride;                              // 0x168(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisWidth;                                      // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisHeight;                                     // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownforceCoefficient;                              // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragArea;                                          // 0x190(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDragMagnitude;                                // 0x194(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0x198(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepThreshold;                                    // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepSlopeLimit;                                   // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehicleAerofoilConfig>        Aerofoils;                                         // 0x1B8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVehicleThrustConfig>          Thrusters;                                         // 0x1C8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVehicleTorqueControlConfig           TorqueControl;                                     // 0x1D8(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTargetRotationControlConfig   TargetRotationControl;                             // 0x218(0x58)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleStabilizeControlConfig        StabilizeControl;                                  // 0x270(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRawHandbrakeInput : 1;                            // Mask: 0x1, PropSize: 0x10x28C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearUpInput : 1;                               // Mask: 0x2, PropSize: 0x10x28C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearDownInput : 1;                             // Mask: 0x4, PropSize: 0x10x28C(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_11 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_393[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWasAvoidanceUpdated : 1;                          // Mask: 0x1, PropSize: 0x10x290(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_12 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_396[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bParkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x294(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_13 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNetworkPhysicsComponent*              NetworkPhysicsComponent;                           // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39C[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleReplicatedState               ReplicatedState;                                   // 0x2D8(0x28)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RawSteeringInput;                                  // 0x304(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawThrottleInput;                                  // 0x308(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawBrakeInput;                                     // 0x30C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawPitchInput;                                     // 0x310(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawRollInput;                                      // 0x314(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawYawInput;                                       // 0x318(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SteeringInput;                                     // 0x31C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrottleInput;                                     // 0x320(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakeInput;                                        // 0x324(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PitchInput;                                        // 0x328(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RollInput;                                         // 0x32C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawInput;                                          // 0x330(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeInput;                                    // 0x334(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequiresControllerForInputs;                      // 0x338(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IdleBrakeInput;                                    // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StopThreshold;                                     // 0x340(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WrongDirectionThreshold;                           // 0x344(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               ThrottleInputRate;                                 // 0x348(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               BrakeInputRate;                                    // 0x3E0(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               SteeringInputRate;                                 // 0x478(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               HandbrakeInputRate;                                // 0x510(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               PitchInputRate;                                    // 0x5A8(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               RollInputRate;                                     // 0x640(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVehicleInputRateConfig               YawInputRate;                                      // 0x6D8(0x98)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA[0x198];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           OverrideController;                                // 0x908(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BB[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosVehicleMovementComponent* GetDefaultObj();

	void SetYawInput(float Yaw);
	void SetUseAutomaticGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetSleeping(bool bEnableSleep);
	void SetRollInput(float Roll);
	void SetRequiresControllerForInputs(bool bRequiresController);
	void SetPitchInput(float Pitch);
	void SetParked(bool bParked);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetChangeUpInput(bool bNewGearUp);
	void SetChangeDownInput(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput);
	void ResetVehicle();
	bool IsParked();
	void IncreaseThrottleInput(float ThrottleDelta);
	bool GetUseAutoGears();
	float GetThrottleInput();
	int32 GetTargetGear();
	float GetSteeringInput();
	bool GetHandbrakeInput();
	float GetForwardSpeedMPH();
	float GetForwardSpeed();
	int32 GetCurrentGear();
	float GetBrakeInput();
	void EnableSelfRighting(bool InState);
	void DecreaseThrottleInput(float ThrottleDelta);
};

// 0x2B8 (0x2E0 - 0x28)
// Class ChaosVehicles.ChaosVehicleWheel
class UChaosVehicleWheel : public UObject
{
public:
	class UStaticMesh*                           CollisionMesh;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxleType                         AxleType;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_433[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x38(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelWidth;                                        // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelMass;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CorneringStiffness;                                // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionForceMultiplier;                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideSlipModifier;                                  // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlipThreshold;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkidThreshold;                                     // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSteerAngle;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedBySteering;                               // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByBrake;                                  // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByHandbrake;                              // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByEngine;                                 // 0x77(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bABSEnabled;                                       // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractionControlEnabled;                           // 0x79(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWheelspinRotation;                              // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETorqueCombineMethod              ExternalTorqueCombineMethod;                       // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    LateralSlipGraph;                                  // 0x88(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FVector                               SuspensionAxis;                                    // 0x110(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SuspensionForceOffset;                             // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxRaise;                                // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxDrop;                                 // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionDampingRatio;                            // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelLoadRatio;                                    // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringRate;                                        // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringPreload;                                     // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SuspensionSmoothing;                               // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollbarScaling;                                    // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESweepShape                       SweepShape;                                        // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESweepType                        SweepType;                                         // 0x161(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_461[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBrakeTorque;                                    // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHandBrakeTorque;                                // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_465[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosWheeledVehicleMovementComponent* VehicleComponent;                                  // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongSlip;                                     // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatSlip;                                      // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugNormalizedTireLoad;                           // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugWheelTorque;                                  // 0x18C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongForce;                                    // 0x190(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatForce;                                     // 0x194(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x198(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldLocation;                                       // 0x1B0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x1C8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478[0x100];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosVehicleWheel* GetDefaultObj();

	bool IsInAir();
	float GetWheelRadius();
	float GetWheelAngularVelocity();
	float GetSuspensionOffset();
	struct FVector GetSuspensionAxis();
	float GetSteerAngle();
	float GetRotationAngularVelocity();
	float GetRotationAngle();
	enum class EAxleType GetAxleType();
};

// 0x320 (0xC50 - 0x930)
// Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
class UChaosWheeledVehicleMovementComponent : public UChaosVehicleMovementComponent
{
public:
	bool                                         bSuspensionEnabled;                                // 0x930(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWheelFrictionEnabled;                             // 0x931(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLegacyWheelFrictionPosition;                      // 0x932(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_651[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChaosWheelSetup>              WheelSetups;                                       // 0x938(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCollisionResponseContainer           WheelTraceCollisionResponses;                      // 0x948(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMechanicalSimEnabled;                             // 0x968(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleEngineConfig                  EngineSetup;                                       // 0x970(0xC8)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferentialConfig            DifferentialSetup;                                 // 0xA38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionConfig            TransmissionSetup;                                 // 0xA48(0x70)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleSteeringConfig                SteeringSetup;                                     // 0xAB8(0xD8)(Edit, NativeAccessSpecifierPublic)
	TArray<class UChaosVehicleWheel*>            Wheels;                                            // 0xB90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_65A[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosWheeledVehicleMovementComponent* GetDefaultObj();

	void SetWheelSlipGraphMultiplier(int32 WheelIndex, float Multiplier);
	void SetWheelRadius(int32 WheelIndex, float Radius);
	void SetWheelMaxSteerAngle(int32 WheelIndex, float AngleDegrees);
	void SetWheelMaxBrakeTorque(int32 WheelIndex, float Torque);
	void SetWheelHandbrakeTorque(int32 WheelIndex, float Torque);
	void SetWheelFrictionMultiplier(int32 WheelIndex, float Friction);
	void SetWheelClass(int32 WheelIndex, TSubclassOf<class UChaosVehicleWheel> InWheelClass);
	void SetTractionControlEnabled(int32 WheelIndex, bool Enabled);
	void SetTorqueCombineMethod(enum class ETorqueCombineMethod InCombineMethod, int32 WheelIndex);
	void SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32 WheelIndex);
	void SetSnapshot(struct FWheeledSnaphotData& SnapshotIn);
	void SetMaxEngineTorque(float Torque);
	void SetDriveTorque(float DriveTorque, int32 WheelIndex);
	void SetDragCoefficient(float DragCoeff);
	void SetDownforceCoefficient(float DownforceCoeff);
	void SetDifferentialFrontRearSplit(float FrontRearSlpit);
	void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
	void SetAffectedBySteering(int32 WheelIndex, bool Enabled);
	void SetAffectedByHandbrake(int32 WheelIndex, bool Enabled);
	void SetAffectedByEngine(int32 WheelIndex, bool Enabled);
	void SetAffectedByBrake(int32 WheelIndex, bool Enabled);
	void SetABSEnabled(int32 WheelIndex, bool Enabled);
	struct FWheelStatus MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated);
	struct FWheelSnapshot MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity);
	struct FWheeledSnaphotData MakeWheeledSnapshot(const struct FTransform& Transform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, int32 SelectedGear, float EngineRPM, TArray<struct FWheelSnapshot>& WheelSnapshots);
	struct FWheelStatus GetWheelState(int32 WheelIndex);
	struct FWheeledSnaphotData GetSnapshot();
	int32 GetNumWheels();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	void EnableWheelFriction(bool InState);
	void EnableSuspension(bool InState);
	void EnableMechanicalSim(bool InState);
	void BreakWheelStatus(struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, float* SlipAngle, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal, float* DriveTorque, float* BrakeTorque, bool* bABSActivated);
	void BreakWheelSnapshot(struct FWheelSnapshot& Snapshot, float* SuspensionOffset, float* WheelRotationAngle, float* SteeringAngle, float* WheelRadius, float* WheelAngularVelocity);
	void BreakWheeledSnapshot(struct FWheeledSnaphotData& Snapshot, struct FTransform* Transform, struct FVector* LinearVelocity, struct FVector* AngularVelocity, int32* SelectedGear, float* EngineRPM, TArray<struct FWheelSnapshot>* WheelSnapshots);
};

// 0x748 (0xA90 - 0x348)
// Class ChaosVehicles.VehicleAnimationInstance
class UVehicleAnimationInstance : public UAnimInstance
{
public:
	uint8                                        Pad_674[0x738];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosWheeledVehicleMovementComponent* WheeledVehicleComponent;                           // 0xA80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_676[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleAnimationInstance* GetDefaultObj();

	class AWheeledVehiclePawn* GetVehicle();
};

// 0x10 (0x330 - 0x320)
// Class ChaosVehicles.WheeledVehiclePawn
class AWheeledVehiclePawn : public APawn
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChaosVehicleMovementComponent*        VehicleMovementComponent;                          // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWheeledVehiclePawn* GetDefaultObj();

};

}


