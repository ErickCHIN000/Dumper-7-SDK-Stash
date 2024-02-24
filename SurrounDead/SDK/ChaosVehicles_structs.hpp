#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputFunctionType : uint8
{
	LinearFunction                 = 0,
	SquaredFunction                = 1,
	CustomCurve                    = 2,
	EInputFunctionType_MAX         = 3,
};

enum class EVehicleAerofoilType : uint8
{
	Fixed                          = 0,
	Wing                           = 1,
	Rudder                         = 2,
	Elevator                       = 3,
	EVehicleAerofoilType_MAX       = 4,
};

enum class EVehicleThrustType : uint8
{
	Fixed                          = 0,
	Wing                           = 1,
	Rudder                         = 2,
	Elevator                       = 3,
	EVehicleThrustType_MAX         = 4,
};

enum class ESweepShape : uint8
{
	Raycast                        = 0,
	Spherecast                     = 1,
	Shapecast                      = 2,
	ESweepShape_MAX                = 3,
};

enum class ESweepType : uint8
{
	SimpleSweep                    = 0,
	ComplexSweep                   = 1,
	ESweepType_MAX                 = 2,
};

enum class EAxleType : uint8
{
	Undefined                      = 0,
	Front                          = 1,
	Rear                           = 2,
	EAxleType_MAX                  = 3,
};

enum class ETorqueCombineMethod : uint8
{
	None                           = 0,
	Override                       = 1,
	Additive                       = 2,
	ETorqueCombineMethod_MAX       = 3,
};

enum class EVehicleDifferential : uint8
{
	Undefined                      = 0,
	AllWheelDrive                  = 1,
	FrontWheelDrive                = 2,
	RearWheelDrive                 = 3,
	EVehicleDifferential_MAX       = 4,
};

enum class ESteeringType : uint8
{
	SingleAngle                    = 0,
	AngleRatio                     = 1,
	Ackermann                      = 2,
	ESteeringType_MAX              = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xF0 - 0xC8)
