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

// 0x28 (0x28 - 0x0)
// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.ObjectToText
struct USMExtendedGraphPropertyHelpers_ObjectToText_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InFunctionName;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1360 (0x1360 - 0x0)
// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
struct USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Params
{
public:
	struct FSMTextGraphProperty                  GraphProperty;                                     // 0x0(0x1340)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Result;                                            // 0x1340(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


