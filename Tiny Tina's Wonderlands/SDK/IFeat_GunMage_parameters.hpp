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

// 0x5 (0x5 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.GunMageSetWildMagicGrade
struct IIFeat_GunMage_C_GunMageSetWildMagicGrade_Params
{
public:
	int32                                        NewGrade;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.TogglePolymorphLocks
struct IIFeat_GunMage_C_TogglePolymorphLocks_Params
{
public:
	class AActor*                                PolymoprhTarget;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableLocks;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_144A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTeam*                                 StartingTeam;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.GetSpellweavingStacks
struct IIFeat_GunMage_C_GetSpellweavingStacks_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.RemoveAllSpellweavingStacks
struct IIFeat_GunMage_C_RemoveAllSpellweavingStacks_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.RemoveSpellweavingStacks
struct IIFeat_GunMage_C_RemoveSpellweavingStacks_Params
{
public:
	int32                                        Stacks;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Res;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_GunMage.IFeat_GunMage_C.AddSpellweavingStacks
struct IIFeat_GunMage_C_AddSpellweavingStacks_Params
{
public:
	int32                                        Stacks;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Res;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