// ScriptStruct ChaosVehicles.AnimNode_StageCoachWheelController
struct FAnimNode_StageCoachWheelController : public FAnimNode_SkeletalControlBase
{
public:
	int32                                        WheelSpokeCount;                                   // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularVelocity;                                // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShutterSpeed;                                      // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StageCoachBlend;                                   // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_692[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct ChaosVehicles.AnimNode_WheelController
struct FAnimNode_WheelController : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_694[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ChaosVehicles.VehicleInputs
struct FVehicleInputs
{
public:
	float                                        SteeringInput;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrottleInput;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakeInput;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchInput;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollInput;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawInput;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeInput;                                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x20 - 0x1C)
// ScriptStruct ChaosVehicles.ControlInputs
struct FControlInputs : public FVehicleInputs
{
public:
	bool                                         ParkingEnabled;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TransmissionType;                                  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GearUpInput;                                       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GearDownInput;                                     // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ChaosVehicles.NetworkVehicleInputs
struct FNetworkVehicleInputs : public FNetworkPhysicsDatas
{
public:
	struct FControlInputs                        VehicleInputs;                                     // 0x18(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        TransmissionChangeTime;                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransmissionCurrentGear;                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransmissionTargetGear;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct ChaosVehicles.NetworkVehicleStates
struct FNetworkVehicleStates : public FNetworkPhysicsDatas
{
public:
	struct FVector                               StateLastVelocity;                                 // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                WheelsOmega;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                WheelsAngularPosition;                             // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                SuspensionLastDisplacement;                        // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                SuspensionLastSpringLength;                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                SuspensionAveragedLength;                          // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                SuspensionAveragedCount;                           // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                SuspensionAveragedNum;                             // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        EngineOmega;                                       // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x28 - 0x1C)
// ScriptStruct ChaosVehicles.VehicleReplicatedState
struct FVehicleReplicatedState : public FVehicleInputs
{
public:
	int32                                        TargetGear;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrottleUp;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrottleDown;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosVehicles.VehicleTorqueControlConfig
struct FVehicleTorqueControlConfig
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawTorqueScaling;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawFromSteering;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawFromRollTorqueScaling;                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchTorqueScaling;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollTorqueScaling;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollFromSteering;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationDamping;                                   // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChaosVehicles.VehicleTargetRotationControlConfig
struct FVehicleTargetRotationControlConfig
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRollVsSpeedEnabled;                               // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RollControlScaling;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollMaxAngle;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchControlScaling;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMaxAngle;                                     // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationStiffness;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationDamping;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAccel;                                          // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoCentreRollStrength;                            // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoCentrePitchStrength;                           // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoCentreYawStrength;                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BF[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ChaosVehicles.VehicleStabilizeControlConfig
struct FVehicleStabilizeControlConfig
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AltitudeHoldZ;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionHoldXY;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C3[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ChaosVehicles.VehicleInputRateConfig
struct FVehicleInputRateConfig
{
public:
	float                                        RiseRate;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallRate;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputFunctionType                InputCurveFunction;                                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    UserCurve;                                         // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ChaosVehicles.VehicleAerofoilConfig
struct FVehicleAerofoilConfig
{
public:
	enum class EVehicleAerofoilType              AerofoilType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Area;                                              // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Camber;                                            // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxControlAngle;                                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StallAngle;                                        // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftMultiplier;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragMultiplier;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D4[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ChaosVehicles.VehicleThrustConfig
struct FVehicleThrustConfig
{
public:
	enum class EVehicleThrustType                ThrustType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ThrustAxis;                                        // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxThrustForce;                                    // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxControlAngle;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DD[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ChaosVehicles.WheelStatus
struct FWheelStatus
{
public:
	bool                                         bInContact;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6DE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ContactPoint;                                      // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysMaterial;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSuspensionLength;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringForce;                                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlipAngle;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlipping;                                       // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlipMagnitude;                                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkidding;                                       // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkidMagnitude;                                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SkidNormal;                                        // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriveTorque;                                       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakeTorque;                                       // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bABSActivated;                                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChaosVehicles.VehicleDifferentialConfig
struct FVehicleDifferentialConfig
{
public:
	enum class EVehicleDifferential              DifferentialType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrontRearSplit;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct ChaosVehicles.VehicleEngineConfig
struct FVehicleEngineConfig
{
public:
	struct FRuntimeFloatCurve                    TorqueCurve;                                       // 0x0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        MaxTorque;                                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRPM;                                            // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineIdleRPM;                                     // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineBrakeEffect;                                 // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRevUpMOI;                                    // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRevDownRate;                                 // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ChaosVehicles.VehicleTransmissionConfig
struct FVehicleTransmissionConfig
{
public:
	bool                                         bUseAutomaticGears;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAutoReverse;                                   // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FinalRatio;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ForwardGearRatios;                                 // 0x8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<float>                                ReverseGearRatios;                                 // 0x18(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        ChangeUpRPM;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChangeDownRPM;                                     // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GearChangeTime;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransmissionEfficiency;                            // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_701[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ChaosVehicles.VehicleSteeringConfig
struct FVehicleSteeringConfig
{
public:
	enum class ESteeringType                     SteeringType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_705[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleRatio;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SteeringCurve;                                     // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_708[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChaosVehicles.ChaosWheelSetup
struct FChaosWheelSetup
{
public:
	TSubclassOf<class UChaosVehicleWheel>        WheelClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AdditionalOffset;                                  // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ChaosVehicles.BaseSnapshotData
struct FBaseSnapshotData
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ChaosVehicles.WheelSnapshot
struct FWheelSnapshot
{
public:
	float                                        SuspensionOffset;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRotationAngle;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteeringAngle;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelAngularVelocity;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xB0 - 0x90)
// ScriptStruct ChaosVehicles.WheeledSnaphotData
struct FWheeledSnaphotData : public FBaseSnapshotData
{
public:
	int32                                        SelectedGear;                                      // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPM;                                         // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWheelSnapshot>                WheelSnapshots;                                    // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_721[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x720 - 0x700)
// ScriptStruct ChaosVehicles.VehicleAnimationInstanceProxy
struct FVehicleAnimationInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_723[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


