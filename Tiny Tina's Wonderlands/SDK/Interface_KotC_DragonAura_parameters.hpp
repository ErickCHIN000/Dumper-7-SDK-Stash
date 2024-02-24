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

// 0x9 (0x9 - 0x0)
// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.ExternalRemoveDragonAuraTarget
struct IInterface_KotC_DragonAura_C_ExternalRemoveDragonAuraTarget_Params
{
public:
	class AActor*                                DragonAuraTarget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.IsActorInMyDragonAura
struct IInterface_KotC_DragonAura_C_IsActorInMyDragonAura_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.ResetAuraDuration
struct IInterface_KotC_DragonAura_C_ResetAuraDuration_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


