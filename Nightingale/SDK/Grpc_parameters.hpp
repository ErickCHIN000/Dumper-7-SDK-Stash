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

// 0x20 (0x20 - 0x0)
// Function Grpc.ServiceStatusFunctionLibrary.IsSuccess
struct UServiceStatusFunctionLibrary_IsSuccess_Params
{
public:
	struct FOnlineServiceStatus                  Status;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsSuccess;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


