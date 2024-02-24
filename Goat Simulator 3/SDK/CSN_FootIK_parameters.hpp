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
// Function CSN_FootIK.CSNVisualDebuggingLibrary.SetHUD
struct UCSNVisualDebuggingLibrary_SetHUD_Params
{
public:
	class AHUD*                                  TheHUD;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CSN_FootIK.CSNVisualDebuggingLibrary.RemoveDebugInfo
struct UCSNVisualDebuggingLibrary_RemoveDebugInfo_Params
{
public:
	int32                                        Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CSN_FootIK.CSNVisualDebuggingLibrary.GetNewVisualDebugStringKey
struct UCSNVisualDebuggingLibrary_GetNewVisualDebugStringKey_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CSN_FootIK.CSNVisualDebuggingLibrary.AddOrReplaceDebugInfo
struct UCSNVisualDebuggingLibrary_AddOrReplaceDebugInfo_Params
{
public:
	int32                                        Key;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCSNVisualDebugInfo                   DebugInfo;                                         // 0x8(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAppendToText;                                     // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


