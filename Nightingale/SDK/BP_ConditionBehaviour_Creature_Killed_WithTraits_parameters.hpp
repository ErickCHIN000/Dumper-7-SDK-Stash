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

// 0x25 (0x25 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C.CheckCreatureTags
struct UBP_ConditionBehaviour_Creature_Killed_WithTraits_C_CheckCreatureTags_Params
{
public:
	struct FGameplayTagContainer                 CurrentCreatureTags;                               // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bHasCreatureTraits;                                // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasTags;                                          // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAllTags_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C.GetCreatureTraitInfo
struct UBP_ConditionBehaviour_Creature_Killed_WithTraits_C_GetCreatureTraitInfo_Params
{
public:
	class FText                                  CreatureTraitInfo;                                 // 0x0(0x18)(Parm, OutParm)
};

}
}


