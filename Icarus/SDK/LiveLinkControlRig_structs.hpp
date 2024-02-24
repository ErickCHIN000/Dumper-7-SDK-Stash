#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8 - 0x8)
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkBase : public FRigUnit
{
public:
};

// 0x88 (0x90 - 0x8)
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{
public:
	class FName                                  SubjectName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1757[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1759[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DebugDrawOffset;                                   // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x60(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{
public:
	struct FSubjectFrameHandle                   SubjectFrame;                                      // 0x8(0x18)(NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{
public:
	struct FSubjectFrameHandle                   SubjectFrame;                                      // 0x8(0x18)(NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1787[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{
public:
	class FName                                  SubjectName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DebugDrawOffset;                                   // 0x30(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubjectFrameHandle                   SubjectFrame;                                      // 0x60(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_17AE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


