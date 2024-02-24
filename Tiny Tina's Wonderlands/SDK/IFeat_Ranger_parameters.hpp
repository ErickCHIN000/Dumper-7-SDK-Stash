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

// 0xA (0xA - 0x0)
// Function IFeat_Ranger.IFeat_Ranger_C.DespawnMushroomCompanion
struct IIFeat_Ranger_C_DespawnMushroomCompanion_Params
{
public:
	class AActor*                                Pet;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPetReleaseReason                 Reason;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function IFeat_Ranger.IFeat_Ranger_C.GetMushroomCompanion
struct IIFeat_Ranger_C_GetMushroomCompanion_Params
{
public:
	class AActor*                                Ref;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x161 (0x161 - 0x0)
// Function IFeat_Ranger.IFeat_Ranger_C.SpawnMushroomCompanion
struct IIFeat_Ranger_C_SpawnMushroomCompanion_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPetInfo                              PetData;                                           // 0x8(0x158)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Res;                                               // 0x160(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


