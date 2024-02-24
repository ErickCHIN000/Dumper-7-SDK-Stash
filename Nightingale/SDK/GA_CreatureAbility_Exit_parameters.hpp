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
// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.CreatureAbilityMontageStart
struct UGA_CreatureAbility_Exit_C_CreatureAbilityMontageStart_Params
{
public:
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.K2_OnEndAbility
struct UGA_CreatureAbility_Exit_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C.ExecuteUbergraph_GA_CreatureAbility_Exit
struct UGA_CreatureAbility_Exit_C_ExecuteUbergraph_GA_CreatureAbility_Exit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0xC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


