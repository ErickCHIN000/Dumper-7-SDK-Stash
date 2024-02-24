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

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.TurretMovementComponent.SetRotationInputs
struct UTurretMovementComponent_SetRotationInputs_Params
{
public:
	float                                        XValue;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YValue;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
struct UTurretMovementComponent_ServerSetRotationInputs_Params
{
public:
	struct FVector2D                             InRotationInputs;                                  // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.SetTeam
struct AVehicle_SetTeam_Params
{
public:
	class UTeam*                                 Team;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.RemoveVehiclePart
struct AVehicle_RemoveVehiclePart_Params
{
public:
	class UVehiclePartData*                      CharacterPart;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.Vehicle.IsPowerSliding
struct AVehicle_IsPowerSliding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.Vehicle.IsInAir
struct AVehicle_IsInAir_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.GetTeamComponent
struct AVehicle_GetTeamComponent_Params
{
public:
	class UTeamComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.GetTeam
struct AVehicle_GetTeam_Params
{
public:
	class UTeam*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.GetTargetingComponent
struct AVehicle_GetTargetingComponent_Params
{
public:
	class UTargetingComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.GetTargetableComponent
struct AVehicle_GetTargetableComponent_Params
{
public:
	class UTargetableComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.Vehicle.GetNumWheelsInAir
struct AVehicle_GetNumWheelsInAir_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxVehicle.Vehicle.GetEquipedParts
struct AVehicle_GetEquipedParts_Params
{
public:
	TArray<class UVehiclePartData*>              ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.Vehicle.AddVehiclePart
struct AVehicle_AddVehiclePart_Params
{
public:
	class UVehiclePartData*                      CharacterPart;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.StopBoost
struct UVehicleBoostComponent_StopBoost_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
struct UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params
{
public:
	float                                        BoostTarget;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           BoostValueReachedDelegate;                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
struct UVehicleBoostComponent_OnRep_IsBoosting_Params
{
public:
	bool                                         bWasBoosting;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
struct UVehicleBoostComponent_GetRelativeBoostSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
struct UVehicleBoostComponent_GetMaxBoostPoolValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
struct UVehicleBoostComponent_GetCurrentBoostPoolValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
struct UVehicleBoostComponent_GetCurrentBoostChargesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
struct UVehicleBoostComponent_GetBoostEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
struct UVehicleBoostComponent_GetBoostDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
struct UVehicleDigiThrustComponent_SetTeleportDirection_Params
{
public:
	struct FVector                               WantedDirection;                                   // 0x0(0xC)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
struct UVehicleDigiThrustComponent_IsTeleporting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
struct UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
struct UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
struct UVehicleHitchAttachPtComponent_IsAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
struct UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params
{
public:
	class AVehicle*                              FromVehicle;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
struct UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params
{
public:
	class AActor*                                TrailerToAttach;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
struct UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params
{
public:
	class AVehicle*                              FromVehicle;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.VehicleHitchComponent.AttachToHitch
struct UVehicleHitchComponent_AttachToHitch_Params
{
public:
	class UVehicleHitchAttachPtComponent*        AttachPtToAttach;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
struct UVehicleHoverComponent_ServerUpdateState_Params
{
public:
	bool                                         InbIsEnabled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InStrafeInput;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InForwardInput;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InTargetRotation;                                  // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
struct UVehicleHoverComponent_IsHoverEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehicleHoverComponent.EnableHover
struct UVehicleHoverComponent_EnableHover_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
struct IVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params
{
public:
	struct FVector2D                             StickInput;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
struct AVehiclePartActor_WeldActorToVehicle_Params
{
public:
	class AActor*                                SpawnedPart;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
struct UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
struct UVehiclePowerSlideComponent_ResumePowerSlide_Params
{
public:
	class FName                                  Reason;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
struct UVehiclePowerSlideComponent_PausePowerSlide_Params
{
public:
	class FName                                  Reason;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
struct UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params
{
public:
	bool                                         bWasPowerSliding;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
struct UVehiclePowerSlideComponent_IsPowerSlidePaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
struct UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
struct UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
struct UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
struct UWheeledVehicleMovementComponentNW_SetSteerAngle_Params
{
public:
	float                                        SteerAngle;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
struct UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
struct UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params
{
public:
	float                                        SteerAngle;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
struct UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params
{
public:
	float                                        DriveTorque;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
struct UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params
{
public:
	float                                        BrakeTorque;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
struct UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
struct UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params
{
public:
	float                                        NewModifier;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
struct UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
struct UWheeledVehicleMovementComponentNW_IsInAir_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
struct UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
struct UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
struct UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
struct UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params
{
public:
	struct FVector2D                             StickInput;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
struct UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
struct UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params
{
public:
	struct FVector2D                             StickInput;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WantedDirAngle;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVehicleCameraRelativeDrivingMode Mode;                                              // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1333[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AngleToSteeringCurve;                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
struct UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
struct UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInfluence;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


