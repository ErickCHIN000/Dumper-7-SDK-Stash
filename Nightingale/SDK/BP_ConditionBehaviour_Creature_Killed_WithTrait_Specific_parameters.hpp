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

// 0x22 (0x22 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C.CheckCreatureTags
struct UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C_CheckCreatureTags_Params
{
public:
	struct FGameplayTagContainer                 CurrentCreatureTags;                               // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bHasCreatureTraits;                                // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C.GetCreatureTraitInfo
struct UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C_GetCreatureTraitInfo_Params
{
public:
	class FText                                  CreatureTraitInfo;                                 // 0x0(0x18)(Parm, OutParm)
	class FString                                CallFunc_GetDebugStringFromGameplayTag_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)(None)
};

}
}


