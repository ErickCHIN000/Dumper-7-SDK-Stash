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

// 0x10 (0x10 - 0x0)
// Function RedemptionsRuntime.RedemptionComponent.Server_ClaimRedemption
struct URedemptionComponent_Server_ClaimRedemption_Params
{
public:
	class FString                                RedemptionId;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RedemptionsRuntime.RedemptionComponent.GetCurrentRedemptions
struct URedemptionComponent_GetCurrentRedemptions_Params
{
public:
	TArray<struct FRedemptionEntry>              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RedemptionsRuntime.RedemptionComponent.Client_RedemptionResponse
struct URedemptionComponent_Client_RedemptionResponse_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1283[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RewardName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function RedemptionsRuntime.RedemptionComponent.CanRedemptionBeClaimed
struct URedemptionComponent_CanRedemptionBeClaimed_Params
{
public:
	struct FRedemptionEntry                      Entry;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A1[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.TryGetRedemptionUIData
struct URedemptionEntryFunctionLibrary_TryGetRedemptionUIData_Params
{
public:
	struct FRedemptionEntry                      Entry;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRedeemableRewardUIData               OutData;                                           // 0x80(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGetResult                        OutBranches;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.IsRedemptionValid
struct URedemptionEntryFunctionLibrary_IsRedemptionValid_Params
{
public:
	struct FRedemptionEntry                      Entry;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1309[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.GetRedemptionId
struct URedemptionEntryFunctionLibrary_GetRedemptionId_Params
{
public:
	struct FRedemptionEntry                      Entry;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x80(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


