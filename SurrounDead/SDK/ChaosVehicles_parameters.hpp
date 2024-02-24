#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
struct UChaosVehicleMovementComponent_SetYawInput_Params
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
struct UChaosVehicleMovementComponent_SetUseAutomaticGears_Params
{
public:
	bool                                         bUseAuto;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
struct UChaosVehicleMovementComponent_SetThrottleInput_Params
{
public:
	float                                        Throttle;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
struct UChaosVehicleMovementComponent_SetTargetGear_Params
{
public:
	int32                                        GearNum;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediate;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
struct UChaosVehicleMovementComponent_SetSteeringInput_Params
{
public:
	float                                        Steering;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping
struct UChaosVehicleMovementComponent_SetSleeping_Params
{
public:
	bool                                         bEnableSleep;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
struct UChaosVehicleMovementComponent_SetRollInput_Params
{
public:
	float                                        Roll;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs
struct UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Params
{
public:
	bool                                         bRequiresController;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
struct UChaosVehicleMovementComponent_SetPitchInput_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetParked
struct UChaosVehicleMovementComponent_SetParked_Params
{
public:
	bool                                         bParked;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
struct UChaosVehicleMovementComponent_SetHandbrakeInput_Params
{
public:
	bool                                         bNewHandbrake;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
struct UChaosVehicleMovementComponent_SetChangeUpInput_Params
{
public:
	bool                                         bNewGearUp;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
struct UChaosVehicleMovementComponent_SetChangeDownInput_Params
{
public:
	bool                                         bNewGearDown;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
struct UChaosVehicleMovementComponent_SetBrakeInput_Params
{
public:
	float                                        Brake;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
struct UChaosVehicleMovementComponent_ServerUpdateState_Params
{
public:
	float                                        InSteeringInput;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InThrottleInput;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBrakeInput;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InHandbrakeInput;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InCurrentGear;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRollInput;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPitchInput;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InYawInput;                                        // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.IsParked
struct UChaosVehicleMovementComponent_IsParked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
struct UChaosVehicleMovementComponent_IncreaseThrottleInput_Params
{
public:
	float                                        ThrottleDelta;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
struct UChaosVehicleMovementComponent_GetUseAutoGears_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput
struct UChaosVehicleMovementComponent_GetThrottleInput_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
struct UChaosVehicleMovementComponent_GetTargetGear_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput
struct UChaosVehicleMovementComponent_GetSteeringInput_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput
struct UChaosVehicleMovementComponent_GetHandbrakeInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
struct UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
struct UChaosVehicleMovementComponent_GetForwardSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
struct UChaosVehicleMovementComponent_GetCurrentGear_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput
struct UChaosVehicleMovementComponent_GetBrakeInput_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
struct UChaosVehicleMovementComponent_EnableSelfRighting_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
struct UChaosVehicleMovementComponent_DecreaseThrottleInput_Params
{
public:
	float                                        ThrottleDelta;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.IsInAir
struct UChaosVehicleWheel_IsInAir_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetWheelRadius
struct UChaosVehicleWheel_GetWheelRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity
struct UChaosVehicleWheel_GetWheelAngularVelocity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
struct UChaosVehicleWheel_GetSuspensionOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis
struct UChaosVehicleWheel_GetSuspensionAxis_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
struct UChaosVehicleWheel_GetSteerAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity
struct UChaosVehicleWheel_GetRotationAngularVelocity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
struct UChaosVehicleWheel_GetRotationAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
struct UChaosVehicleWheel_GetAxleType_Params
{
public:
	enum class EAxleType                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier
struct UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius
struct UChaosWheeledVehicleMovementComponent_SetWheelRadius_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle
struct UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleDegrees;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque
struct UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Torque;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque
struct UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Torque;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier
struct UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass
struct UChaosWheeledVehicleMovementComponent_SetWheelClass_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UChaosVehicleWheel>        InWheelClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled
struct UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod
struct UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Params
{
public:
	enum class ETorqueCombineMethod              InCombineMethod;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams
struct UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Params
{
public:
	float                                        Rate;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Preload;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRaise;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDrop;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot
struct UChaosWheeledVehicleMovementComponent_SetSnapshot_Params
{
public:
	struct FWheeledSnaphotData                   SnapshotIn;                                        // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque
struct UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Params
{
public:
	float                                        Torque;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque
struct UChaosWheeledVehicleMovementComponent_SetDriveTorque_Params
{
public:
	float                                        DriveTorque;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient
struct UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Params
{
public:
	float                                        DragCoeff;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient
struct UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Params
{
public:
	float                                        DownforceCoeff;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit
struct UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Params
{
public:
	float                                        FrontRearSlpit;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque
struct UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Params
{
public:
	float                                        BrakeTorque;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering
struct UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_532[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake
struct UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine
struct UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake
struct UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_567[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled
struct UChaosWheeledVehicleMovementComponent_SetABSEnabled_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_571[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
struct UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params
{
public:
	bool                                         bInContact;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_589[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ContactPoint;                                      // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSuspensionLength;                        // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringForce;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlipAngle;                                         // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlipping;                                       // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlipMagnitude;                                     // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkidding;                                       // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_593[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkidMagnitude;                                     // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_596[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SkidNormal;                                        // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriveTorque;                                       // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakeTorque;                                       // 0x64(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bABSActivated;                                     // 0x68(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWheelStatus                          ReturnValue;                                       // 0x70(0x88)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot
struct UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Params
{
public:
	float                                        SuspensionOffset;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRotationAngle;                                // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteeringAngle;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelAngularVelocity;                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWheelSnapshot                        ReturnValue;                                       // 0x14(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot
struct UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x60(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x78(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedGear;                                      // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPM;                                         // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWheelSnapshot>                WheelSnapshots;                                    // 0x98(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWheeledSnaphotData                   ReturnValue;                                       // 0xB0(0xB0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
struct UChaosWheeledVehicleMovementComponent_GetWheelState_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWheelStatus                          ReturnValue;                                       // 0x8(0x88)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot
struct UChaosWheeledVehicleMovementComponent_GetSnapshot_Params
{
public:
	struct FWheeledSnaphotData                   ReturnValue;                                       // 0x0(0xB0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
struct UChaosWheeledVehicleMovementComponent_GetNumWheels_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
struct UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
struct UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
struct UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
struct UChaosWheeledVehicleMovementComponent_EnableSuspension_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
struct UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
struct UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params
{
public:
	struct FWheelStatus                          Status;                                            // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInContact;                                        // 0x88(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_617[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ContactPoint;                                      // 0x90(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSuspensionLength;                        // 0xB0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringForce;                                       // 0xB4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlipAngle;                                         // 0xB8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlipping;                                       // 0xBC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlipMagnitude;                                     // 0xC0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkidding;                                       // 0xC4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_621[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkidMagnitude;                                     // 0xC8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_623[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SkidNormal;                                        // 0xD0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriveTorque;                                       // 0xE8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrakeTorque;                                       // 0xEC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bABSActivated;                                     // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_627[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot
struct UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Params
{
public:
	struct FWheelSnapshot                        Snapshot;                                          // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SuspensionOffset;                                  // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRotationAngle;                                // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteeringAngle;                                     // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelAngularVelocity;                              // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot
struct UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Params
{
public:
	struct FWheeledSnaphotData                   Snapshot;                                          // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0xB0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x110(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x128(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedGear;                                      // 0x140(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPM;                                         // 0x144(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWheelSnapshot>                WheelSnapshots;                                    // 0x148(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_64D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
struct UVehicleAnimationInstance_GetVehicle_Params
{
public:
	class AWheeledVehiclePawn*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


