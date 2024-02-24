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

// 0xDA (0xDA - 0x0)
// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.HandleEvent
struct UGA_CreatureAbility_GiantTreeClubInteraction_C_HandleEvent_Params
{
public:
	struct FGameplayTag                          EventTags;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateAndEquipItemFromItemID_Success;     // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.K2_OnEndAbility
struct UGA_CreatureAbility_GiantTreeClubInteraction_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C.ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction
struct UGA_CreatureAbility_GiantTreeClubInteraction_C_ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


