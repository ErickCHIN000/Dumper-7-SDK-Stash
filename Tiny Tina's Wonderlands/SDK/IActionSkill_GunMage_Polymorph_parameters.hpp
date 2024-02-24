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
// Function IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C.PolymorphSetFailedToFindTarget
struct IIActionSkill_GunMage_Polymorph_C_PolymorphSetFailedToFindTarget_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C.PolymorphFindTarget
struct IIActionSkill_GunMage_Polymorph_C_PolymorphFindTarget_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PolymorphTarget;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


