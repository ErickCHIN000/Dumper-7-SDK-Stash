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

// 0x221 (0x221 - 0x0)
// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ValidateClientTargetData
struct ABPTA_Crafting_Step_StepDataReplicated_C_ValidateClientTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsTargetDataValid;                                // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           ServerCIPData;                                     // 0x30(0xD8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_C0C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_DynamicStructsToString_ReturnValue;       // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_DynamicStructsToString_ReturnValue_1;     // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindCraftForID_BP_Success;                // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C11[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindCraftForID_BP_CraftInProgressIndex;   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C15[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CallFunc_Array_Get_Item;                           // 0x140(0xD8)(HasGetValueTypeHash)
	uint8                                        Pad_C1B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ConfirmAndSendTargetData
struct ABPTA_Crafting_Step_StepDataReplicated_C_ConfirmAndSendTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(Parm, OutParm)
	struct FHitResult                            CallFunc_MakeHitResult_ReturnValue;                // 0x28(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromHitResult_ReturnValue; // 0x110(0x28)(None)
};

// 0x150 (0x150 - 0x0)
// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated
struct ABPTA_Crafting_Step_StepDataReplicated_C_ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_DynamicStructsToString_ReturnValue;       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindCraftForID_BP_Success;                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindCraftForID_BP_CraftInProgressIndex;   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Crafting_CraftInProgress           CallFunc_Array_Get_Item;                           // 0x50(0xD8)(HasGetValueTypeHash)
	uint8                                        Pad_D0E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_DynamicStructsToString_ReturnValue_1;     // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x140(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StriStri_ReturnValue;            // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


