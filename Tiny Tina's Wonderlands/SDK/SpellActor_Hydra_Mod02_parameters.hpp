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
// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.HasValidTarget
struct ASpellActor_Hydra_Mod02_C_HasValidTarget_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.HydraSpellActor_FireProjectile
struct ASpellActor_Hydra_Mod02_C_HydraSpellActor_FireProjectile_Params
{
public:
	enum class EHydraHeads                       Head;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.ExecuteUbergraph_SpellActor_Hydra_Mod02
struct ASpellActor_Hydra_Mod02_C_ExecuteUbergraph_SpellActor_Hydra_Mod02_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2671[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Temp_struct_Variable;                              // 0x8(0x90)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EHydraHeads                       K2Node_Event_Head;                                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2677[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       CallFunc_Conv_FloatToForceSelection_ReturnValue;   // 0xA0(0x20)(NoDestructor)
	struct FCauseDamageStatusEffectOverrides     K2Node_MakeStruct_CauseDamageStatusEffectOverrides; // 0xC0(0x1C)(NoDestructor)
};

}
}


