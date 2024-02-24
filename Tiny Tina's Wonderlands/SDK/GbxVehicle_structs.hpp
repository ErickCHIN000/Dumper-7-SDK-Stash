#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInAirBehavior : uint8
{
	Continue                       = 0,
	Pause                          = 1,
	Stop                           = 2,
	EInAirBehavior_MAX             = 3,
};

enum class EVehicleCameraRelativeDrivingMode : uint8
{
	Standard                       = 0,
	ForwardOnly                    = 1,
	ReverseOnly                    = 2,
	Mixed                          = 3,
	ForceReverse                   = 4,
	ClassicBL2                     = 5,
	EVehicleCameraRelativeDrivingMode_MAX = 6,
};

enum class EVehicleDriveType : uint8
{
	Wheel4                         = 0,
	WheelN                         = 1,
	WheelNNoDrive                  = 2,
	Tank                           = 3,
	EVehicleDriveType_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxVehicle.ReplicatedHoverComponentState
struct FReplicatedHoverComponentState
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1448[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StrafeInput;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardInput;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0xC(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxVehicle.ComplexWheelMovement
struct FComplexWheelMovement
{
public:
	uint8                                        Pad_146B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        WheelReference;                                    // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        WheelSteeringPivotReference;                       // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ControlArmReference;                               // 0x38(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        PhysicalWheelReference;                            // 0x50(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SuspensionDropMaxSpeed;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1474[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x158 - 0x140)
// ScriptStruct GbxVehicle.AnimNode_ComplexWheelHandler
struct FAnimNode_ComplexWheelHandler : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FComplexWheelMovement>         WheelMovementSystems;                              // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1480[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxVehicle.BoostRegenerateEvent
struct FBoostRegenerateEvent
{
public:
	float                                        BoostTarget;                                       // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1492[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           VehicleBoostValueReachedEvent;                     // 0x8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct GbxVehicle.BoostPhysicsParams
struct FBoostPhysicsParams
{
public:
	float                                        RefVelForPowerCurveKmH;                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RefAccelForPowerCurve;                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    BoostPower;                                        // 0x8(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        PowerOverTimeCurveBaseRatio;                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RefTimeForPowerOverTimeCurve;                      // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    BoostPowerOverTime;                                // 0x88(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRelativeDirectionData                BoostDirection;                                    // 0x100(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct GbxVehicle.PushbackCharactersTickFunction
struct FPushbackCharactersTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_14C6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxVehicle.VehiclePartList
struct FVehiclePartList
{
public:
	TArray<class UVehiclePartData*>              Parts;                                             // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxVehicle.AntiRollBarData
struct FAntiRollBarData
{
public:
	int32                                        WheelIndex1;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex2;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


