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
// Function BP_DodgeSpecialEffect_Acid.BP_DodgeSpecialEffect_Acid_C.OnEnemyHit
struct ABP_DodgeSpecialEffect_Acid_C_OnEnemyHit_Params
{
public:
	class AEnemyCharacter_C*                     Enemy;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_DodgeSpecialEffect_Acid.BP_DodgeSpecialEffect_Acid_C.ExecuteUbergraph_BP_DodgeSpecialEffect_Acid
struct ABP_DodgeSpecialEffect_Acid_C_ExecuteUbergraph_BP_DodgeSpecialEffect_Acid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C75[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_Event_Enemy;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_ImpactNormal;                         // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C7F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBuffObjectPoisonDPS_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


