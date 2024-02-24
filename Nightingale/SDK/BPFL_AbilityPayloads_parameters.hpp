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

// 0xC1 (0xC1 - 0x0)
// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetGameplayTagConatinerFromPayload
struct UBPFL_AbilityPayloads_C_GetGameplayTagConatinerFromPayload_Params
{
public:
	struct FGameplayAbilityPayloadHandle         Payload;                                           // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        PayloadIndex;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x38(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 LGameplayTagContainer;                             // 0x58(0x20)(Edit, BlueprintVisible)
	int32                                        LInteger;                                          // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LPayloadIndex;                                     // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         LPayload;                                          // 0x80(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue; // 0xA0(0x20)(None)
	bool                                         CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue; // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetIntFromPayload
struct UBPFL_AbilityPayloads_C_GetIntFromPayload_Params
{
public:
	struct FGameplayAbilityPayloadHandle         Payload;                                           // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        PayloadIndex;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Integer;                                           // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LInteger;                                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LPayloadIndex;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         LPayload;                                          // 0x40(0x20)(Edit, BlueprintVisible)
	int32                                        CallFunc_GetIntegerFromAbilityPayload_ReturnValue; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AbilityPayloadHasInteger_ReturnValue;     // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetDataTableRowHandleFromPayload
struct UBPFL_AbilityPayloads_C_GetDataTableRowHandleFromPayload_Params
{
public:
	struct FGameplayAbilityPayloadHandle         Payload;                                           // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        PayloadIndex;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RowHandle;                                         // 0x38(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LDataTableRowHandle;                               // 0x48(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        LPayloadIndex;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityPayloadHandle         LPayload;                                          // 0x60(0x20)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue; // 0x80(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue; // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


