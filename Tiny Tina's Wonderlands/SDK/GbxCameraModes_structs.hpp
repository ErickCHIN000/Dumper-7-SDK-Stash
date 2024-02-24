#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECameraBehaviorLookAxis : uint8
{
	Pitch                          = 0,
	Yaw                            = 1,
	Roll                           = 2,
	MAX                            = 3,
};

enum class ECameraLookSpaces : uint8
{
	World                          = 0,
	ViewTarget                     = 1,
	ViewTargetBase                 = 2,
	ECameraLookSpaces_MAX          = 3,
};

enum class ECameraModeTransitionBlendType : uint8
{
	None                           = 0,
	Full                           = 1,
	FOV                            = 2,
	ECameraModeTransitionBlendType_MAX = 3,
};

enum class EViewTargetRotationUpdateMethod : int32
{
	FromCamera                     = 0,
	Fixed                          = 1,
	FromInputDelta                 = 2,
	EViewTargetRotationUpdateMethod_MAX = 3,
};

enum class ECollisionStatusDirection : uint8
{
	Center                         = 0,
	Up                             = 1,
	Down                           = 2,
	Right                          = 3,
	Left                           = 4,
	MAX                            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxCameraModes.ReplicatedCameraModeState
struct FReplicatedCameraModeState
{
public:
	class FName                                  ModeName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTimeOverride;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxCameraModes.InitialRotationAxisParams
struct FInitialRotationAxisParams
{
public:
	float                                        MinAngle;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToBase;                                   // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearInterpolation;                              // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SpeedScaleCurve;                                   // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_681[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxCameraModes.CameraBehaviorLookAxis
struct FCameraBehaviorLookAxis
{
public:
	float                                        InputScale;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimit : 1;                                        // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_684[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAngle;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeatheringAngle;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeatheringInputScale;                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x610 (0x610 - 0x0)
// ScriptStruct GbxCameraModes.CameraStatePostProcessBlend
struct FCameraStatePostProcessBlend
{
public:
	uint8                                        Pad_68C[0x610];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


