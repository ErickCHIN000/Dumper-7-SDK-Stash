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

// 0x18 (0x18 - 0x0)
// Function BP_RewardBehaviour_Base.BP_RewardBehaviour_Base_C.GetDebugText
struct UBP_RewardBehaviour_Base_C_GetDebugText_Params
{
public:
	class FText                                  DebugText;                                         // 0x0(0x18)(Parm, OutParm)
};

// 0x48 (0x48 - 0x0)
// Function BP_RewardBehaviour_Base.BP_RewardBehaviour_Base_C.GetDebugDescription
struct UBP_RewardBehaviour_Base_C_GetDebugDescription_Params
{
public:
	class FString                                OutDescription;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDebugText_DebugText;                   // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


