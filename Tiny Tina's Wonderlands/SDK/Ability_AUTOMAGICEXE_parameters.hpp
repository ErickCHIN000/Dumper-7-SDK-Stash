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

// 0x20 (0x20 - 0x0)
// Function Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C.SetMagicMissileTarget
struct UAbility_AUTOMAGICEXE_C_SetMagicMissileTarget_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Ability_AUTOMAGICEXE.Ability_AUTOMAGICEXE_C.GetMagicMissileTarget
struct UAbility_AUTOMAGICEXE_C_GetMagicMissileTarget_Params
{
public:
	class AActor*                                Res;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


