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

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x4(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct UTimeManagementBlueprintLibrary_GetTimecode_Params
{
public:
	struct FTimecode                             ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
{
public:
	struct FTimecode                             InTimecode;                                        // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceSignDisplay;                                 // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
public:
	struct FQualifiedFrameTime                   InFrameTime;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
public:
	struct FFrameRate                            InFrameRate;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


