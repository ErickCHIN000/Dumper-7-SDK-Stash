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

// 0x60 (0x60 - 0x0)
// Function AIC_Creature_Wildlife.AIC_Creature_Wildlife_C.TargetPerceptionUpdated
struct AAIC_Creature_Wildlife_C_TargetPerceptionUpdated_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                           Stimulus;                                          // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function AIC_Creature_Wildlife.AIC_Creature_Wildlife_C.ExecuteUbergraph_AIC_Creature_Wildlife
struct AAIC_Creature_Wildlife_C_ExecuteUbergraph_AIC_Creature_Wildlife_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Actor;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                           K2Node_Event_Stimulus;                             // 0x10(0x58)(NoDestructor)
};

}
}


