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

// 0x1 (0x1 - 0x0)
// Function BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C.OnVocalisationAnimNotify
struct IBP_CreatureAudio_AnimNotify_Interface_C_OnVocalisationAnimNotify_Params
{
public:
	enum class EAIVocalisationType               VocalisationType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C.OnFootstepAnimNotify
struct IBP_CreatureAudio_AnimNotify_Interface_C_OnFootstepAnimNotify_Params
{
public:
	enum class ECreatureFootstepType             FootstepType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreatureFootstepDirection        FootstepDirection;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


