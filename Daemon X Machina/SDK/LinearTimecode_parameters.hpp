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

// 0x3C (0x3C - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
public:
	struct FDropTimecode                         Timecode;                                          // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FrameNumber;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                         OutTimecode;                                       // 0x20(0x1C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
public:
	struct FDropTimecode                         Timecode;                                          // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FrameNumber;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
{
public:
	struct FDropTimecode                         InTimecode;                                        // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


