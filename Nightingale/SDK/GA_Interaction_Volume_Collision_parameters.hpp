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

// 0x50 (0x50 - 0x0)
// Function GA_Interaction_Volume_Collision.GA_Interaction_Volume_Collision_C.ExecuteInteraction
struct UGA_Interaction_Volume_Collision_C_ExecuteInteraction_Params
{
public:
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x0(0x20)(Parm, OutParm)
	class ACollisionVolume*                      K2Node_DynamicCast_AsCollision_Volume;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_699E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_ExecuteInteraction_InteractionTags;       // 0x30(0x20)(None)
};

}
}


