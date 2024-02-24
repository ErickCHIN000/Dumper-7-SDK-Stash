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

// 0x161 (0x161 - 0x0)
// Function IFeat_Necromancer.IFeat_Necromancer_C.SpawnDemiLich
struct IIFeat_Necromancer_C_SpawnDemiLich_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPetInfo                              PetData;                                           // 0x8(0x158)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Res;                                               // 0x160(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_Necromancer.IFeat_Necromancer_C.GetDemiLichDrone
struct IIFeat_Necromancer_C_GetDemiLichDrone_Params
{
public:
	class ADrone_PlayerCompanionParent_C*        Ref;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function IFeat_Necromancer.IFeat_Necromancer_C.DespawnDemiLich
struct IIFeat_Necromancer_C_DespawnDemiLich_Params
{
public:
	class AActor*                                Pet;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPetReleaseReason                 Reason;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_Necromancer.IFeat_Necromancer_C.GetDemiLich
struct IIFeat_Necromancer_C_GetDemiLich_Params
{
public:
	class AActor*                                Ref;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


