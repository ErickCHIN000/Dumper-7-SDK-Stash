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

// 0x14 (0x14 - 0x0)
// Function BP_StoneStomp_SpecialEffect_Poison.BP_StoneStomp_SpecialEffect_Poison_C.OnEnemyHit
struct ABP_StoneStomp_SpecialEffect_Poison_C_OnEnemyHit_Params
{
public:
	class AEnemyCharacter_C*                     Enemy;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_StoneStomp_SpecialEffect_Poison.BP_StoneStomp_SpecialEffect_Poison_C.ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison
struct ABP_StoneStomp_SpecialEffect_Poison_C_ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Poison_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_Event_Enemy;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_ImpactNormal;                         // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


